
void th06::EnemyEclInstr::MathMod(Enemy *param_1,EclVarId out,EclVarId *arg1,EclVarId *arg2)

{
  int *piVar1;
  float10 fVar2;
  EclValueType local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  local_8 = (float *)GetVar(param_1,&out,&local_14);
  if (local_14 == ECL_VALUE_TYPE_INT) {
    local_10 = (float *)GetVar(param_1,arg1,(EclValueType *)0x0);
    piVar1 = GetVar(param_1,arg2,(EclValueType *)0x0);
    *local_8 = (float)((int)*local_10 % *piVar1);
  }
  else if (local_14 == ECL_VALUE_TYPE_FLOAT) {
    local_10 = GetVarFloat(param_1,(float *)arg1,(EclValueType *)0x0);
    local_c = GetVarFloat(param_1,(float *)arg2,(EclValueType *)0x0);
    fVar2 = (float10)FUN_0045be60((double)*local_10,(double)*local_c);
    *local_8 = (float)fVar2;
  }
  return;
}

