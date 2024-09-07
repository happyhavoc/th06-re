
ZunResult __thiscall th06::GuiImpl::DrawDialogue(GuiImpl *this)

{
  ZunResult uVar1;
  int local_94;
  D3DXVECTOR3 local_5c;
  
  if ((int)(this->msg).current_msg_idx < 0) {
    uVar1 = ZUN_ERROR;
  }
  else if ((g_GameManager.current_stage == 6) &&
          (((this->msg).current_msg_idx == 1 || ((this->msg).current_msg_idx == 0xb)))) {
    uVar1 = ZUN_SUCCESS;
  }
  else {
    local_94 = 4;
    do {
      local_94 = local_94 + -1;
    } while (-1 < local_94);
    local_5c.x = ((g_GameManager.arcade_region_size.x - 256.0) / 2.0 +
                 g_GameManager.arcade_region_top_left_pos.x) - 16.0;
    local_5c.y = 384.0;
    local_5c.z = 0.0;
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).portraits);
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).portraits + 1);
    if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1) == 0) {
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
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
                (g_Supervisor.d3dDevice,D3DRS_ZWRITEENABLE,0);
    }
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetVertexShader)(g_Supervisor.d3dDevice,0x44);
    (*(g_Supervisor.d3dDevice)->lpVtbl->DrawPrimitiveUP)
              (g_Supervisor.d3dDevice,D3DPT_TRIANGLESTRIP,2,&local_5c,0x14);
    g_AnmManager->currentVertexShader = 0xff;
    g_AnmManager->currentColorOp = 0xff;
    g_AnmManager->currentBlendMode = 0xff;
    g_AnmManager->currentZWriteDisable = 0xff;
    if ((g_Supervisor.cfg.opts >> NO_COLOR_COMP & 1) == 0) {
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAOP,4);
      (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
                (g_Supervisor.d3dDevice,0,D3DTSS_COLOROP,4);
    }
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_ALPHAARG1,2);
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetTextureStageState)
              (g_Supervisor.d3dDevice,0,D3DTSS_COLORARG1,2);
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).dialogue_lines);
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).dialogue_lines + 1);
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).intro_lines);
    AnmManager::DrawNoRotation(g_AnmManager,(this->msg).intro_lines + 1);
    uVar1 = ZUN_SUCCESS;
  }
  return uVar1;
}

