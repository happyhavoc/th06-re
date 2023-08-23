
void FUN_0041cb90(int param_1)

{
  undefined2 *puVar1;
  short *in_ECX;
  undefined2 *local_60;
  undefined2 *local_5c;
  undefined2 local_3c [10];
  undefined2 *local_28;
  undefined2 *local_1c;
  undefined2 *local_18;
  undefined2 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046917e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041c720(local_3c);
  local_8 = 0;
  puVar1 = (undefined2 *)operator_new(0x20);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined2 *)0x0) {
    local_5c = (undefined2 *)0x0;
  }
  else {
    local_5c = FUN_0041c720(puVar1);
  }
  local_1c = local_5c;
  local_28 = local_5c;
  for (local_14 = (undefined2 *)param_1; local_8._0_1_ = 0, local_14 != (undefined2 *)0x0;
      local_14 = *(undefined2 **)((int)local_14 + 0x14)) {
    *(undefined2 **)(local_1c + 0xc) = local_14;
    puVar1 = (undefined2 *)operator_new(0x20);
    local_8._0_1_ = 2;
    if (puVar1 == (undefined2 *)0x0) {
      local_60 = (undefined2 *)0x0;
    }
    else {
      local_60 = FUN_0041c720(puVar1);
    }
    *(undefined2 **)(local_1c + 10) = local_60;
    local_1c = *(undefined2 **)(local_1c + 10);
  }
  for (local_14 = local_3c; local_14 != (undefined2 *)0x0;
      local_14 = *(undefined2 **)(local_14 + 10)) {
    FUN_0041cde0(in_ECX,*(short **)(local_14 + 0xc));
  }
  local_1c = local_28;
  while (puVar1 = local_1c, local_1c != (undefined2 *)0x0) {
    local_18 = *(undefined2 **)(local_1c + 10);
    if (local_1c != (undefined2 *)0x0) {
      FUN_0041c790();
      _free(puVar1);
    }
    local_1c = local_18;
  }
  local_8 = 0xffffffff;
  FUN_0041c790();
  ExceptionList = local_10;
  return;
}

