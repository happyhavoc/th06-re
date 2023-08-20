
void FUN_0043c6e0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0046932f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_0046cb9c;
  in_ECX[6] = &PTR_FUN_0046cbbc;
  local_4 = 1;
  FUN_0043cf20();
  FUN_0043c2f0();
  local_4 = local_4 & 0xffffff00;
  FUN_0043d130();
  *in_ECX = &PTR_LAB_0046cb7c;
  ExceptionList = local_c;
  return;
}

