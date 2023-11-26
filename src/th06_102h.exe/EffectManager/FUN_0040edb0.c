
undefined4 EffectManager::FUN_0040edb0(int param_1)

{
  float10 fVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x118);
    fVar2 = GetRandomF32ZeroToOne(&g_RandomSeed);
    fVar2 = fVar2 * 6.283185 - 3.141593;
    fVar1 = (float10)FUN_0045bda4((double)fVar2);
    *(float *)(param_1 + 0x140) = (float)fVar1;
    fVar1 = (float10)FUN_0045bcf4((double)fVar2);
    *(float *)(param_1 + 0x144) = (float)fVar1;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  fVar2 = 256.0 - (((float)*(int *)(param_1 + 0x16c) + *(float *)(param_1 + 0x168)) * 256.0) / 240.0
  ;
  *(float *)(param_1 + 0x110) = fVar2 * *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = fVar2 * *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = fVar2 * *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x13c);
  return 1;
}

