
/* WARNING: Unable to use type for symbol pfVar4 */

ZunResult __thiscall AnmManager::FUN_00433150(AnmManager *this,AnmVm *vm)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ZunResult ZVar5;
  int iVar6;
  D3DMATRIX *pDVar7;
  float *pfVar8;
  double dVar9;
  D3DXMATRIX local_c4;
  D3DXMATRIX matrix;
  D3DMATRIX local_44;
  float *pfVar4;
  float rotation;
  
  uVar1._0_2_ = vm->flags;
  uVar1._2_1_ = vm->unk_82[0];
  uVar1._3_1_ = vm->unk_82[1];
  if ((uVar1 & 1) == 0) {
    ZVar5 = ZUN_ERROR;
  }
  else {
    uVar2._0_2_ = vm->flags;
    uVar2._2_1_ = vm->unk_82[0];
    uVar2._3_1_ = vm->unk_82[1];
    if ((uVar2 >> 1 & 1) == 0) {
      ZVar5 = ZUN_ERROR;
    }
    else if ((vm->color).color == 0) {
      ZVar5 = ZUN_ERROR;
    }
    else {
      pDVar7 = &vm->matrix;
      pfVar4 = (float *)&local_c4;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar4 = pDVar7->m[0][0];
        pDVar7 = (D3DMATRIX *)(pDVar7->m[0] + 1);
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
      uVar3._0_2_ = vm->flags;
      uVar3._2_1_ = vm->unk_82[0];
      uVar3._3_1_ = vm->unk_82[1];
      if ((uVar3 >> 8 & 1) == 0) {
        local_c4.m[3][0] = (vm->pos).x;
      }
      else {
        dVar9 = _fabs((double)((vm->sprite->widthPx * vm->scaleX) / 2.0));
        local_c4.m[3][0] = (float)dVar9 + (vm->pos).x;
      }
      uVar4._0_2_ = vm->flags;
      uVar4._2_1_ = vm->unk_82[0];
      uVar4._3_1_ = vm->unk_82[1];
      if ((uVar4 >> 8 & 2) == 0) {
        local_c4.m[3][1] = -(vm->pos).y;
      }
      else {
        dVar9 = _fabs((double)((vm->sprite->heightPx * vm->scaleY) / 2.0));
        local_c4.m[3][1] = -(vm->pos).y - (float)dVar9;
      }
      local_c4.m[3][2] = (vm->pos).z;
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
                (g_Supervisor.d3dDevice,D3DTS_WORLD,&local_c4);
      if (this->currentSprite != vm->sprite) {
        this->currentSprite = vm->sprite;
        pDVar7 = &vm->matrix;
        pfVar8 = (float *)&local_44;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar8 = pDVar7->m[0][0];
          pDVar7 = (D3DMATRIX *)(pDVar7->m[0] + 1);
          pfVar8 = pfVar8 + 1;
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
      ZVar5 = ZUN_SUCCESS;
    }
  }
  return ZVar5;
}

