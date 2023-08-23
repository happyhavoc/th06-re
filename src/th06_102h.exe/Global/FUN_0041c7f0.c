
undefined2 * FUN_0041c7f0(void)

{
  UINT UVar1;
  undefined2 *in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041c720(in_ECX);
  local_8 = 0;
  FUN_0041c720(in_ECX + 0x10);
  UVar1 = midiOutGetNumDevs();
  *(UINT *)(in_ECX + 0x20) = UVar1;
  *(undefined4 *)(in_ECX + 0x22) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

