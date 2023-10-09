
int __thiscall AnmManager::FUN_00433590(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  int iVar2;
  D3DMATRIX *pDVar3;
  float *pfVar4;
  D3DMATRIX local_c4 [2];
  D3DMATRIX local_44;
  
  if ((vm->flags & 1) == 0) {
    iVar2 = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    iVar2 = -1;
  }
  else {
    fVar1 = (vm->rotation).x;
    if (((NAN(fVar1) == (fVar1 == 0.0)) || (fVar1 = (vm->rotation).y, NAN(fVar1) == (fVar1 == 0.0)))
       || (fVar1 = (vm->rotation).z, NAN(fVar1) == (fVar1 == 0.0))) {
      iVar2 = FUN_00433150(this,vm);
    }
    else if (vm->color == 0) {
      iVar2 = -1;
    }
    else {
      pDVar3 = &vm->matrix;
      pfVar4 = (float *)local_c4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = pDVar3->m[0][0];
        pDVar3 = (D3DMATRIX *)(pDVar3->m[0] + 1);
        pfVar4 = pfVar4 + 1;
      }
      local_c4[0].m[3][0] = ROUND((vm->pos).x) - 0.5;
      local_c4[0].m[3][1] = -ROUND((vm->pos).y) + 0.5;
      if ((vm->flags >> 8 & 1) != 0) {
        local_c4[0].m[3][0] = (vm->sprite->widthPx * vm->scaleX) / 2.0 + local_c4[0].m[3][0];
      }
      if ((vm->flags >> 8 & 2) != 0) {
        local_c4[0].m[3][1] = local_c4[0].m[3][1] - (vm->sprite->heightPx * vm->scaleY) / 2.0;
      }
      local_c4[0].m[3][2] = (vm->pos).z;
      local_c4[0].m[0][0] = local_c4[0].m[0][0] * vm->scaleX;
      local_c4[0].m[1][1] = -vm->scaleY * local_c4[0].m[1][1];
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)(g_GameContext.d3dDevice,0x100,local_c4);
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
        (*(g_GameContext.d3dDevice)->lpVtbl->SetTransform)
                  (g_GameContext.d3dDevice,D3DTS_TEXTURE0,&local_44);
        if (this->currentTexture != this->textures[vm->sprite->sourceFileIndex]) {
          this->currentTexture = this->textures[vm->sprite->sourceFileIndex];
          (*(g_GameContext.d3dDevice)->lpVtbl->SetTexture)
                    (g_GameContext.d3dDevice,0,(IDirect3DBaseTexture8 *)this->currentTexture);
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
      }
      FUN_004324d0(this,vm);
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
  }
  return iVar2;
}

