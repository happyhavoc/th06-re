
undefined4 __fastcall Gui::FUN_004190ec(Gui *param_1)

{
  undefined4 uVar1;
  int local_94;
  float local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  
  if (param_1[0xd8].field7_0x1c < 0) {
    uVar1 = 0xffffffff;
  }
  else if ((g_GameManager.current_stage == 6) &&
          ((param_1[0xd8].field7_0x1c == 1 || (param_1[0xd8].field7_0x1c == 0xb)))) {
    uVar1 = 0;
  }
  else {
    if ((int)param_1[0xd8].boss_health_bar2 < 0x3c) {
      local_8 = (((float)(int)param_1[0xd8].boss_health_bar2 + param_1[0xd8].boss_health_bar1) *
                48.0) / 60.0;
    }
    else {
      local_8 = 48.0;
    }
    local_94 = 4;
    do {
      local_94 = local_94 + -1;
    } while (-1 < local_94);
    local_5c = ((g_GameManager.arcade_region_size.x - 256.0) / 2.0 +
               g_GameManager.arcade_region_top_left_pos.x) - 16.0;
    uStack_58 = 0x43c00000;
    uStack_54 = 0;
    local_48 = (g_GameManager.arcade_region_size.x - 256.0) / 2.0 +
               g_GameManager.arcade_region_top_left_pos.x + 256.0 + 16.0;
    uStack_44 = 0x43c00000;
    uStack_40 = 0;
    local_34 = ((g_GameManager.arcade_region_size.x - 256.0) / 2.0 +
               g_GameManager.arcade_region_top_left_pos.x) - 16.0;
    fStack_30 = local_8 + 384.0;
    uStack_2c = 0;
    local_20 = (g_GameManager.arcade_region_size.x - 256.0) / 2.0 +
               g_GameManager.arcade_region_top_left_pos.x + 256.0 + 16.0;
    fStack_1c = local_8 + 384.0;
    uStack_18 = 0;
    local_38 = 0xd0000000;
    local_4c = 0xd0000000;
    local_10 = 0x90000000;
    local_24 = 0x90000000;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)&param_1[0xd9].impl);
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)&param_1[0xdf].blue_spellcard_bar_length);
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
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)&param_1[0xe5].ecl_set_lives);
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)&param_1[0xeb].field7_0x1c);
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)&param_1[0xf1].boss_health_bar1);
    AnmManager::FUN_00432ad0(g_AnmManager,(AnmVm *)(param_1 + 0xf8));
    uVar1 = 0;
  }
  return uVar1;
}

