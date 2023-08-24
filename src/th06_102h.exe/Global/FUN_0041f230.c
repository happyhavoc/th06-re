
VeryBigStruct1c000 * FUN_0041f230(void)

{
  VeryBigStruct1c000 *in_ECX;
  VeryBigStruct1c000 *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = in_ECX;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    FUN_00403720(local_24);
    FUN_00424127((Unk3field *)&local_24[1].field_0x28);
    local_24 = (VeryBigStruct1c000 *)&local_24[1].field48_0x30.field2_0x8;
  }
  return in_ECX;
}

