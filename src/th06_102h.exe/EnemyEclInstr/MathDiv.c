
void th06::EnemyEclInstr::MathDiv
               (Enemy *param_1,EclVarId param_2,EclVarId *param_3,EclVarId *param_4)

{
  int *piVar1;
  float *pfVar2;
  EclValueType local_14;
  float *local_10;
  float *local_8;
  
  local_8 = (float *)GetVar(param_1,&param_2,&local_14);
  if (local_14 == ECL_VALUE_TYPE_INT) {
    local_10 = (float *)GetVar(param_1,param_3,(EclValueType *)0x0);
    piVar1 = GetVar(param_1,param_4,(EclValueType *)0x0);
    *local_8 = (float)((int)*local_10 / *piVar1);
  }
  else if (local_14 == ECL_VALUE_TYPE_FLOAT) {
    local_10 = GetVarFloat(param_1,(float *)param_3,(EclValueType *)0x0);
    pfVar2 = GetVarFloat(param_1,(float *)param_4,(EclValueType *)0x0);
    *local_8 = *local_10 / *pfVar2;
  }
  return;
}

