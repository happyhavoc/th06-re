
void __fastcall DropChain(int param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00469148;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0041c790(param_1 + 0x20);
  local_8 = 0xffffffff;
  FUN_0041c790(param_1);
  ExceptionList = local_10;
  return;
}

