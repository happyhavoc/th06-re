
void InitD3dDevice(void)

{
  if ((g_Supervisor.cfg.opts >> 6 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZENABLE,1);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZENABLE,0);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_LIGHTING,0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_CULLMODE,1);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_ALPHABLENDENABLE,1);
  if ((g_Supervisor.cfg.opts >> 5 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_SHADEMODE,D3DSHADE_GOURAUD);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_SHADEMODE,D3DSHADE_FLAT);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
  if ((g_Supervisor.cfg.opts >> 6 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_ZFUNC,D3DCMP_LESSEQUAL);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_ZFUNC,D3DCMP_ALWAYS);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_ALPHATESTENABLE,1);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ALPHAREF,4);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ALPHAFUNC,7);
  if ((g_Supervisor.cfg.opts >> 10 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_FOGENABLE,1);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_FOGENABLE,0);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGDENSITY,0x3f800000);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_FOGTABLEMODE,3);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGCOLOR,0xffa0a0a0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGSTART,0x447a0000);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGEND,0x459c4000);
  if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,4);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,2);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,2);
  if ((g_Supervisor.cfg.opts >> 1 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG2,3);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG2,0);
  }
  if ((g_Supervisor.cfg.opts >> 8 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,4);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,2);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,2);
  if ((g_Supervisor.cfg.opts >> 1 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG2,3);
  }
  else {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG2,0);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_MIPFILTER,0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_MAGFILTER,2);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_MINFILTER,2);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_TEXTURETRANSFORMFLAGS,2);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ADDRESSW,3);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ADDRESSU,1);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ADDRESSV,1);
  if (g_AnmManager != (AnmManager *)0x0) {
    g_AnmManager->currentBlendMode = 0xff;
    g_AnmManager->currentColorOp = 0xff;
    g_AnmManager->currentVertexShader = 0xff;
    g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  }
  g_Stage.skyFogNeedsSetup = 1;
  return;
}

