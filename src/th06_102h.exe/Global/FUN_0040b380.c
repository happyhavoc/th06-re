
float * FUN_0040b380(int param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float local_c [2];
  
  local_c[0] = (float)__ftol2((double)*param_2);
  pfVar1 = (float *)FUN_0040afb0(param_1,(int *)local_c,param_3);
  if (pfVar1 == local_c) {
    pfVar1 = param_2;
  }
  return pfVar1;
}

