
int __fastcall FUN_004010e0(int param_1)

{
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  local_18 = 6;
  local_20 = (VeryBigStruct1c000 *)(param_1 + 8);
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[1].field_0x4;
  }
  FUN_00403720((VeryBigStruct1c000 *)(param_1 + 0x668));
  return param_1;
}

