
undefined4 * FUN_00421df0(void)

{
  undefined4 *in_ECX;
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004691c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00421c30();
  local_8 = 0;
  *in_ECX = &PTR_FUN_0046b568;
  FUN_00421aa0();
  in_ECX[0x4e] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x45] = 0;
  *(undefined *)(in_ECX + 0xb1) = 0;
  in_ECX[0xb2] = 0;
  in_ECX[0xb3] = 0;
  in_ECX[0xb4] = 0;
  in_ECX[0xb5] = 0;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 0;
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    in_ECX[local_14 + 0x25] = 0;
  }
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    in_ECX[local_18 + 4] = 0;
  }
  in_ECX[0x24] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

