
int Stage::OnDrawHighPrio(Stage *arg)

{
  int iVar1;
  
  if (arg->skyFogNeedsSetup != 0) {
    arg->skyFogNeedsSetup = 0;
    (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
              (g_GameContext.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
  if (arg->spellcardEclRelated0 < 2) {
    iVar1 = FUN_004172d3(0x69bc30);
    if (iVar1 == 0) {
      FUN_00404970(arg,0);
      FUN_00404970(arg,1);
    }
  }
  return 1;
}

