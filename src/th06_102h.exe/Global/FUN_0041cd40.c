
int FUN_0041cd40(undefined4 param_1)

{
  void *pvVar1;
  int local_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046919b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x20);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_0041c720();
  }
  *(undefined4 *)(local_24 + 4) = param_1;
  *(undefined4 *)(local_24 + 8) = 0;
  *(undefined4 *)(local_24 + 0xc) = 0;
  *(ushort *)(local_24 + 2) = *(ushort *)(local_24 + 2) | 1;
  ExceptionList = local_10;
  return local_24;
}

