
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00403060(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  if (DAT_0069d4c0 != '\0') {
    g_GameContext.viewport.X = __ftol2((double)_DAT_0069d6dc);
    g_GameContext.viewport.Y = __ftol2((double)_DAT_0069d6e0);
    g_GameContext.viewport.Width = __ftol2((double)_DAT_0069d6e4);
    g_GameContext.viewport.Height = __ftol2((double)_DAT_0069d6e8);
    (*(g_GameContext.d3d_device)->lpVtbl->SetViewport)
              (g_GameContext.d3d_device,(D3DVIEWPORT8 *)0x6c6de0);
    if ((DAT_006c7115 != '\0') && ((*param_1 != 0 || (2 < param_1[1])))) {
      FUN_00432ad0(param_1 + 0x19a);
    }
    if ((*param_1 == 1) || (*param_1 == 2)) {
      piVar2 = param_1 + 0x46;
      piVar3 = param_1 + 0x112;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      param_1[0x136] = (int)((float)param_1[0x119] * 8.0 + (float)param_1[0x136]);
      param_1[0x142] = (int)VERY_BIG_STRUCT + (0x1e - (uint)DAT_0069d4b8) * 0x38;
      FUN_00432ad0(param_1 + 0x112);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((param_1[local_8 * 0x44 + 0x22] & 1U) != 0) {
        FUN_00432ad0(param_1 + local_8 * 0x44 + 2);
      }
    }
  }
  return;
}

