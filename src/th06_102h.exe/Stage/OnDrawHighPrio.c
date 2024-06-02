
ChainCallbackResult Stage::OnDrawHighPrio(Stage *arg)

{
  BOOL BVar1;
  
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
    BVar1 = Gui::IsStageFinished(&g_Gui);
    if (BVar1 == 0) {
      RenderObjects(arg,0);
      RenderObjects(arg,1);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

