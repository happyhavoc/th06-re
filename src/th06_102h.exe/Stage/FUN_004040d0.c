
int Stage::FUN_004040d0(Stage *arg)

{
  int iVar1;
  
  if (*(char *)&arg->field17_0x7c != '\0') {
    *(undefined *)&arg->field17_0x7c = 0;
    (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
              (g_GameContext.d3dDevice,D3DRS_FOGCOLOR,(arg->skyFog).color);
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGSTART,(DWORD)(arg->skyFog).nearPlane);
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGEND,(DWORD)(arg->skyFog).farPlane);
  if (arg->spellcardEclRelated0 < 2) {
    iVar1 = FUN_004172d3();
    if (iVar1 == 0) {
      FUN_00404970(arg,0);
      FUN_00404970(arg,1);
    }
  }
  return 1;
}
