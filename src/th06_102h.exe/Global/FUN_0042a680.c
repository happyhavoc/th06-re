
undefined4 FUN_0042a680(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int local_c;
  
  *param_1 = 0;
  if (param_1[1] == 0) {
    pvVar3 = operator_new(0x50);
    param_1[1] = pvVar3;
    *(char (*) [4])param_1[1] = (char  [4])0x50523654;
    *(char *)(param_1[1] + 6) = DAT_0069d4be + DAT_0069d4bd * '\x02';
    *(undefined2 *)(param_1[1] + 4) = 0x102;
    *(undefined *)(param_1[1] + 7) = (undefined)DAT_0069bcb0;
    *(undefined4 *)(param_1[1] + 0x19) = 0x4e204f4e;
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      *(undefined4 *)(param_1[1] + 0x34 + local_c * 4) = 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)(param_1[1] + 0x2c + DAT_0069d6d4 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    *puVar1 = DAT_0069bca4;
  }
  if (*(int *)(param_1[1] + 0x30 + DAT_0069d6d4 * 4) != 0) {
    DebugPrint2("error : replay.cpp");
  }
  pvVar3 = _malloc(0x69780);
  *(void **)(param_1[1] + 0x30 + DAT_0069d6d4 * 4) = pvVar3;
  iVar2 = *(int *)(param_1[1] + 0x30 + DAT_0069d6d4 * 4);
  *(undefined *)(iVar2 + 10) = DAT_0069d4bb;
  *(undefined *)(iVar2 + 9) = DAT_0069d4ba;
  *(undefined *)(iVar2 + 8) = (undefined)USHORT_0069d4b0;
  *(undefined *)(iVar2 + 0xb) = DAT_0069d710;
  *(undefined2 *)(iVar2 + 6) = DAT_0069d4b6;
  *(undefined2 *)(iVar2 + 4) = DAT_0069d6cc;
  *(undefined *)(iVar2 + 0xc) = DAT_0069d4b9;
  param_1[0x12] = iVar2 + 0x10;
  *(undefined4 *)param_1[0x12] = 0;
  *(undefined2 *)(param_1[0x12] + 4) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  return 0;
}

