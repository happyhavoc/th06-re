
void FUN_00412e50(Enemy *enemy)

{
  Effect *pEVar1;
  float fVar2;
  int local_c;
  
  for (local_c = 0; local_c < enemy->effect_idx; local_c = local_c + 1) {
    pEVar1 = enemy->effect_array[local_c];
    if (pEVar1 != (Effect *)0x0) {
      (pEVar1->field8_0x134).x = (enemy->position).x;
      (pEVar1->field8_0x134).y = (enemy->position).y;
      (pEVar1->field8_0x134).z = (enemy->position).z;
      if (pEVar1->field11_0x15c < enemy->effect_distance !=
          (NAN(pEVar1->field11_0x15c) || NAN(enemy->effect_distance))) {
        pEVar1->field11_0x15c = pEVar1->field11_0x15c + 0.3;
      }
      fVar2 = add_normalize_angle(pEVar1->field12_0x160,0.03141593);
      pEVar1->field12_0x160 = fVar2;
    }
  }
  return;
}

