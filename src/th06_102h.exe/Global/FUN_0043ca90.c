
undefined4 __thiscall FUN_0043ca90(int **param_1_00,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0046934b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0043c8d0(param_1_00);
  if (iVar1 != 0) {
    pvVar2 = operator_new(0x24);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0043c440();
    }
    local_4 = 0xffffffff;
    *param_1_00 = piVar3;
    if (piVar3 != (int *)0x0) {
      iVar1 = FUN_0043c4a0(param_2);
      if (iVar1 != 0) {
        uVar4 = FUN_0043c790();
        ExceptionList = local_c;
        return uVar4;
      }
      if (*param_1_00 != (int *)0x0) {
        (**(code **)(**param_1_00 + 0x1c))(1);
        *param_1_00 = (int *)0x0;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

