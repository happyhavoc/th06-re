
void FUN_0043c440(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004692e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_0046cb7c;
  FUN_0043c2f0();
  local_4 = 0;
  FUN_0043ce40();
  in_ECX[6] = &PTR_FUN_0046cbbc;
  *in_ECX = &PTR_FUN_0046cb9c;
  ExceptionList = local_c;
  return;
}

