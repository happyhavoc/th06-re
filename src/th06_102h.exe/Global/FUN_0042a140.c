
undefined4 FUN_0042a140(int *param_1,int param_2)

{
  undefined4 uVar1;
  byte *local_1c;
  int local_18;
  char *local_14;
  char local_d;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (*param_1 == 0x50523654) {
    local_14 = (char *)((int)param_1 + 0xf);
    local_d = *(char *)((int)param_1 + 0xe);
    for (local_8 = 0; local_8 < param_2 + -0xf; local_8 = local_8 + 1) {
      *local_14 = *local_14 - local_d;
      local_d = local_d + '\a';
      local_14 = local_14 + 1;
    }
    local_1c = (byte *)((int)param_1 + 0xe);
    local_18 = 0x3f000318;
    for (local_8 = 0; local_8 < param_2 + -0xe; local_8 = local_8 + 1) {
      local_18 = local_18 + (uint)*local_1c;
      local_1c = local_1c + 1;
    }
    if (local_18 == param_1[2]) {
      if (*(short *)(param_1 + 1) == 0x102) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

