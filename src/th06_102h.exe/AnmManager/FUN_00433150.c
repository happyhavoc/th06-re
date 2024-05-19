
int __thiscall AnmManager::FUN_00433150(AnmManager *this,AnmVm *vm)

{
  int iVar1;
  D3DMATRIX *pDVar2;
  float *pfVar3;
  double dVar4;
  D3DXMATRIX local_c4;
  D3DXMATRIX matrix;
  D3DMATRIX local_44;
  float rotation;
  
  if ((*(uint *)&vm->flags & 1) == 0) {
    iVar1 = -1;
  }
  else if ((*(uint *)&vm->flags >> 1 & 1) == 0) {
    iVar1 = -1;
  }
  else if ((vm->color).color == 0) {
    iVar1 = -1;
  }
  else {
    pDVar2 = &vm->matrix;
    pfVar3 = (float *)&local_c4;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = pDVar2->m[0][0];
      pDVar2 = (D3DMATRIX *)(pDVar2->m[0] + 1);
      pfVar3 = pfVar3 + 1;
    }
    local_c4.m[0][0] = local_c4.m[0][0] * vm->scaleX;
    local_c4.m[1][1] = -vm->scaleY * local_c4.m[1][1];
    rotation = (vm->rotation).x;
    if (NAN(rotation) == (rotation == 0.0)) {
      D3DXMatrixRotationX(&matrix,(vm->rotation).x);
      D3DXMatrixMultiply(&local_c4,&local_c4,&matrix);
    }
    rotation = (vm->rotation).y;
    if (NAN(rotation) == (rotation == 0.0)) {
      D3DXMatrixRotationY(&matrix,(vm->rotation).y);
      D3DXMatrixMultiply(&local_c4,&local_c4,&matrix);
    }
    rotation = (vm->rotation).z;
    if (NAN(rotation) == (rotation == 0.0)) {
      D3DXMatrixRotationZ(&matrix,(vm->rotation).z);
      D3DXMatrixMultiply(&local_c4,&local_c4,&matrix);
    }
    if ((*(uint *)&vm->flags >> 8 & 1) == 0) {
      local_c4.m[3][0] = (vm->pos).x;
    }
    else {
      dVar4 = _fabs((double)((vm->sprite->widthPx * vm->scaleX) / 2.0));
      local_c4.m[3][0] = (float)dVar4 + (vm->pos).x;
    }
    if ((*(uint *)&vm->flags >> 8 & 2) == 0) {
      local_c4.m[3][1] = -(vm->pos).y;
    }
    else {
      dVar4 = _fabs((double)((vm->sprite->heightPx * vm->scaleY) / 2.0));
      local_c4.m[3][1] = -(vm->pos).y - (float)dVar4;
    }
    local_c4.m[3][2] = (vm->pos).z;
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)(g_Supervisor.d3dDevice,D3DTS_WORLD,&local_c4);
    if (this->currentSprite != vm->sprite) {
      this->currentSprite = vm->sprite;
      pDVar2 = &vm->matrix;
      pfVar3 = (float *)&local_44;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = pDVar2->m[0][0];
        pDVar2 = (D3DMATRIX *)(pDVar2->m[0] + 1);
        pfVar3 = pfVar3 + 1;
      }
      local_44.m[2][0] = (vm->sprite->uvStart).x + (vm->uvScrollPos).x;
      local_44.m[2][1] = (vm->sprite->uvStart).y + (vm->uvScrollPos).y;
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
                (g_Supervisor.d3dDevice,D3DTS_TEXTURE0,&local_44);
      if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
        this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTexture)
                  (g_Supervisor.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
      }
    }
    if (this->currentVertexShader != '\x03') {
      if ((g_Supervisor.cfg.opts >> 1 & 1) == 0) {
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
                  (g_Supervisor.d3dDevice,D3DFVF_TEX1 | D3DFVF_XYZ);
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetStreamSource)
                  (g_Supervisor.d3dDevice,0,this->vertexBuffer,0x14);
      }
      else {
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
                  (g_Supervisor.d3dDevice,D3DFVF_TEX1 | D3DFVF_DIFFUSE | D3DFVF_XYZ);
      }
      this->currentVertexShader = '\x03';
    }
    SetRenderStateForVm(this,vm);
    if ((g_Supervisor.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
      (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitive)
                (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,0,2);
    }
    else {
      (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
                (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,g_PrimitivesToDrawUnknown,0x18);
    }
    iVar1 = 0;
  }
  return iVar1;
}

