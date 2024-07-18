
void Enemy::SetVar(Enemy *enemy,EclVarId lhs,void *rhs)

{
  int *piVar1;
  EclValueType local_10;
  int *local_c;
  
  local_c = GetVar(enemy,(EclVarId *)rhs,(EclValueType *)0x0);
  piVar1 = GetVar(enemy,&lhs,&local_10);
  if (local_10 == ECL_VALUE_TYPE_INT) {
    *piVar1 = *local_c;
  }
  else if (local_10 == EVL_VALUE_TYPE_FLOAT) {
    *piVar1 = *local_c;
  }
  return;
}

