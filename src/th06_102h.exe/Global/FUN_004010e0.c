
int FUN_004010e0(void)

{
  int in_ECX;
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  local_18 = 6;
  local_20 = (VeryBigStruct1c000 *)(in_ECX + 8);
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00403720(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[1].field_0x4;
  }
  FUN_00403720((VeryBigStruct1c000 *)(in_ECX + 0x668));
  return in_ECX;
}

