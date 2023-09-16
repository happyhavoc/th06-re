
int __thiscall AnmManager::FUN_00433150(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  int iVar2;
  D3DMATRIX *pDVar3;
  D3DMATRIX *pDVar4;
  double dVar5;
  D3DMATRIX local_c4;
  undefined local_84 [64];
  D3DMATRIX local_44;
  
  if ((vm->flags & 1) == 0) {
    iVar2 = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    iVar2 = -1;
  }
  else if (vm->color == 0) {
    iVar2 = -1;
  }
  else {
    pDVar3 = &vm->matrix;
    pDVar4 = &local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      (pDVar4->field0_0x0).field0._11 = (pDVar3->field0_0x0).field0._11;
      pDVar3 = (D3DMATRIX *)((int)&pDVar3->field0_0x0 + 4);
      pDVar4 = (D3DMATRIX *)((int)&pDVar4->field0_0x0 + 4);
    }
    local_c4.field0_0x0.field0._11 = local_c4.field0_0x0.field0._11 * vm->scaleY;
    local_c4.field0_0x0.field0._22 = -vm->scaleX * local_c4.field0_0x0.field0._22;
    fVar1 = (vm->rotation).x;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      _D3DXMatrixRotationX_8(local_84,(vm->rotation).x);
      _D3DXMatrixMultiply_12(&local_c4,&local_c4,local_84);
    }
    fVar1 = (vm->rotation).y;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      _D3DXMatrixRotationY_8(local_84,(vm->rotation).y);
      _D3DXMatrixMultiply_12(&local_c4,&local_c4,local_84);
    }
    fVar1 = (vm->rotation).z;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      _D3DXMatrixRotationZ_8(local_84,(vm->rotation).z);
      _D3DXMatrixMultiply_12(&local_c4,&local_c4,local_84);
    }
    if ((vm->flags >> 8 & 1) == 0) {
      local_c4.field0_0x0.field0._41 = (vm->pos).x;
    }
    else {
      dVar5 = _fabs((double)((vm->sprite->widthPx * vm->scaleY) / 2.0));
      local_c4.field0_0x0.field0._41 = (float)dVar5 + (vm->pos).x;
    }
    if ((vm->flags >> 8 & 2) == 0) {
      local_c4.field0_0x0.field0._42 = -(vm->pos).y;
    }
    else {
      dVar5 = _fabs((double)((vm->sprite->heightPx * vm->scaleX) / 2.0));
      local_c4.field0_0x0.field0._42 = -(vm->pos).y - (float)dVar5;
    }
    local_c4.field0_0x0.field0._43 = (vm->pos).z;
    (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)(g_GameContext.d3dDevice,0x100,&local_c4);
    if (this->currentSprite != vm->sprite) {
      this->currentSprite = vm->sprite;
      pDVar3 = &vm->matrix;
      pDVar4 = &local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pDVar4->field0_0x0).field0._11 = (pDVar3->field0_0x0).field0._11;
        pDVar3 = (D3DMATRIX *)((int)&pDVar3->field0_0x0 + 4);
        pDVar4 = (D3DMATRIX *)((int)&pDVar4->field0_0x0 + 4);
      }
      local_44.field0_0x0.field0._31 = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
      local_44.field0_0x0.field0._32 = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
                (g_GameContext.d3dDevice,D3DTS_TEXTURE0,&local_44);
      if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
        this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTexture)
                  (g_GameContext.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
      }
    }
    if (this->field16_0x210be != '\x03') {
      if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
        (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x102);
        (*(g_GameContext.d3dDevice)->lpVtbl->SetStreamSource)
                  (g_GameContext.d3dDevice,0,this->vertexBuffer,0x14);
      }
      else {
        (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x142);
      }
      this->field16_0x210be = '\x03';
    }
    FUN_004324d0(this,(int)vm);
    if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
      (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitive)
                (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,0,2);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
                (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,&DAT_006d4660,0x18);
    }
    iVar2 = 0;
  }
  return iVar2;
}

