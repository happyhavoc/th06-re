
undefined4 * __fastcall FUN_00421df0(undefined4 *param_1)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004691c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00421c30(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_0046b568;
  FUN_00421aa0(param_1 + 0x4f);
  param_1[0x4e] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  *(undefined *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    param_1[local_14 + 0x25] = 0;
  }
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    param_1[local_18 + 4] = 0;
  }
  param_1[0x24] = 0;
  ExceptionList = local_10;
  return param_1;
}

