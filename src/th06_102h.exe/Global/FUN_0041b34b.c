
VeryBigStruct1c000 * FUN_0041b34b(void)

{
  VeryBigStruct1c000 *in_ECX;
  VeryBigStruct1c000 *local_10;
  int local_8;
  
  local_8 = 0x1a;
  local_10 = in_ECX;
  while (local_8 = local_8 + -1, -1 < local_8) {
    FUN_00403720(local_10);
    local_10 = (VeryBigStruct1c000 *)&local_10[1].field_0x4;
  }
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1a].field_0x6c);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1b].field_0x70);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1c].field_0x74);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1d].field_0x78);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1e].field_0x7c);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x1f].field_0x80);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x20].field_0x84);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x21].field_0x88);
  FUN_00403720((VeryBigStruct1c000 *)&in_ECX[0x22].field_0x8c);
  FUN_0041b4c4();
  FUN_00424127((Unk3field *)(in_ECX + 0x2a));
  FUN_00424127((Unk3field *)&in_ECX[0x2a].field_0x20);
  FUN_00424127((Unk3field *)&in_ECX[0x2a].field_0x40);
  return in_ECX;
}

