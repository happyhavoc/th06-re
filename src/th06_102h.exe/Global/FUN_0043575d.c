
int __fastcall FUN_0043575d(int param_1)

{
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  local_18 = 0x7a;
  local_20 = (VeryBigStruct1c000 *)param_1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[1].field_0x4;
  }
  return param_1;
}

