
int FUN_00414670(short *param_1)

{
  short sVar1;
  int iVar2;
  VeryBigStruct *pVVar3;
  int in_ECX;
  float10 fVar4;
  short local_10;
  int local_c;
  int local_8;
  
  pVVar3 = VERY_BIG_STRUCT;
  local_c = in_ECX + 0xec000;
  local_8 = 0;
  while( true ) {
    if (0x3f < local_8) {
      return local_c;
    }
    if (*(int *)(local_c + 600) == 0) break;
    local_8 = local_8 + 1;
    local_c = local_c + 0x270;
  }
  sVar1 = *param_1;
  local_10 = sVar1 + 0x209;
  *(short *)(local_c + 0xb4) = local_10;
  FUN_00432430(local_c,*(undefined4 *)(&pVVar3->field_0x1d158 + sVar1 * 4));
  FUN_004323a0(local_c,(int)*(short *)(local_c + 0xb0) + (int)param_1[1]);
  iVar2 = *(int *)(&DAT_00476440 + param_1[1] * 4);
  FUN_00403580((undefined4 *)(local_c + 0x110));
  FUN_004323a0((undefined4 *)(local_c + 0x110),iVar2 + 0x28c);
  *(uint *)(local_c + 400) = *(uint *)(local_c + 400) | 4;
  *(undefined4 *)(local_c + 0x220) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(local_c + 0x224) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(local_c + 0x228) = *(undefined4 *)(param_1 + 6);
  *(short *)(local_c + 0x26a) = param_1[1];
  *(undefined4 *)(local_c + 600) = 1;
  *(undefined4 *)(local_c + 0x22c) = *(undefined4 *)(param_1 + 8);
  if (param_1[0x24] == 0) {
    fVar4 = (float10)FUN_00428700(param_1 + 2);
    *(float *)(local_c + 0x22c) = (float)(fVar4 + (float10)*(float *)(local_c + 0x22c));
  }
  *(short *)(local_c + 0x268) = param_1[0x26];
  *(undefined4 *)(local_c + 0x264) = 0;
  *(undefined4 *)(local_c + 0x260) = 0;
  *(undefined4 *)(local_c + 0x25c) = 0xfffffc19;
  *(undefined4 *)(local_c + 0x230) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(local_c + 0x234) = *(undefined4 *)(param_1 + 0x12);
  *(undefined4 *)(local_c + 0x238) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(local_c + 0x23c) = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)(local_c + 0x240) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(local_c + 0x244) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(local_c + 0x24c) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)(local_c + 0x250) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(local_c + 0x248) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(local_c + 0x254) = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(local_c + 0x244) == 0) {
    *(undefined *)(local_c + 0x26c) = 1;
    return local_c;
  }
  *(undefined *)(local_c + 0x26c) = 0;
  return local_c;
}

