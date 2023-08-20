
void FUN_0040dcc0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_24;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x9b0) = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((*(int *)(param_1 + 0xdb8 + local_14 * 4) != 0) &&
       (*(int *)(*(int *)(param_1 + 0xdb8 + local_14 * 4) + 600) != 0)) {
      iVar2 = *(int *)(param_1 + 0xdb8 + local_14 * 4);
      local_24 = *(float *)(iVar2 + 0x230);
      fVar3 = (float10)fcos((float10)*(float *)(iVar2 + 0x22c));
      fVar4 = (float10)fsin((float10)*(float *)(iVar2 + 0x22c));
      for (; local_24 < *(float *)(iVar2 + 0x234); local_24 = local_24 + 48.0) {
        fVar1 = *(float *)(iVar2 + 0x224);
        *(float *)(param_1 + 0xd04) = (float)fVar3 * local_24 + *(float *)(iVar2 + 0x220);
        *(float *)(param_1 + 0xd08) = (float)fVar4 * local_24 + fVar1;
        *(undefined4 *)(param_1 + 0xd0c) = 0;
        FUN_004145c0(param_1 + 0xd00);
      }
      *(int *)(param_1 + 0x9b0) = *(int *)(param_1 + 0x9b0) + 1;
    }
  }
  return;
}

