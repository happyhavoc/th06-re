
void Enemy::math_atan2(Enemy *param_1,undefined4 param_2,float *param_3,float *param_4,
                      float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  EclValueType local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_c = (float *)get_var(param_1,&param_2,&local_18);
  if (local_18 == EVL_VALUE_TYPE_FLOAT) {
    local_14 = get_var_float(param_1,param_3,(undefined4 *)0x0);
    local_10 = get_var_float(param_1,param_4,(undefined4 *)0x0);
    local_8 = get_var_float(param_1,param_5,(undefined4 *)0x0);
    pfVar1 = get_var_float(param_1,param_6,(undefined4 *)0x0);
    fVar2 = FUN_0045be40(SUB84((double)(*pfVar1 - *local_10),0),
                         (int)((ulonglong)(double)(*pfVar1 - *local_10) >> 0x20),
                         SUB84((double)(*local_8 - *local_14),0),
                         (int)((ulonglong)(double)(*local_8 - *local_14) >> 0x20));
    *local_c = fVar2;
  }
  return;
}

