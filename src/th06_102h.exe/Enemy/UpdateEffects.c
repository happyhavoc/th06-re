
void th06::Enemy::UpdateEffects(Enemy *enemy)

{
  float fVar1;
  int i;
  Effect *effect;
  
  for (i = 0; i < enemy->effectsNum; i = i + 1) {
    effect = enemy->effect_array[i];
    if (effect != (Effect *)0x0) {
      (effect->position).x = (enemy->position).x;
      (effect->position).y = (enemy->position).y;
      (effect->position).z = (enemy->position).z;
      if (effect->field7_0x15c < enemy->effect_distance !=
          (NAN(effect->field7_0x15c) || NAN(enemy->effect_distance))) {
        effect->field7_0x15c = effect->field7_0x15c + 0.3;
      }
      fVar1 = utils::AddNormalizeAngle(effect->__angle_related,0.03141593);
      effect->__angle_related = fVar1;
    }
  }
  return;
}

