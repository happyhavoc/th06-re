
undefined4 FUN_0042fee0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x44200000;
  local_8 = 0x43f00000;
  g_GameContext.viewport.X = 0;
  g_GameContext.viewport.Y = 0;
  g_GameContext.viewport.Width = 0x280;
  g_GameContext.viewport.Height = 0x1e0;
  (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)(g_GameContext.d3dDevice,&g_GameContext.viewport)
  ;
  FUN_0042f8b0(&local_14,*(int *)(param_1 + 0x10) << 0x18 | *(uint *)(param_1 + 0x18));
  return 1;
}

