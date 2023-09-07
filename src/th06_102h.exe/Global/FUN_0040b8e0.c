
void FUN_0040b8e0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  Unknown *local_c;
  int local_8;
  
  local_c = (Unknown *)&DAT_005ab5f8;
  iVar1 = *(int *)(param_2 + 0x10);
  FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
  for (local_8 = 0; local_8 < 0x280; local_8 = local_8 + 1) {
    if ((*(short *)((int)&local_c[7].field13_0x3c.field9_0x24 + 2) != 0) &&
       (*(short *)((int)&local_c[7].field13_0x3c.field9_0x24 + 2) != 5)) {
      *(undefined2 *)((int)&local_c[7].field13_0x3c.field8_0x20 + 2) = 0xf;
      FUN_004323a0(g_VeryBigStruct,local_c,
                   *(short *)&local_c->field_0xb2 +
                   *(short *)((int)&local_c[7].field13_0x3c.field8_0x20 + 2));
      if (iVar1 == 0) {
        local_c[7].field10_0x28 = 0;
        local_c[7].field4_0x10 = 0;
        local_c[7].field5_0x14 = 0;
        local_c[7].field6_0x18 = 0.0;
      }
      else if (iVar1 == 1) {
        *(ushort *)&local_c[7].field13_0x3c.field8_0x20 =
             *(ushort *)&local_c[7].field13_0x3c.field8_0x20 | 0x10;
        local_c[7].field13_0x3c.field4_0x10 = 0xdc;
        local_c[7].field13_0x3c.field3_0xc = 0;
        local_c[7].field13_0x3c.field2_0x8 = 0;
        local_c[7].field13_0x3c.field1_0x4 = -999;
        fVar2 = (float10)FUN_0041e820();
        fVar3 = (float10)(float)(fVar2 * (float10)6.283185 - (float10)3.141593);
        fVar2 = (float10)fcos(fVar3);
        fVar3 = (float10)fsin(fVar3);
        local_c[7].field7_0x1c = (float)(fVar2 * (float10)0.01);
        local_c[7].field8_0x20 = (float)(fVar3 * (float10)0.01);
      }
    }
    local_c = (Unknown *)&local_c[7].field13_0x3c.field11_0x2c;
  }
  return;
}

