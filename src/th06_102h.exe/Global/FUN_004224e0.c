
undefined4 FUN_004224e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x138) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      if (*(int *)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4) != 0) {
        FUN_00422560(in_ECX,*(LPMIDIHDR *)(in_ECX + 0x10 + *(int *)(in_ECX + 0x90) * 4));
      }
    }
    FUN_00421d10();
    FUN_00421b50();
    uVar1 = 0;
  }
  return uVar1;
}

