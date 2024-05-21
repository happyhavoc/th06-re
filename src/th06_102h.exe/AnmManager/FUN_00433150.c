
/* WARNING: Unable to use type for symbol pfVar4 */

ZunResult __thiscall AnmManager::FUN_00433150(AnmManager *this,AnmVm *vm)

{
  ZunResult ZVar1;
  int iVar2;
  D3DMATRIX *pDVar3;
  float *pfVar5;
  double dVar6;
  D3DXMATRIX local_c4;
  D3DXMATRIX matrix;
  D3DMATRIX local_44;
  float *pfVar4;
  float rotation;
  
  if ((*(uint *)&vm->flags & 1) == 0) {
    ZVar1 = ZUN_ERROR;
  }
  else if ((*(uint *)&vm->flags >> 1 & 1) == 0) {
    ZVar1 = ZUN_ERROR;
  }
  else if ((vm->color).color == 0) {
    ZVar1 = ZUN_ERROR;
  }
  else {
    pDVar3 = &vm->matrix;
    pfVar4 = (float *)&local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = pDVar3->m[0][0];
      pDVar3 = (D3DMATRIX *)(pDVar3->m[0] + 1);
      pfVar4 = pfVar4 + 1;
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
      dVar6 = _fabs((double)((vm->sprite->widthPx * vm->scaleX) / 2.0));
      local_c4.m[3][0] = (float)dVar6 + (vm->pos).x;
    }
    if ((*(uint *)&vm->flags >> 8 & 2) == 0) {
      local_c4.m[3][1] = -(vm->pos).y;
    }
    else {
      dVar6 = _fabs((double)((vm->sprite->heightPx * vm->scaleY) / 2.0));
      local_c4.m[3][1] = -(vm->pos).y - (float)dVar6;
    }
    local_c4.m[3][2] = (vm->pos).z;
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)(g_Supervisor.d3dDevice,D3DTS_WORLD,&local_c4);
    if (this->currentSprite != vm->sprite) {
      this->currentSprite = vm->sprite;
      pDVar3 = &vm->matrix;
      pfVar5 = (float *)&local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = pDVar3->m[0][0];
        pDVar3 = (D3DMATRIX *)(pDVar3->m[0] + 1);
        pfVar5 = pfVar5 + 1;
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
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

