
void th06::Enemy::ResetEffectArray(Enemy *param_1)

{
  int idx;
  
  for (idx = 0; idx < param_1->effectsNum; idx = idx + 1) {
    if (param_1->effect_array[idx] != (Effect *)0x0) {
      param_1->effect_array[idx]->field14_0x17a = 1;
      param_1->effect_array[idx] = (Effect *)0x0;
    }
  }
  param_1->effectsNum = 0;
  return;
}

