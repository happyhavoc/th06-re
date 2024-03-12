
void FUN_00412e50(Enemy *enemy)

{
  float fVar1;
  int i;
  Effect *effect;
  
  for (i = 0; i < enemy->effect_idx; i = i + 1) {
    effect = enemy->effect_array[i];
    if (effect != (Effect *)0x0) {
      (effect->field8_0x134).x = (enemy->position).x;
      (effect->field8_0x134).y = (enemy->position).y;
      (effect->field8_0x134).z = (enemy->position).z;
      if (effect->field11_0x15c < enemy->effect_distance !=
          (NAN(effect->field11_0x15c) || NAN(enemy->effect_distance))) {
        effect->field11_0x15c = effect->field11_0x15c + 0.3;
      }
      fVar1 = add_normalize_angle(effect->__angle_related,0.03141593);
      effect->__angle_related = fVar1;
    }
  }
  return;
}

