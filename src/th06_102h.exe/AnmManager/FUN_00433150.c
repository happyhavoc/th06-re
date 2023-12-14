
int __thiscall AnmManager::FUN_00433150(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  int iVar2;
  D3DMATRIX *pDVar3;
  float *pfVar4;
  double dVar5;
  D3DXMATRIX local_c4;
  D3DXMATRIX local_84;
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
    pfVar4 = (float *)&local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = pDVar3->m[0][0];
      pDVar3 = (D3DMATRIX *)(pDVar3->m[0] + 1);
      pfVar4 = pfVar4 + 1;
    }
    local_c4.m[0][0] = local_c4.m[0][0] * vm->scaleX;
    local_c4.m[1][1] = -vm->scaleY * local_c4.m[1][1];
    fVar1 = (vm->rotation).x;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      D3DXMatrixRotationX(&local_84,(vm->rotation).x);
      D3DXMatrixMultiply(&local_c4,&local_c4,&local_84);
    }
    fVar1 = (vm->rotation).y;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      D3DXMatrixRotationY(&local_84,(vm->rotation).y);
      D3DXMatrixMultiply(&local_c4,&local_c4,&local_84);
    }
    fVar1 = (vm->rotation).z;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      D3DXMatrixRotationZ(&local_84,(vm->rotation).z);
      D3DXMatrixMultiply(&local_c4,&local_c4,&local_84);
    }
    if ((vm->flags >> 8 & 1) == 0) {
      local_c4.m[3][0] = (vm->pos).x;
    }
    else {
      dVar5 = _fabs((double)((vm->sprite->widthPx * vm->scaleX) / 2.0));
      local_c4.m[3][0] = (float)dVar5 + (vm->pos).x;
    }
    if ((vm->flags >> 8 & 2) == 0) {
      local_c4.m[3][1] = -(vm->pos).y;
    }
    else {
      dVar5 = _fabs((double)((vm->sprite->heightPx * vm->scaleY) / 2.0));
      local_c4.m[3][1] = -(vm->pos).y - (float)dVar5;
    }
    local_c4.m[3][2] = (vm->pos).z;
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)(g_Supervisor.d3dDevice,0x100,&local_c4);
    if (this->currentSprite != vm->sprite) {
      this->currentSprite = vm->sprite;
      pDVar3 = &vm->matrix;
      pfVar4 = (float *)&local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pDVar3->m[0][0];
        pDVar3 = (D3DMATRIX *)(pDVar3->m[0] + 1);
        pfVar4 = pfVar4 + 1;
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
                (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,Vertex_TEX1_DIFFUSE_XYZ_ARRAY_006d4660
                 ,0x18);
    }
    iVar2 = 0;
  }
  return iVar2;
}

