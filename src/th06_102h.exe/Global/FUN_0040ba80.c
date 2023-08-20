
void FUN_0040ba80(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_2 + 0x10);
  *(float *)(param_1 + 0xd04) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
  *(float *)(param_1 + 0xd08) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xca4);
  *(float *)(param_1 + 0xd0c) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xca8);
  fVar2 = (float10)FUN_0041e820();
  *(float *)(param_1 + 0xd04) =
       (float)((fVar2 * (float10)iVar1 + (float10)*(float *)(param_1 + 0xc6c)) -
              (float10)iVar1 / (float10)2.0);
  fVar2 = (float10)FUN_0041e820();
  *(float *)(param_1 + 0xd08) =
       (float)((fVar2 * (float10)((float)iVar1 * 0.75) + (float10)*(float *)(param_1 + 0xc70)) -
              (float10)((float)iVar1 * 0.75) / (float10)2.0);
  FUN_004145c0(param_1 + 0xd00);
  return;
}

