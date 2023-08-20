
void FUN_00403060(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  if (DAT_0069d4c0 != '\0') {
    g_GameContext._200_4_ = __ftol2();
    g_GameContext._204_4_ = __ftol2();
    g_GameContext._208_4_ = __ftol2();
    g_GameContext._212_4_ = __ftol2();
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
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
      in_ECX[0x142] = DAT_006d4588 + (0x1e - (uint)DAT_0069d4b8) * 0x38;
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

