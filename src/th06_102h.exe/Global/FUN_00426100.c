
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00426100(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  VeryBigStruct *pVVar3;
  short *psVar4;
  float10 fVar5;
  
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
    *(short *)(param_2 + 0x152) = sVar2;
    *(ushort *)(param_2 + 0x154) = (ushort)*(byte *)(psVar4 + 0xf);
    *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(psVar4 + 2);
    *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(psVar4 + 4);
  }
  else if (param_4 % (int)*psVar4 != (int)psVar4[1]) goto LAB_00426400;
  pVVar3 = VERY_BIG_STRUCT;
  sVar2 = psVar4[0x10];
  *(short *)(param_2 + 0xb4) = sVar2;
  FUN_00432430(param_2,*(undefined4 *)(&pVVar3->field_0x1c934 + sVar2 * 4));
  if (*(char *)(psVar4 + 0xf) == '\0') {
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x440);
    *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_1 + 0x444);
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_1 + 0x448);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x4a0 + (*(byte *)(psVar4 + 0xf) - 1) * 0xc);
    *(undefined4 *)(param_2 + 0x110) = *puVar1;
    *(undefined4 *)(param_2 + 0x114) = puVar1[1];
    *(undefined4 *)(param_2 + 0x118) = puVar1[2];
  }
  *(float *)(param_2 + 0x110) = *(float *)(param_2 + 0x110) + *(float *)(psVar4 + 2);
  *(float *)(param_2 + 0x114) = *(float *)(param_2 + 0x114) + *(float *)(psVar4 + 4);
  *(undefined4 *)(param_2 + 0x118) = 0x3efd70a4;
  *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(psVar4 + 6);
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(psVar4 + 8);
  *(undefined4 *)(param_2 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(psVar4 + 10);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(psVar4 + 0xc);
  fVar5 = (float10)FUN_0045bda4((double)*(float *)(psVar4 + 10));
  *(float *)(param_2 + 0x128) = (float)fVar5 * *(float *)(psVar4 + 0xc);
  fVar5 = (float10)FUN_0045bcf4((double)*(float *)(psVar4 + 10));
  *(float *)(param_2 + 300) = (float)fVar5 * *(float *)(psVar4 + 0xc);
  *(undefined4 *)(param_2 + 0x148) = 0;
  *(undefined4 *)(param_2 + 0x144) = 0;
  *(undefined4 *)(param_2 + 0x140) = 0xfffffc19;
  *(ushort *)(param_2 + 0x150) = (ushort)*(byte *)((int)psVar4 + 0x1f);
  *(short *)(param_2 + 0x14c) = psVar4[0xe];
  if (-1 < psVar4[0x11]) {
    FUN_004311e0((int)psVar4[0x11]);
  }
  return (uint)(*param_5 + -1 <= param_3);
}

