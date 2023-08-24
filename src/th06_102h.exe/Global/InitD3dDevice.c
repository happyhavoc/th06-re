
void InitD3dDevice(void)

{
  if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZENABLE,1);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ZENABLE,0);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_LIGHTING,0);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_CULLMODE,1);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_ALPHABLENDENABLE,1);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 5 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_SHADEMODE,D3DSHADE_GOURAUD);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_SHADEMODE,D3DSHADE_FLAT);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_ZFUNC,D3DCMP_LESSEQUAL);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_ZFUNC,D3DCMP_ALWAYS);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_ALPHATESTENABLE,1);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ALPHAREF,4);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)(g_GameContext.d3d_device,D3DRS_ALPHAFUNC,7);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 10 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_FOGENABLE,1);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
              (g_GameContext.d3d_device,D3DRS_FOGENABLE,0);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_FOGDENSITY,0x3f800000);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_FOGTABLEMODE,3);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_FOGCOLOR,0xffa0a0a0);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_FOGSTART,0x447a0000);
  (*(g_GameContext.d3d_device)->lpVtbl->SetRenderState)
            (g_GameContext.d3d_device,D3DRS_FOGEND,0x459c4000);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,4);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAOP,2);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG1,2);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG2,3);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_ALPHAARG2,0);
  }
  if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLOROP,4);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLOROP,2);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_COLORARG1,2);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLORARG2,3);
  }
  else {
    (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
              (g_GameContext.d3d_device,0,D3DTSS_COLORARG2,0);
  }
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_MIPFILTER,0);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_MAGFILTER,2);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_MINFILTER,2);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_TEXTURETRANSFORMFLAGS,2);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ADDRESSW,3);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ADDRESSU,1);
  (*(g_GameContext.d3d_device)->lpVtbl->SetTextureStageState)
            (g_GameContext.d3d_device,0,D3DTSS_ADDRESSV,1);
  if (VERY_BIG_STRUCT != (VeryBigStruct *)0x0) {
    VERY_BIG_STRUCT->field_0x210bc = 0xff;
    VERY_BIG_STRUCT->field_0x210bd = 0xff;
    VERY_BIG_STRUCT->field_0x210be = 0xff;
    VERY_BIG_STRUCT->field19869_0x210b8 = 0;
  }
  DAT_00487b8c = 1;
  return;
}

