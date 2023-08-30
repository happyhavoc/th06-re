
undefined4 __fastcall FUN_004224e0(void *param_1)

{
  undefined4 uVar1;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x138) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      if (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x90) * 4 + 0x10) != 0) {
        FUN_00422560((int)param_1,
                     *(LPMIDIHDR *)((int)param_1 + *(int *)((int)param_1 + 0x90) * 4 + 0x10));
      }
    }
    FUN_00421d10((int)param_1);
    FUN_00421b50((HMIDIOUT *)((int)param_1 + 0x13c));
    uVar1 = 0;
  }
  return uVar1;
}

