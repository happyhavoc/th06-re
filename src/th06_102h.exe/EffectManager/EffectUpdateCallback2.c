
int th06::EffectManager::EffectUpdateCallback2(Effect *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((param_1->timer).current == 0) && ((param_1->timer).current != (param_1->timer).previous)) {
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (param_1->field2_0x11c).x = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (param_1->field2_0x11c).y = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    (param_1->field2_0x11c).z = 0.0;
    fVar2 = (param_1->field2_0x11c).z;
    fVar1 = (param_1->field2_0x11c).y;
    (param_1->field3_0x128).x = -(param_1->field2_0x11c).x * 0.05;
    (param_1->field3_0x128).y = -fVar1 * 0.05;
    (param_1->field3_0x128).z = -fVar2 * 0.05;
  }
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).z;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).y;
  (param_1->pos1).x =
       g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).x + (param_1->pos1).x;
  (param_1->pos1).y = fVar1 + (param_1->pos1).y;
  (param_1->pos1).z = fVar2 + (param_1->pos1).z;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).z;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).y;
  (param_1->field2_0x11c).x =
       g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).x +
       (param_1->field2_0x11c).x;
  (param_1->field2_0x11c).y = fVar1 + (param_1->field2_0x11c).y;
  (param_1->field2_0x11c).z = fVar2 + (param_1->field2_0x11c).z;
  return 1;
}

