
void __thiscall FUN_004324d0(AnmManager *this,AnmVm *vm)

{
  if ((uint)this->currentBlendMode != (vm->flags >> 2 & 1)) {
    this->currentBlendMode = (byte)(vm->flags >> 2) & 1;
    if (this->currentBlendMode == '\0') {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_DESTBLEND,6);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_DESTBLEND,2);
    }
  }
  if ((((g_GameContext.cfg.opts & 1) == 0) && ((g_GameContext.cfg.opts >> 8 & 1) == 0)) &&
     ((uint)this->currentColorOp != (vm->flags >> 3 & 1))) {
    this->currentColorOp = (byte)(vm->flags >> 3) & 1;
    if (this->currentColorOp == '\0') {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,4);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,7);
    }
  }
  if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
    if (this->currentTextureFactor != vm->color) {
      this->currentTextureFactor = vm->color;
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_TEXTUREFACTOR,this->currentTextureFactor);
    }
  }
  else {
    AnmManager::g_PrimitivesToDrawNoVertexBuf[4] = (float)vm->color;
    AnmManager::g_PrimitivesToDrawNoVertexBuf[11] = (float)vm->color;
    AnmManager::g_PrimitivesToDrawNoVertexBuf[18] = (float)vm->color;
    AnmManager::g_PrimitivesToDrawNoVertexBuf[25] = (float)vm->color;
    UINT_006d466c = vm->color;
    UINT_006d4684 = vm->color;
    UINT_006d469c = vm->color;
    UINT_006d46b4 = vm->color;
  }
  if (((g_GameContext.cfg.opts >> 6 & 1) == 0) &&
     ((uint)this->currentZWriteDisable != (vm->flags >> 0xc & 1))) {
    this->currentZWriteDisable = (byte)(vm->flags >> 0xc) & 1;
    if (this->currentZWriteDisable == '\0') {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_ZWRITEENABLE,1);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_ZWRITEENABLE,0);
    }
  }
  return;
}

