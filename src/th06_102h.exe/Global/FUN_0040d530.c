
void FUN_0040d530(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  Unknown *local_68;
  float local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_68 = (Unknown *)&DAT_005ab5f8;
  puVar3 = local_5c;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  fVar4 = (float10)FUN_0041e820();
  FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((*(short *)((int)&local_68[7].field13_0x3c.field9_0x24 + 2) != 0) &&
         (*(short *)((int)&local_68[7].field13_0x3c.field9_0x24 + 2) != 5)) &&
        (local_68->field67_0xc0 != (VeryBigStruct0tbl *)0x0)) &&
       ((fVar1 = local_68->field67_0xc0->field35_0x2c, fVar1 < 30.0 != NAN(fVar1) &&
        (NAN((float)local_68[7].field10_0x28) != ((float)local_68[7].field10_0x28 == 0.0))))) {
      *(ushort *)&local_68[7].field13_0x3c.field8_0x20 =
           *(ushort *)&local_68[7].field13_0x3c.field8_0x20 | 0x10;
      *(undefined2 *)((int)&local_68[7].field13_0x3c.field8_0x20 + 2) = 2;
      FUN_004323a0(VERY_BIG_STRUCT,local_68,
                   *(short *)&local_68->field_0xb2 +
                   *(short *)((int)&local_68[7].field13_0x3c.field8_0x20 + 2));
      local_68[7].field10_0x28 = 0x3c23d70a;
      local_68[7].field13_0x3c.field3_0xc = 0;
      local_68[7].field13_0x3c.field2_0x8 = 0;
      local_68[7].field13_0x3c.field1_0x4 = -999;
      local_68[7].field13_0x3c.field4_0x10 = 0x78;
      fVar1 = (*(float *)(param_1 + 0xc70) - (float)local_68[7].field2_0x8) *
              (*(float *)(param_1 + 0xc70) - (float)local_68[7].field2_0x8) +
              (*(float *)(param_1 + 0xc6c) - (float)local_68[7].field1_0x4) *
              (*(float *)(param_1 + 0xc6c) - (float)local_68[7].field1_0x4);
      if (fVar1 <= 0.1) {
        local_64 = 0.0;
      }
      else {
        fVar5 = (float10)FUN_0045bc34((double)fVar1);
        local_64 = (float)fVar5;
      }
      fVar6 = (float10)((local_64 * 3.141593) / 256.0 +
                       (float)(fVar4 * (float10)6.283185 - (float10)3.141593));
      fVar5 = (float10)fcos(fVar6);
      fVar6 = (float10)fsin(fVar6);
      local_68[7].field7_0x1c = (float)(fVar5 * (float10)0.01);
      local_68[7].field8_0x20 = (float)(fVar6 * (float10)0.01);
    }
    local_68 = (Unknown *)&local_68[7].field13_0x3c.field11_0x2c;
  }
  return;
}
