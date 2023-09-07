
undefined4 FUN_004040d0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined *)(param_1 + 0x7c) = 0;
    (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
              (g_GameContext.d3dDevice,D3DRS_FOGCOLOR,*(DWORD *)(param_1 + 0x50));
  }
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGSTART,*(DWORD *)(param_1 + 0x48));
  (*(g_GameContext.d3dDevice)->lpVtbl->SetRenderState)
            (g_GameContext.d3dDevice,D3DRS_FOGEND,*(DWORD *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x80) < 2) {
    iVar1 = FUN_004172d3();
    if (iVar1 == 0) {
      FUN_00404970(0);
      FUN_00404970(1);
    }
  }
  return 1;
}

