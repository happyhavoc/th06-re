
VeryBigStruct1c000 * __fastcall FUN_00401000(VeryBigStruct1c000 *param_1)

{
  undefined *local_88;
  int local_80;
  int local_28;
  
  FUN_00403720(param_1);
  FUN_00403720((VeryBigStruct1c000 *)&param_1[1].field_0x4);
  local_28 = 0x100;
  do {
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  FUN_004010e0((int)&param_1[0x5d].field_0xe8);
  FUN_004010e0((int)(param_1 + 0x65));
  local_80 = 0x203;
  local_88 = &param_1[0x6c].field_0x24;
  while (local_80 = local_80 + -1, -1 < local_80) {
    FUN_00424127((Unk3field *)(local_88 + 0x18));
    local_88 = local_88 + 0x28;
  }
  return param_1;
}

