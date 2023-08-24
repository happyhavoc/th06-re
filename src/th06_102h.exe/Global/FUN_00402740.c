
void FUN_00402740(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_11c [32];
  uint local_9c;
  int local_8;
  
  if (DAT_0069d4bf != '\0') {
    g_GameContext.viewport.X = __ftol2();
    g_GameContext.viewport.Y = __ftol2();
    g_GameContext.viewport.Width = __ftol2();
    g_GameContext.viewport.Height = __ftol2();
    (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
              (g_GameContext.d3d_device,(D3DVIEWPORT8 *)0x6c6de0);
    if ((DAT_006c7115 != '\0') && (*in_ECX != 0)) {
      piVar2 = in_ECX + 0x19a;
      piVar3 = local_11c;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      local_9c = local_9c | 0x1000;
      FUN_00432ad0(local_11c);
    }
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((in_ECX[local_8 * 0x44 + 0x22] & 1U) != 0) {
        FUN_00432ad0(in_ECX + local_8 * 0x44 + 2);
      }
    }
  }
  return;
}

