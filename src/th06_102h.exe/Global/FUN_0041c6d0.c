
void FUN_0041c6d0(void)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0041c790();
  local_8 = 0xffffffff;
  FUN_0041c790();
  ExceptionList = local_10;
  return;
}

