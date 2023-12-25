
void DrawSquare(zRect *param_1,D3DCOLOR param_2)

{
  int local_88;
  Vertex_DIFFUSE_XYZRWH local_54 [4];
  
  local_88 = 4;
  do {
    local_88 = local_88 + -1;
  } while (-1 < local_88);
  local_54[0].pos.y = param_1->top;
  local_54[0].pos.x = param_1->left;
  local_54[0].pos.z = 0.0;
  local_54[1].pos.y = param_1->top;
  local_54[1].pos.x = param_1->right;
  local_54[1].pos.z = 0.0;
  local_54[2].pos.y = param_1->bottom;
  local_54[2].pos.x = param_1->left;
  local_54[2].pos.z = 0.0;
  local_54[3].pos.y = param_1->bottom;
  local_54[3].pos.x = param_1->right;
  local_54[3].pos.z = 0.0;
  local_54[3].pos.w = 1.0;
  local_54[2].pos.w = 1.0;
  local_54[1].pos.w = 1.0;
  local_54[0].pos.w = 1.0;
  local_54[3].diffuse = param_2;
  local_54[2].diffuse = param_2;
  local_54[1].diffuse = param_2;
  local_54[0].diffuse = param_2;
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
            (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,local_54,0x14);
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

