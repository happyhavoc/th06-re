
undefined4 FUN_0042a140(char (*param_1) [4],int param_2)

{
  undefined4 uVar1;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  char local_d;
  int local_8;
  
  if (param_1 == (char (*) [4])0x0) {
    uVar1 = 0xffffffff;
  }
  else if (*param_1 == (char  [4])0x50523654) {
    local_14 = param_1[3] + 3;
    local_d = param_1[3][2];
    for (local_8 = 0; local_8 < param_2 + -0xf; local_8 = local_8 + 1) {
      *local_14 = *local_14 - local_d;
      local_d = local_d + '\a';
      local_14 = local_14 + 1;
    }
    local_1c = param_1[3] + 2;
    local_18._0_1_ = '\x18';
    local_18._1_1_ = '\x03';
    local_18._2_1_ = '\0';
    local_18._3_1_ = '?';
    for (local_8 = 0; local_8 < param_2 + -0xe; local_8 = local_8 + 1) {
      local_18 = (char  [4])((int)local_18 + (uint)(byte)*local_1c);
      local_1c = local_1c + 1;
    }
    if (local_18 == param_1[2]) {
      if (*(short *)param_1[1] == 0x102) {
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

