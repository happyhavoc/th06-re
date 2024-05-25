
int __thiscall AnmManager::FUN_00433590(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ZunResult ZVar6;
  int iVar7;
  D3DMATRIX *pDVar8;
  float *pfVar9;
  D3DMATRIX local_c4;
  D3DMATRIX local_44;
  
  uVar2._0_2_ = vm->flags;
  uVar2._2_1_ = vm->unk_82[0];
  uVar2._3_1_ = vm->unk_82[1];
  if ((uVar2 & 1) == 0) {
    ZVar6 = ZUN_ERROR;
  }
  else {
    uVar3._0_2_ = vm->flags;
    uVar3._2_1_ = vm->unk_82[0];
    uVar3._3_1_ = vm->unk_82[1];
    if ((uVar3 >> 1 & 1) == 0) {
      ZVar6 = ZUN_ERROR;
    }
    else {
      fVar1 = (vm->rotation).x;
      if (((NAN(fVar1) == (fVar1 == 0.0)) ||
          (fVar1 = (vm->rotation).y, NAN(fVar1) == (fVar1 == 0.0))) ||
         (fVar1 = (vm->rotation).z, NAN(fVar1) == (fVar1 == 0.0))) {
        ZVar6 = FUN_00433150(this,vm);
      }
      else if ((vm->color).color == 0) {
        ZVar6 = ZUN_ERROR;
      }
      else {
        pDVar8 = &vm->matrix;
        pfVar9 = (float *)&local_c4;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar9 = pDVar8->m[0][0];
          pDVar8 = (D3DMATRIX *)(pDVar8->m[0] + 1);
          pfVar9 = pfVar9 + 1;
        }
        local_c4.m[3][0] = ROUND((vm->pos).x) - 0.5;
        local_c4.m[3][1] = -ROUND((vm->pos).y) + 0.5;
        uVar4._0_2_ = vm->flags;
        uVar4._2_1_ = vm->unk_82[0];
        uVar4._3_1_ = vm->unk_82[1];
        if ((uVar4 >> 8 & 1) != 0) {
          local_c4.m[3][0] = (vm->sprite->widthPx * vm->scaleX) / 2.0 + local_c4.m[3][0];
        }
        uVar5._0_2_ = vm->flags;
        uVar5._2_1_ = vm->unk_82[0];
        uVar5._3_1_ = vm->unk_82[1];
        if ((uVar5 >> 8 & 2) != 0) {
          local_c4.m[3][1] = local_c4.m[3][1] - (vm->sprite->heightPx * vm->scaleY) / 2.0;
        }
        local_c4.m[3][2] = (vm->pos).z;
        local_c4.m[0][0] = local_c4.m[0][0] * vm->scaleX;
        local_c4.m[1][1] = -vm->scaleY * local_c4.m[1][1];
        (*(g_Supervisor.d3dDevice)->lpVtbl->SetTransform)
                  (g_Supervisor.d3dDevice,D3DTS_WORLD,&local_c4);
        if (this->currentSprite != vm->sprite) {
          this->currentSprite = vm->sprite;
          pDVar8 = &vm->matrix;
          pfVar9 = (float *)&local_44;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pfVar9 = pDVar8->m[0][0];
            pDVar8 = (D3DMATRIX *)(pDVar8->m[0] + 1);
            pfVar9 = pfVar9 + 1;
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
          if (this->currentVertexShader != '\x03') {
            if ((g_Supervisor.cfg.opts >> DONT_USE_VERTEX_BUF & 1) == 0) {
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
        ZVar6 = ZUN_SUCCESS;
      }
    }
  }
  return ZVar6;
}

