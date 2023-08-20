
void FUN_0041e8d0(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_0045bcf4((double)param_3);
  fVar2 = (float10)FUN_0045bda4((double)param_3);
  *param_1 = (float)fVar1 * param_2[1] + (float)fVar2 * *param_2;
  param_1[1] = (float)fVar2 * param_2[1] - (float)fVar1 * *param_2;
  return;
}

