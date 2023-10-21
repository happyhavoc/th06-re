
void FUN_0042f8b0(float *param_1,float param_2)

{
  int local_88;
  float local_54 [10];
  
  local_88 = 4;
  do {
    local_88 = local_88 + -1;
  } while (-1 < local_88);
  local_54[1] = param_1[1];
  local_54[0] = *param_1;
  local_54[2] = 0.0;
  local_54[6] = param_1[1];
  local_54[5] = param_1[2];
  local_54[7] = 0.0;
  local_54[8] = 1.0;
  local_54[3] = 1.0;
  local_54[9] = param_2;
  local_54[4] = param_2;
  if ((g_GameContext.cfg.opts >> 8 & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3dDevice,0,D3DTSS_ALPHAOP,2);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,2);
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3dDevice,0,D3DTSS_ALPHAARG1,0);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3dDevice,0,D3DTSS_COLORARG1,0);
  if ((g_GameContext.cfg.opts >> TURN_OFF_DEPTH_TEST & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)(g_GameContext.d3dDevice,D3DRS_ZFUNC,8);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
              (g_GameContext.d3dDevice,D3DRS_ZWRITEENABLE,0);
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)(g_GameContext.d3dDevice,D3DRS_DESTBLEND,6);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetVertexShader)(g_GameContext.d3dDevice,0x44);
  (*(g_GameContext.d3dDevice)->lpVtbl->DrawPrimitiveUP)
            (g_GameContext.d3dDevice,D3DPT_TRIANGLESTRIP,2,local_54,0x14);
  g_AnmManager->currentVertexShader = 0xff;
  g_AnmManager->currentSprite = (AnmLoadedSprite *)0x0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  g_AnmManager->currentColorOp = 0xff;
  g_AnmManager->currentBlendMode = 0xff;
  g_AnmManager->currentZWriteDisable = 0xff;
  if ((g_GameContext.cfg.opts >> 8 & 1) == 0) {
    (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3dDevice,0,D3DTSS_ALPHAOP,4);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3dDevice,0,D3DTSS_COLOROP,4);
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3dDevice,0,D3DTSS_ALPHAARG1,2);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3dDevice,0,D3DTSS_COLORARG1,2);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)(g_GameContext.d3dDevice,D3DRS_ZFUNC,4);
  return;
}

