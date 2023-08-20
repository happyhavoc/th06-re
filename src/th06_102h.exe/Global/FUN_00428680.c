
float10 FUN_00428680(float *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  
  fVar1 = *param_1 - *(float *)(in_ECX + 0x440);
  fVar2 = param_1[1] - *(float *)(in_ECX + 0x444);
  if ((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar1) == (fVar1 == 0.0))) {
    fVar3 = (float10)FUN_0045be40((double)fVar2,(double)fVar1);
    fVar3 = (float10)(float)fVar3;
  }
  else {
    fVar3 = (float10)1.570796;
  }
  return fVar3;
}

