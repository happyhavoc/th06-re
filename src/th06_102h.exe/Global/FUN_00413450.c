
VeryBigStruct1c000 * __fastcall FUN_00413450(VeryBigStruct1c000 *param_1)

{
  VeryBigStruct1c000 *local_60;
  int local_58;
  VeryBigStruct1c000 *local_30;
  int local_28;
  VeryBigStruct1c000 *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = param_1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    FUN_00413560(local_20);
    local_20 = (VeryBigStruct1c000 *)&local_20[5].field_0x24;
  }
  local_28 = 0x280;
  local_30 = (VeryBigStruct1c000 *)&param_1[0x52].field_0x28;
  while (local_28 = local_28 + -1, -1 < local_28) {
    FUN_00413560(local_30);
    FUN_00424127((Unk3field *)&local_30[5].field_0x60);
    local_30 = (VeryBigStruct1c000 *)&local_30[5].field_0x88;
  }
  local_58 = 0x40;
  local_60 = (VeryBigStruct1c000 *)&param_1[0xe16].field217_0xf0.field2_0x8;
  while (local_58 = local_58 + -1, -1 < local_58) {
    FUN_00403720(local_60);
    FUN_00403720((VeryBigStruct1c000 *)&local_60[1].field_0x4);
    FUN_00424127((Unk3field *)&local_60[2].field_0x44);
    local_60 = (VeryBigStruct1c000 *)&local_60[2].field_0x58;
  }
  FUN_00424127((Unk3field *)&param_1[0xeab].field222_0x100.field1_0x4);
  FUN_00413430((undefined4 *)param_1);
  return param_1;
}

