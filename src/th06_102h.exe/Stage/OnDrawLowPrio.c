
ChainCallbackResult Stage::OnDrawLowPrio(Stage *arg)

{
  AnmManager *this;
  int iVar1;
  ZunRect local_1c;
  int local_c;
  undefined4 local_8;
  
  if ((int)arg->spellcardState < 2) {
    iVar1 = Gui::IsStageFinished(&g_Gui);
    if (iVar1 == 0) {
      RenderObjects(arg,2);
      RenderObjects(arg,3);
      if (arg->spellcardState == RUNNING) {
        local_1c.left = 32.0;
        local_1c.top = 16.0;
        local_1c.right = 416.0;
        local_1c.bottom = 464.0;
        local_c = (arg->ticksSinceSpellcardStarted * 0xff) / 0x3c;
        DrawSquare(&local_1c,local_c << 0x18);
      }
    }
  }
  this = g_AnmManager;
  if (0 < (int)arg->spellcardState) {
    if (arg->ticksSinceSpellcardStarted <= (int)(uint)g_Supervisor.cfg.frameskipConfig) {
      (arg->spellcardBackground).anmFileIndex = 0x2b3;
      AnmManager::SetAndExecuteScript(this,&arg->spellcardBackground,this->scripts[0x2b3]);
    }
    AnmManager::Draw(g_AnmManager,&arg->spellcardBackground);
  }
  g_Supervisor.viewport.MinZ = 0.0;
  g_Supervisor.viewport.MaxZ = 0.5;
  SetupCameraStageBackground(0.0);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,(D3DVIEWPORT8 *)0x6c6de0);
  local_8 = 0x447a0000;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGSTART,0x447a0000);
  local_8 = 0x44fa0000;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGEND,0x44fa0000);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

