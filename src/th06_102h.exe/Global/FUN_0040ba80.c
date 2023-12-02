
void FUN_0040ba80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_2 + 0x10);
  *(float *)(param_1 + 0xd04) = *(float *)(param_1 + 0xc6c) + *(float *)(param_1 + 0xca0);
  *(float *)(param_1 + 0xd08) = *(float *)(param_1 + 0xc70) + *(float *)(param_1 + 0xca4);
  *(float *)(param_1 + 0xd0c) = *(float *)(param_1 + 0xc74) + *(float *)(param_1 + 0xca8);
  fVar2 = GetRandomF32ZeroToOne(&g_Rng.seed);
  *(float *)(param_1 + 0xd04) = (fVar2 * fVar1 + *(float *)(param_1 + 0xc6c)) - fVar1 / 2.0;
  fVar2 = GetRandomF32ZeroToOne(&g_Rng.seed);
  *(float *)(param_1 + 0xd08) =
       (fVar2 * fVar1 * 0.75 + *(float *)(param_1 + 0xc70)) - (fVar1 * 0.75) / 2.0;
  FUN_004145c0(param_1 + 0xd00);
  return;
}

