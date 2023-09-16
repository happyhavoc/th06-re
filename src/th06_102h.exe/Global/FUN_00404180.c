
undefined4 FUN_00404180(int param_1)

{
  AnmManager *pAVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    iVar2 = FUN_004172d3();
    if (iVar2 == 0) {
      FUN_00404970(2);
      FUN_00404970(3);
      if (*(int *)(param_1 + 0x80) == 1) {
        local_1c = 0x42000000;
        local_18 = 0x41800000;
        local_14 = 0x43d00000;
        local_10 = 0x43e80000;
        local_c = (*(int *)(param_1 + 0x84) * 0xff) / 0x3c;
        FUN_0042f8b0(&local_1c,local_c << 0x18);
      }
    }
  }
  pAVar1 = g_AnmManager;
  if (0 < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x84) <= (int)(uint)g_GameContext.cfg.frameskip_config) {
      *(undefined2 *)(param_1 + 0x13c) = 0x2b3;
      FUN_00432430((Unknown *)(param_1 + 0x88),(int)pAVar1->scripts[0x2b3]);
    }
    FUN_00432cc0((void *)(param_1 + 0x88));
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

