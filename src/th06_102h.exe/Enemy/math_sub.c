
void Enemy::math_sub(Enemy *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int *piVar1;
  float *pfVar2;
  EclValueType local_14;
  float *local_10;
  float *local_8;
  
  local_8 = (float *)get_var(param_1,&param_2,&local_14);
  if (local_14 == ECL_VALUE_TYPE_INT) {
    local_10 = (float *)get_var(param_1,(int *)param_3,(EclValueType *)0x0);
    piVar1 = get_var(param_1,(int *)param_4,(EclValueType *)0x0);
    *local_8 = (float)((int)*local_10 - *piVar1);
  }
  else if (local_14 == EVL_VALUE_TYPE_FLOAT) {
    local_10 = get_var_float(param_1,param_3,(EclValueType *)0x0);
    pfVar2 = get_var_float(param_1,param_4,(EclValueType *)0x0);
    *local_8 = *local_10 - *pfVar2;
  }
  return;
}

