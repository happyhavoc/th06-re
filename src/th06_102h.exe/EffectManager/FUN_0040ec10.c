
int EffectManager::FUN_0040ec10(Effect *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  
  if (((param_1->timer).current == 0) && ((param_1->timer).current != (param_1->timer).previous)) {
    (param_1->field8_0x134).x = (param_1->pos1).x;
    (param_1->field8_0x134).y = (param_1->pos1).y;
    (param_1->field8_0x134).z = (param_1->pos1).z;
    fVar6 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    fVar6 = fVar6 * 6.283185 - 3.141593;
    fVar5 = (float10)FUN_0045bda4((double)fVar6);
    (param_1->pos2).x = (float)fVar5;
    fVar5 = (float10)FUN_0045bcf4((double)fVar6);
    (param_1->pos2).y = (float)fVar5;
    (param_1->pos2).z = 0.0;
  }
  fVar4 = 256.0 - (((float)(param_1->timer).current + (param_1->timer).subFrame) * 256.0) / 60.0;
  fVar6 = (param_1->pos2).z;
  fVar1 = (param_1->pos2).y;
  fVar2 = (param_1->field8_0x134).z;
  fVar3 = (param_1->field8_0x134).y;
  (param_1->pos1).x = fVar4 * (param_1->pos2).x + (param_1->field8_0x134).x;
  (param_1->pos1).y = fVar4 * fVar1 + fVar3;
  (param_1->pos1).z = fVar4 * fVar6 + fVar2;
  return 1;
}

