
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042f060(undefined4 *param_1)

{
  VeryBigStruct *pVVar1;
  int iVar2;
  undefined4 uVar3;
  short local_3c;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (param_1[2] != 0x11) {
    iVar2 = VeryBigStruct::LogoStuff(VERY_BIG_STRUCT,0,"data/result/result.jpg");
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x25,"data/result00.anm",0x100);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x26,"data/result01.anm",0x108);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x27,"data/result02.anm",0x10f);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,0x28,"data/result03.anm",0x125);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    local_c = param_1 + 0x10;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      local_c[0x24] = 0;
      local_c[0x25] = 0;
      local_c[0x26] = 0;
      local_c[0x39] = 0;
      local_c[0x3a] = 0;
      local_c[0x3b] = 0;
      pVVar1 = VERY_BIG_STRUCT;
      local_3c = (short)local_8 + 0x100;
      *(short *)(local_c + 0x2d) = local_3c;
      FUN_00432430(local_c,*(undefined4 *)(&pVVar1->field_0x1cd34 + local_8 * 4));
      local_c = local_c + 0x44;
    }
    local_c = param_1 + 0xa28;
    for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
      FUN_00403580();
      FUN_004323a0(local_c,local_8 + 0x708);
      local_c[0x24] = 0;
      local_c[0x25] = 0;
      local_c[0x26] = 0;
      local_c[0x20] = local_c[0x20] | 0x300;
      *(undefined *)(local_c + 0x43) = 0xf;
      *(undefined *)((int)local_c + 0x10d) = 0xf;
      local_c = local_c + 0x44;
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        param_1[local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xeeb] =
             local_14 * -100000 + 1000000;
        param_1[local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee8] = 0x53594d44;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb1)
             = (undefined)local_8;
        *(undefined *)(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xeea) = 0x10;
        *(undefined2 *)
         ((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3ba6) = 0x1c;
        *(undefined2 *)(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee9) = 0x1c;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb2)
             = 1;
        *(undefined *)((int)param_1 + local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3ba9)
             = 0;
        FUN_0042bc2d(param_1 + local_8 * 0x118 + local_10 * 0x46 + local_14 * 7 + 0xee8,local_8,
                     local_10);
        _strcpy((char *)((int)param_1 +
                        local_14 * 0x1c + local_10 * 0x118 + local_8 * 0x460 + 0x3bb3),"Nanashi ");
      }
    }
  }
  param_1[5] = 0;
  uVar3 = FUN_0042b0d9("score.dat");
  *param_1 = uVar3;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      FUN_0042b280(*param_1,param_1 + local_8 * 0xc + local_10 * 3 + 0xeac,local_10,local_8);
    }
  }
  if ((param_1[2] != 9) && (param_1[2] != 0x11)) {
    FUN_0042b466(*param_1,&DAT_0069bcd0);
    FUN_0042b502(*param_1,&DAT_0069ccd0);
    FUN_0042b65e(*param_1,&DAT_0069cd30);
  }
  if ((param_1[2] == 0x11) &&
     ((uint)(&DAT_0069cd3c)
            [(DAT_0069d6d4 + -1) * 0x14 +
             ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x78 + _DAT_0069bcb0 * 5] <
      DAT_0069bca4)) {
    (&DAT_0069cd3c)
    [(DAT_0069d6d4 + -1) * 0x14 +
     ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x78 + _DAT_0069bcb0 * 5] = DAT_0069bca4;
  }
  *(undefined2 *)(param_1 + 0xe94) = 0xffff;
  return 0;
}

