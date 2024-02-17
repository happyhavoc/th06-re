
void FUN_0041e8d0(float *param_1,float *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = sin((double)param_3);
  dVar2 = cos((double)param_3);
  *param_1 = (float)dVar1 * param_2[1] + (float)dVar2 * *param_2;
  param_1[1] = (float)dVar2 * param_2[1] - (float)dVar1 * *param_2;
  return;
}

