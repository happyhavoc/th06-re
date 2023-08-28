
void * __fastcall FUN_0042d8a1(void *param_1)

{
  undefined4 *local_58;
  int local_50;
  VeryBigStruct1c000 *local_3c;
  int local_34;
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  local_18 = 0x26;
  local_20 = (VeryBigStruct1c000 *)((int)param_1 + 0x40);
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[1].field_0x4;
  }
  local_34 = 0x10;
  local_3c = (VeryBigStruct1c000 *)((int)param_1 + 0x28a0);
  while (local_34 = local_34 + -1, -1 < local_34) {
    FUN_00403720(local_3c);
    local_3c = (VeryBigStruct1c000 *)&local_3c[1].field_0x4;
  }
  FUN_00403720((VeryBigStruct1c000 *)((int)param_1 + 0x39a0));
  local_50 = 0x14;
  local_58 = (undefined4 *)((int)param_1 + 0x3ab0);
  while (local_50 = local_50 + -1, -1 < local_50) {
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58 = local_58 + 3;
  }
  _memset(param_1,0,0x56b0);
  *(undefined4 *)((int)param_1 + 0x10) = 1;
  return param_1;
}

