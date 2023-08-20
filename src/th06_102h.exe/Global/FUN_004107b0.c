
undefined4 FUN_004107b0(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_40;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046911b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x1170);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_40 = (int *)0x0;
  }
  else {
    local_40 = (int *)FUN_004108b0();
  }
  local_8 = 0xffffffff;
  iVar2 = FUN_0041cd40(FUN_004109c0);
  *local_40 = iVar2;
  *(int **)(*local_40 + 0x1c) = local_40;
  *(code **)(*local_40 + 8) = FUN_00410b10;
  *(code **)(*local_40 + 0xc) = FUN_00410d80;
  iVar2 = FUN_0041c860(*local_40,3);
  if (iVar2 == 0) {
    iVar2 = FUN_0041cd40(FUN_00410a70);
    local_40[1] = iVar2;
    *(int **)(local_40[1] + 0x1c) = local_40;
    FUN_0041c940(local_40[1],1);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar3;
}

