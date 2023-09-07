
undefined4 FUN_0040f100(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 8;
  *(undefined4 *)(param_1 + 4) = 0;
  for (local_c = 0; local_c < 0x200; local_c = local_c + 1) {
    if (*(char *)(local_8 + 0x178) != '\0') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      if ((*(int *)(local_8 + 0x174) != 0) &&
         (iVar1 = (**(code **)(local_8 + 0x174))(local_8), iVar1 != 1)) {
        *(undefined *)(local_8 + 0x178) = 0;
      }
      iVar1 = FUN_00433960(local_8);
      if (iVar1 != 0) {
        *(undefined *)(local_8 + 0x178) = 0;
      }
      *(undefined4 *)(local_8 + 0x164) = *(undefined4 *)(local_8 + 0x16c);
      FUN_00424285(&g_GameContext,(int *)(local_8 + 0x16c),(float *)(local_8 + 0x168));
    }
    local_8 = local_8 + 0x17c;
  }
  return 1;
}

