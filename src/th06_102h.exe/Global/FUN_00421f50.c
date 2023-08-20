
void FUN_00421f50(void)

{
  undefined4 *in_ECX;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_004691f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_0046b568;
  local_8 = 1;
  FUN_004224e0();
  FUN_004220b0();
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    FUN_00422070(local_14);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_00421ad0();
  local_8 = 0xffffffff;
  FUN_00421c60();
  ExceptionList = local_10;
  return;
}

