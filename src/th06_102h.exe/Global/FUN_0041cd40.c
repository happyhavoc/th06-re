
undefined2 * FUN_0041cd40(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 *local_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046919b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined2 *)operator_new(0x20);
  local_8 = 0;
  if (puVar1 == (undefined2 *)0x0) {
    local_24 = (undefined2 *)0x0;
  }
  else {
    local_24 = FUN_0041c720(puVar1);
  }
  *(undefined4 *)(local_24 + 2) = param_1;
  *(undefined4 *)(local_24 + 4) = 0;
  *(undefined4 *)(local_24 + 6) = 0;
  local_24[1] = local_24[1] | 1;
  ExceptionList = local_10;
  return local_24;
}

