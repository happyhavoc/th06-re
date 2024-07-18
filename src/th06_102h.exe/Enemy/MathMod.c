
void Enemy::MathMod(Enemy *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int *piVar1;
  float10 fVar2;
  EclValueType local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_8 = (float *)GetVar(param_1,&param_2,&local_14);
  if (local_14 == ECL_VALUE_TYPE_INT) {
    local_10 = (float *)GetVar(param_1,(EclVarId *)param_3,(EclValueType *)0x0);
    piVar1 = GetVar(param_1,(EclVarId *)param_4,(EclValueType *)0x0);
    *local_8 = (float)((int)*local_10 % *piVar1);
  }
  else if (local_14 == EVL_VALUE_TYPE_FLOAT) {
    local_10 = GetVarFloat(param_1,param_3,(EclValueType *)0x0);
    local_c = GetVarFloat(param_1,param_4,(EclValueType *)0x0);
    fVar2 = (float10)FUN_0045be60((double)*local_10,(double)*local_c);
    *local_8 = (float)fVar2;
  }
  return;
}

