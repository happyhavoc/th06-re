
void Enemy::FUN_004114c0(Enemy *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < param_1->effect_idx; local_8 = local_8 + 1) {
    if (param_1->effect_array[local_8] != (Effect *)0x0) {
      param_1->effect_array[local_8]->field18_0x17a = 1;
      param_1->effect_array[local_8] = (Effect *)0x0;
    }
  }
  param_1->effect_idx = 0;
  return;
}

