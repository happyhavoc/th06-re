
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00429c50(int param_1)

{
  VeryBigStruct *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int local_c;
  int local_8;
  
  if (DAT_0069d4bd == 0) {
    if ((g_GameContext._396_4_ != 3) &&
       (iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,5,"data/player00.anm",0x400), iVar2 != 0)) {
      return 0xffffffff;
    }
    pVVar1 = VERY_BIG_STRUCT;
    *(undefined2 *)(param_1 + 0xb4) = 0x400;
    FUN_00432430(param_1,*(undefined4 *)&pVVar1->field_0x1d934);
  }
  else if (DAT_0069d4bd == 1) {
    if ((g_GameContext._396_4_ != 3) &&
       (iVar2 = FUN_00431dc0((int)VERY_BIG_STRUCT,5,"data/player01.anm",0x400), iVar2 != 0)) {
      return 0xffffffff;
    }
    pVVar1 = VERY_BIG_STRUCT;
    *(undefined2 *)(param_1 + 0xb4) = 0x400;
    FUN_00432430(param_1,*(undefined4 *)&pVVar1->field_0x1d934);
  }
  *(float *)(param_1 + 0x440) = _DAT_0069d6e4 / 2.0;
  *(float *)(param_1 + 0x444) = _DAT_0069d6e8 - 64.0;
  *(undefined4 *)(param_1 + 0x448) = 0x3efae148;
  *(undefined4 *)(param_1 + 0x4a8) = 0x3efae148;
  *(undefined4 *)(param_1 + 0x4b4) = 0x3efae148;
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x638 + local_8 * 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 0x488) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x48c) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x490) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x494) = 0x41400000;
  *(undefined4 *)(param_1 + 0x498) = 0x41400000;
  *(undefined4 *)(param_1 + 0x49c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  puVar3 = (undefined4 *)(&DAT_00476728 + ((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 0x18);
  puVar4 = (undefined4 *)(param_1 + 0x9f4);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  fVar5 = (float10)FUN_0045bc34(0x4000000000000000);
  *(float *)(param_1 + 0x9fc) = *(float *)(param_1 + 0x9f4) / (float)fVar5;
  fVar5 = (float10)FUN_0045bc34(0x4000000000000000);
  *(float *)(param_1 + 0xa00) = *(float *)(param_1 + 0x9f8) / (float)fVar5;
  *(undefined4 *)(param_1 + 0x75c0) = *(undefined4 *)(param_1 + 0xa04);
  *(undefined4 *)(param_1 + 0x75c4) = *(undefined4 *)(param_1 + 0xa08);
  *(undefined *)(param_1 + 0x9e0) = 1;
  *(undefined4 *)(param_1 + 0x75bc) = 0x78;
  *(undefined4 *)(param_1 + 0x75b8) = 0;
  *(undefined4 *)(param_1 + 0x75b4) = 0xfffffc19;
  *(undefined *)(param_1 + 0x9e2) = 0;
  pVVar1 = VERY_BIG_STRUCT;
  *(undefined2 *)(param_1 + 0x1c4) = 0x480;
  FUN_00432430(param_1 + 0x110,*(undefined4 *)&pVVar1->field_0x1db34);
  pVVar1 = VERY_BIG_STRUCT;
  *(undefined2 *)(param_1 + 0x2d4) = 0x481;
  FUN_00432430(param_1 + 0x220,*(undefined4 *)&pVVar1->field_0x1db38);
  local_c = param_1 + 0xa28;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    *(undefined2 *)(local_c + 0x14e) = 0;
    local_c = local_c + 0x158;
  }
  *(undefined4 *)(param_1 + 0x75b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75ac) = 0;
  *(undefined4 *)(param_1 + 0x75a8) = 0xfffffc19;
  *(undefined **)(param_1 + 0x75dc) =
       (&PTR_FUN_00476708)[((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 2];
  *(undefined **)(param_1 + 0x75e0) =
       (&PTR_FUN_0047670c)[((uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2) * 2];
  *(undefined4 *)(param_1 + 0x75c8) = 0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    puVar3 = (undefined4 *)(param_1 + 0x9b8 + local_8 * 0xc);
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0xfffffc19;
  }
  *(undefined4 *)(param_1 + 0x9d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9d8) = 8;
  return 0;
}

