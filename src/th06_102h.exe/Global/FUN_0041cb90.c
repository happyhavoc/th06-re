
void FUN_0041cb90(int param_1)

{
  void *pvVar1;
  undefined4 local_60;
  void *local_5c;
  undefined local_3c [20];
  void *local_28;
  void *local_1c;
  void *local_18;
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046917e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041c720();
  local_8 = 0;
  pvVar1 = operator_new(0x20);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_5c = (void *)0x0;
  }
  else {
    local_5c = (void *)FUN_0041c720();
  }
  local_1c = local_5c;
  local_28 = local_5c;
  for (local_14 = (undefined *)param_1; local_8._0_1_ = 0, local_14 != (undefined *)0x0;
      local_14 = *(undefined **)((int)local_14 + 0x14)) {
    *(undefined **)((int)local_1c + 0x18) = local_14;
    pvVar1 = operator_new(0x20);
    local_8._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = FUN_0041c720();
    }
    *(undefined4 *)((int)local_1c + 0x14) = local_60;
    local_1c = *(void **)((int)local_1c + 0x14);
  }
  for (local_14 = local_3c; local_14 != (undefined *)0x0;
      local_14 = *(undefined **)(local_14 + 0x14)) {
    FUN_0041cde0(*(undefined4 *)(local_14 + 0x18));
  }
  local_1c = local_28;
  while (pvVar1 = local_1c, local_1c != (void *)0x0) {
    local_18 = *(void **)((int)local_1c + 0x14);
    if (local_1c != (void *)0x0) {
      FUN_0041c790();
      _free(pvVar1);
    }
    local_1c = local_18;
  }
  local_8 = 0xffffffff;
  FUN_0041c790();
  ExceptionList = local_10;
  return;
}

