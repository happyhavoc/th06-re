
ChainCallbackResult Stage::OnDrawHighPrio(Stage *arg)

{
  int iVar1;
  
  if (arg->skyFogNeedsSetup != 0) {
    arg->skyFogNeedsSetup = 0;
    (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
              (g_Supervisor.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
  }
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetRenderState)
            (g_Supervisor.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
  if ((int)arg->spellcardState < 2) {
    iVar1 = Gui::FUN_004172d3(&g_Gui);
    if (iVar1 == 0) {
      FUN_00404970(arg,0);
      FUN_00404970(arg,1);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

