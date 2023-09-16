
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d930(Unknown *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)&param_1[0x10].field_0xa4) {
    FUN_0040caf0(param_1,param_2);
    iVar1 = DAT_006d4588;
    if (_DAT_006d1bf0 == 0) {
      iVar1._0_2_ = param_1[0x12].field16_0x84;
      iVar1._2_2_ = param_1[0x12].field17_0x86;
      if ((0 < iVar1) &&
         (FUN_004241e5(1), iVar1 = DAT_006d4588, iVar2._0_2_ = param_1[0x12].field16_0x84,
         iVar2._2_2_ = param_1[0x12].field17_0x86, iVar2 == 0)) {
        if (*(short *)&param_1[0x12].field_0x92 < 0) {
          *(undefined2 *)&param_1->field_0xb4 = 0x1a0;
          FUN_00432430(param_1,*(int *)(iVar1 + 0x1cfb4));
          *(undefined2 *)&param_1[0x12].field_0x92 = 0xa1;
        }
        *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
             *(byte *)((int)&param_1[0x12].field18_0x88 + 1) | 1;
      }
    }
    else {
      if (-1 < *(short *)&param_1[0x12].field_0x92) {
        *(undefined2 *)&param_1->field_0xb4 = 0x1a5;
        FUN_00432430(param_1,*(int *)(iVar1 + 0x1cfc8));
        *(undefined2 *)&param_1[0x12].field_0x92 = 0xffff;
      }
      *(byte *)((int)&param_1[0x12].field18_0x88 + 1) =
           *(byte *)((int)&param_1[0x12].field18_0x88 + 1) & 0xfe;
      param_1[0x12].field16_0x84 = 0x3c;
      param_1[0x12].field17_0x86 = 0;
      param_1[0x12].field15_0x80 = 0;
      param_1[0x12].field14_0x7c = -999;
    }
  }
  return;
}

