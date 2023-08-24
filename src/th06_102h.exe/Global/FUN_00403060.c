
void FUN_00403060(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  if (DAT_0069d4c0 != '\0') {
    g_GameContext.viewport.X = __ftol2();
    g_GameContext.viewport.Y = __ftol2();
    g_GameContext.viewport.Width = __ftol2();
    g_GameContext.viewport.Height = __ftol2();
    (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
              (g_GameContext.d3d_device,(D3DVIEWPORT8 *)0x6c6de0);
    if ((DAT_006c7115 != '\0') && ((*in_ECX != 0 || (2 < in_ECX[1])))) {
      FUN_00432ad0(in_ECX + 0x19a);
    }
    if ((*in_ECX == 1) || (*in_ECX == 2)) {
      piVar2 = in_ECX + 0x46;
      piVar3 = in_ECX + 0x112;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      in_ECX[0x136] = (int)((float)in_ECX[0x119] * 8.0 + (float)in_ECX[0x136]);
      in_ECX[0x142] = (int)VERY_BIG_STRUCT + (0x1e - (uint)DAT_0069d4b8) * 0x38;
      FUN_00432ad0(in_ECX + 0x112);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((in_ECX[local_8 * 0x44 + 0x22] & 1U) != 0) {
        FUN_00432ad0(in_ECX + local_8 * 0x44 + 2);
      }
    }
  }
  return;
}

