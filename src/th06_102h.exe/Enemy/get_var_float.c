
float * Enemy::get_var_float(Enemy *param_1,float *param_2,EclValueType *param_3)

{
  float *pfVar1;
  float local_c [2];
  
  local_c[0] = (float)__ftol2(*param_2);
  pfVar1 = (float *)get_var(param_1,(int *)local_c,param_3);
  if (pfVar1 == local_c) {
    pfVar1 = param_2;
  }
  return pfVar1;
}

