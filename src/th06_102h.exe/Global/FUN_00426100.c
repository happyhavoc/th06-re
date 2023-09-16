
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00426100(int param_1,Unknown *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  float *pfVar6;
  float10 fVar7;
  
  for (; param_5[1] <= (int)(uint)_DAT_0069d4b0; param_5 = param_5 + 3) {
  }
  psVar4 = (short *)(param_3 * 0x24 + param_5[2]);
  if (*(char *)((int)psVar4 + 0x1f) == '\x03') {
    sVar2 = psVar4[1];
    if (*(int *)(param_1 + 0x9c0 + sVar2 * 0xc) != 0) {
LAB_00426400:
      if (*param_5 + -1 <= param_3) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    puVar1 = (undefined4 *)(param_1 + 0x9b8 + sVar2 * 0xc);
    puVar1[2] = (int)*psVar4;
    puVar1[1] = 0;
    *puVar1 = 0xfffffc19;
    *(short *)&param_2[1].field_0x8e = sVar2;
    *(ushort *)&param_2[1].field_0x90 = (ushort)*(byte *)(psVar4 + 0xf);
    param_2[1].field13_0x3c.field12_0x30 = *(int *)(psVar4 + 2);
    param_2[1].field13_0x3c.field13_0x34 = *(int *)(psVar4 + 4);
  }
  else if (param_4 % (int)*psVar4 != (int)psVar4[1]) goto LAB_00426400;
  iVar3 = DAT_006d4588;
  sVar2 = psVar4[0x10];
  *(short *)&param_2->field_0xb4 = sVar2;
  FUN_00432430(param_2,*(int *)(iVar3 + 0x1c934 + sVar2 * 4));
  if (*(char *)(psVar4 + 0xf) == '\0') {
    param_2[1].field13_0x3c.field4_0x10 = *(int *)(param_1 + 0x440);
    param_2[1].field13_0x3c.field5_0x14 = *(float *)(param_1 + 0x444);
    param_2[1].field13_0x3c.field6_0x18 = *(int *)(param_1 + 0x448);
  }
  else {
    piVar5 = (int *)(param_1 + 0x4a0 + (*(byte *)(psVar4 + 0xf) - 1) * 0xc);
    param_2[1].field13_0x3c.field4_0x10 = *piVar5;
    param_2[1].field13_0x3c.field5_0x14 = (float)piVar5[1];
    param_2[1].field13_0x3c.field6_0x18 = piVar5[2];
  }
  piVar5 = &param_2[1].field13_0x3c.field4_0x10;
  *piVar5 = (int)((float)*piVar5 + *(float *)(psVar4 + 2));
  pfVar6 = &param_2[1].field13_0x3c.field5_0x14;
  *pfVar6 = *pfVar6 + *(float *)(psVar4 + 4);
  param_2[1].field13_0x3c.field6_0x18 = 0x3efd70a4;
  param_2[1].field13_0x3c.field7_0x1c = *(int *)(psVar4 + 6);
  param_2[1].field13_0x3c.field8_0x20 = *(int *)(psVar4 + 8);
  param_2[1].field13_0x3c.field9_0x24 = 0x3f800000;
  param_2[1].field13_0x3c.field15_0x3c = *(float *)(psVar4 + 10);
  param_2[1].field13_0x3c.field14_0x38 = *(int *)(psVar4 + 0xc);
  fVar7 = (float10)FUN_0045bda4((double)*(float *)(psVar4 + 10));
  param_2[1].field13_0x3c.field10_0x28 = (float)fVar7 * *(float *)(psVar4 + 0xc);
  fVar7 = (float10)FUN_0045bcf4((double)*(float *)(psVar4 + 10));
  param_2[1].field13_0x3c.field11_0x2c = (int)((float)fVar7 * *(float *)(psVar4 + 0xc));
  param_2[1].field16_0x84 = 0;
  param_2[1].field17_0x86 = 0;
  param_2[1].field15_0x80 = 0;
  param_2[1].field14_0x7c = -999;
  param_2[1].field20_0x8c = (ushort)*(byte *)((int)psVar4 + 0x1f);
  param_2[1].field18_0x88 = psVar4[0xe];
  if (-1 < psVar4[0x11]) {
    FUN_004311e0((int)psVar4[0x11]);
  }
  return (uint)(*param_5 + -1 <= param_3);
}

