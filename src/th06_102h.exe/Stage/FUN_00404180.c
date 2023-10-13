
int Stage::FUN_00404180(Stage *arg)

{
  AnmManager *this;
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (arg->spellcardEclRelated0 < 2) {
    iVar1 = FUN_004172d3();
    if (iVar1 == 0) {
      FUN_00404970(arg,2);
      FUN_00404970(arg,3);
      if (arg->spellcardEclRelated0 == 1) {
        local_1c = 0x42000000;
        local_18 = 0x41800000;
        local_14 = 0x43d00000;
        local_10 = 0x43e80000;
        local_c = (arg->spellcardEclRelated1 * 0xff) / 0x3c;
        FUN_0042f8b0(&local_1c,local_c << 0x18);
      }
    }
  }
  this = g_AnmManager;
  if (0 < arg->spellcardEclRelated0) {
    if (arg->spellcardEclRelated1 <= (int)(uint)g_GameContext.cfg.frameskipConfig) {
      (arg->field20_0x88).anmFileIndex = 0x2b3;
      AnmManager::SetAndExecuteScript(this,&arg->field20_0x88,this->scripts[0x2b3]);
    }
    AnmManager::FUN_00432cc0(g_AnmManager,&arg->field20_0x88);
  }
  g_GameContext.viewport.MinZ = 0.0;
  g_GameContext.viewport.MaxZ = 0.5;
  FUN_0041c28c(0);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
            (g_GameContext.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
  local_8 = 0x447a0000;
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGSTART,0x447a0000);
  local_8 = 0x44fa0000;
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGEND,0x44fa0000);
  return 1;
}

