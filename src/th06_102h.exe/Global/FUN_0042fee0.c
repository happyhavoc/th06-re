
undefined4 FUN_0042fee0(int param_1)

{
  zRect local_14;
  
  local_14.left = 0.0;
  local_14.top = 0.0;
  local_14.right = 640.0;
  local_14.bottom = 480.0;
  g_Supervisor.viewport.X = 0;
  g_Supervisor.viewport.Y = 0;
  g_Supervisor.viewport.Width = 0x280;
  g_Supervisor.viewport.Height = 0x1e0;
  (*(g_Supervisor.d3dDevice)->lpVtbl->SetViewport)(g_Supervisor.d3dDevice,&g_Supervisor.viewport);
  DrawSquare(&local_14,*(int *)(param_1 + 0x10) << 0x18 | *(uint *)(param_1 + 0x18));
  return 1;
}

