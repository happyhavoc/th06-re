
void Enemy::set_var(Enemy *enemy,undefined4 var_id,int *var_value)

{
  int *piVar1;
  EclValueType local_10;
  int *local_c;
  
  local_c = get_var(enemy,var_value,(EclValueType *)0x0);
  piVar1 = get_var(enemy,&var_id,&local_10);
  if (local_10 == ECL_VALUE_TYPE_INT) {
    *piVar1 = *local_c;
  }
  else if (local_10 == EVL_VALUE_TYPE_FLOAT) {
    *piVar1 = *local_c;
  }
  return;
}

