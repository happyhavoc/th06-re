
float * Enemy::GetVarFloat(Enemy *param_1,float *param_2,EclValueType *param_3)

{
  float *pfVar1;
  float local_c;
  undefined *local_8;
  
  local_c = (float)__ftol2(*param_2);
  pfVar1 = (float *)GetVar(param_1,(int *)&local_c,param_3);
  if (pfVar1 == &local_c) {
    pfVar1 = param_2;
  }
  return pfVar1;
}

