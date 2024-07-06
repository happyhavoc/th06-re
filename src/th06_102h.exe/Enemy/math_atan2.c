
void Enemy::math_atan2(Enemy *param_1,undefined4 param_2,float *param_3,float *param_4,
                      float *param_5,float *param_6)

{
  float *pfVar1;
  double dVar2;
  EclValueType local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_c = (float *)GetVar(param_1,&param_2,&local_18);
  if (local_18 == EVL_VALUE_TYPE_FLOAT) {
    local_14 = GetVarFloat(param_1,param_3,(EclValueType *)0x0);
    local_10 = GetVarFloat(param_1,param_4,(EclValueType *)0x0);
    local_8 = GetVarFloat(param_1,param_5,(EclValueType *)0x0);
    pfVar1 = GetVarFloat(param_1,param_6,(EclValueType *)0x0);
    dVar2 = atan2((double)(*pfVar1 - *local_10),(double)(*local_8 - *local_14));
    *local_c = (float)dVar2;
  }
  return;
}

