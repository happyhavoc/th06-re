
int FUN_00426000(void)

{
  int in_ECX;
  VeryBigStruct1c000 *local_3c;
  int local_34;
  int local_18;
  int local_c;
  
  FUN_00424127((Unk3field *)(in_ECX + 8));
  local_c = 8;
  do {
    local_c = local_c + -1;
  } while (-1 < local_c);
  local_18 = 8;
  do {
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  local_34 = 0x20;
  local_3c = (VeryBigStruct1c000 *)(in_ECX + 0x11c);
  while (local_34 = local_34 + -1, -1 < local_34) {
    FUN_00403720(local_3c);
    local_3c = (VeryBigStruct1c000 *)&local_3c[1].field_0x4;
  }
  return in_ECX;
}

