
undefined4 FUN_0040edb0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x16c) == 0) && (*(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x164)))
  {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x118);
    fVar2 = (float10)FUN_0041e820();
    fVar1 = (float)(fVar2 * (float10)6.283185 - (float10)3.141593);
    fVar2 = (float10)FUN_0045bda4((double)fVar1);
    *(float *)(param_1 + 0x140) = (float)fVar2;
    fVar2 = (float10)FUN_0045bcf4((double)fVar1);
    *(float *)(param_1 + 0x144) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  fVar1 = 256.0 - (((float)*(int *)(param_1 + 0x16c) + *(float *)(param_1 + 0x168)) * 256.0) / 240.0
  ;
  *(float *)(param_1 + 0x110) = fVar1 * *(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = fVar1 * *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = fVar1 * *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x13c);
  return 1;
}

