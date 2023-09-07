
void __fastcall FUN_00402740(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_11c [32];
  uint local_9c;
  int local_8;
  
  if (DAT_0069d4bf != '\0') {
    g_GameContext.viewport.X = __ftol2((double)VIEWPORT_X);
    g_GameContext.viewport.Y = __ftol2((double)VIEWPORT_Y);
    g_GameContext.viewport.Width = __ftol2((double)VIEWPORT_WIDTH);
    g_GameContext.viewport.Height = __ftol2((double)VIEWPORT_HEIGHT);
    (*(g_GameContext.d3dDevice)->lpVtbl->SetViewport)
              (g_GameContext.d3dDevice,&g_GameContext.viewport);
    if ((DAT_006c7115 != '\0') && (*param_1 != 0)) {
      piVar2 = param_1 + 0x19a;
      piVar3 = local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      local_9c = local_9c | 0x1000;
      FUN_00432ad0(g_VeryBigStruct,(int)local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((param_1[local_8 * 0x44 + 0x22] & 1U) != 0) {
        FUN_00432ad0(g_VeryBigStruct,(int)(param_1 + local_8 * 0x44 + 2));
      }
    }
  }
  return;
}

