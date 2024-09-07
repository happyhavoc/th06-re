
void th06::ScreenEffect::DrawSquare(ZunRect *rect,D3DCOLOR RectColor)

{
  int local_88;
  Vertex_DIFFUSE_XYZRWH vertices [4];
  
  local_88 = 4;
  do {
    local_88 = local_88 + -1;
  } while (-1 < local_88);
  vertices[0].pos.y = rect->top;
  vertices[0].pos.x = rect->left;
  vertices[0].pos.z = 0.0;
  vertices[1].pos.y = rect->top;
  vertices[1].pos.x = rect->right;
  vertices[1].pos.z = 0.0;
  vertices[2].pos.y = rect->bottom;
  vertices[2].pos.x = rect->left;
  vertices[2].pos.z = 0.0;
  vertices[3].pos.y = rect->bottom;
  vertices[3].pos.x = rect->right;
  vertices[3].pos.z = 0.0;
  vertices[3].pos.w = 1.0;
  vertices[2].pos.w = 1.0;
  vertices[1].pos.w = 1.0;
  vertices[0].pos.w = 1.0;
  vertices[3].diffuse = RectColor;
  vertices[2].diffuse = RectColor;
  vertices[1].diffuse = RectColor;
  vertices[0].diffuse = RectColor;
  if ((g_Supervisor.cfg.opts >> 8 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,2);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,2);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,0);
  if ((g_Supervisor.cfg.opts >> TURN_OFF_DEPTH_TEST & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,8);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZWRITEENABLE,0)
    ;
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_DESTBLEND,6);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)
            (g_Supervisor.d3dDevice,D3DFVF_DIFFUSE | D3DFVF_XYZRHW);
  (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
            (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,vertices,0x14);
  g_AnmManager->currentVertexShader = 0xff;
  g_AnmManager->currentSprite = (AnmLoadedSprite *)0x0;
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  g_AnmManager->currentColorOp = 0xff;
  g_AnmManager->currentBlendMode = 0xff;
  g_AnmManager->currentZWriteDisable = 0xff;
  if ((g_Supervisor.cfg.opts >> 8 & 1) == 0) {
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,4);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,4);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,2);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
            (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,2);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)(g_Supervisor.d3dDevice,D3DRS_ZFUNC,4);
  return;
}

