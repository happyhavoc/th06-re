
void FUN_0040de00(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_7c;
  undefined4 *local_74;
  Unknown *local_68;
  int local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_60 = 0;
  local_74 = &DAT_005ab5f8;
  puVar3 = local_5c;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((*(short *)((int)local_74 + 0x5be) != 0) && (*(short *)((int)local_74 + 0x5be) != 5)) &&
        (local_74[0x30] != 0)) && (30.0 <= *(float *)(local_74[0x30] + 0x2c))) {
      local_60 = local_60 + 1;
      fVar4 = (float10)FUN_0045be40((double)((float)local_74[0x159] - *(float *)(param_1 + 0xc70)));
      local_68 = (Unknown *)&DAT_005ab5f8;
      for (local_7c = 0; local_7c < 0x280; local_7c = local_7c + 1) {
        if ((((*(short *)((int)&local_68[7].field13_0x3c.field9_0x24 + 2) != 0) &&
             (*(short *)((int)&local_68[7].field13_0x3c.field9_0x24 + 2) != 5)) &&
            ((local_68->field67_0xc0 != (VeryBigStruct0tbl *)0x0 &&
             ((fVar1 = local_68->field67_0xc0->field35_0x2c, fVar1 < 30.0 != NAN(fVar1) &&
              (NAN((float)local_68[7].field10_0x28) != ((float)local_68[7].field10_0x28 == 0.0))))))
            ) && (fVar5 = (float10)FUN_0045bc34(), (float)fVar5 < 64.0 != NAN((float)fVar5))) {
          *(ushort *)&local_68[7].field13_0x3c.field8_0x20 =
               *(ushort *)&local_68[7].field13_0x3c.field8_0x20 | 0x10;
          local_68[7].field10_0x28 = 0x3c23d70a;
          local_68[7].field13_0x3c.field3_0xc = 0;
          local_68[7].field13_0x3c.field2_0x8 = 0;
          local_68[7].field13_0x3c.field1_0x4 = -999;
          local_68[7].field13_0x3c.field4_0x10 = 0x78;
          fVar5 = (float10)FUN_0045be40((double)((float)local_68[7].field2_0x8 -
                                                *(float *)(param_1 + 0xc70)),
                                        (double)((float)local_68[7].field1_0x4 -
                                                *(float *)(param_1 + 0xc6c)));
          local_68[7].field12_0x30.field1_0x4 = ((float)fVar5 - (float)fVar4) * 2.2 + (float)fVar4;
          fVar6 = (float10)(float)local_68[7].field12_0x30.field1_0x4;
          fVar5 = (float10)fcos(fVar6);
          fVar6 = (float10)fsin(fVar6);
          local_68[7].field7_0x1c = (float)(fVar5 * (float10)0.01);
          local_68[7].field8_0x20 = (float)(fVar6 * (float10)0.01);
          *(short *)((int)&local_68[7].field13_0x3c.field8_0x20 + 2) =
               *(short *)((int)&local_68[7].field13_0x3c.field8_0x20 + 2) + 1;
          FUN_004323a0(g_VeryBigStruct,local_68,
                       *(short *)&local_68->field_0xb2 +
                       *(short *)((int)&local_68[7].field13_0x3c.field8_0x20 + 2));
        }
        local_68 = (Unknown *)&local_68[7].field13_0x3c.field11_0x2c;
      }
    }
    local_74 = local_74 + 0x171;
  }
  FUN_0040d930(param_1,param_2);
  *(int *)(param_1 + 0x9b0) = local_60;
  return;
}

