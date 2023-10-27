
float10 __thiscall Player::FUN_00428700(void *param_1_00,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)((int)param_1_00 + 0x440) - *param_2;
  fVar2 = *(float *)((int)param_1_00 + 0x444) - param_2[1];
  if ((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar1) == (fVar1 == 0.0))) {
    fVar3 = (float10)FUN_0045be40((double)fVar2,(double)fVar1);
    fVar3 = (float10)(float)fVar3;
  }
  else {
    fVar3 = (float10)1.570796;
  }
  return fVar3;
}

