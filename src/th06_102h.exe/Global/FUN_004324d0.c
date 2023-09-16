
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004324d0(AnmManager *param_1_00,int param_2)

{
  if ((uint)param_1_00->currentBlendMode != (*(uint *)(param_2 + 0x80) >> 2 & 1)) {
    param_1_00->currentBlendMode = (byte)(*(uint *)(param_2 + 0x80) >> 2) & 1;
    if (param_1_00->currentBlendMode == '\0') {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_DESTBLEND,6);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_DESTBLEND,2);
    }
  }
  if ((((g_GameContext.cfg.opts & 1) == 0) && ((g_GameContext.cfg.opts >> 8 & 1) == 0)) &&
     ((uint)param_1_00->currentColorOp != (*(uint *)(param_2 + 0x80) >> 3 & 1))) {
    param_1_00->currentColorOp = (byte)(*(uint *)(param_2 + 0x80) >> 3) & 1;
    if (param_1_00->currentColorOp == '\0') {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,4);
    }
    else {
      (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,7);
    }
  }
  if ((g_GameContext.cfg.opts >> 1 & 1) == 0) {
    if (param_1_00->currentTextureFactor != *(D3DCOLOR *)(param_2 + 0x7c)) {
      param_1_00->currentTextureFactor = *(D3DCOLOR *)(param_2 + 0x7c);
      (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
                (g_GameContext.d3dDevice,D3DRS_TEXTUREFACTOR,param_1_00->currentTextureFactor);
    }
  }
  else {
    _DAT_006d45a0 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45bc = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45d8 = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d45f4 = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._12_4_ = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._36_4_ = *(undefined4 *)(param_2 + 0x7c);
    VERTEX_BUFFER_CONTENTS._60_4_ = *(undefined4 *)(param_2 + 0x7c);
    _DAT_006d46b4 = *(undefined4 *)(param_2 + 0x7c);
  }
  if (((g_GameContext.cfg.opts >> 6 & 1) == 0) &&
     ((uint)param_1_00->currentZWriteDisable != (*(uint *)(param_2 + 0x80) >> 0xc & 1))) {
    param_1_00->currentZWriteDisable = (byte)(*(uint *)(param_2 + 0x80) >> 0xc) & 1;
    if (param_1_00->currentZWriteDisable == '\0') {
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

