
int EffectManager::FUN_0040e5b0(Effect *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((param_1->timer).current == 0) && ((param_1->timer).current != (param_1->timer).previous)) {
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    param_1->field2_0x11c = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    param_1->field3_0x120 = ((fVar2 * 256.0 - 128.0) * 4.0) / 33.0;
    param_1->field4_0x124 = 0.0;
    param_1->field5_0x128 = -param_1->field2_0x11c * 0.05;
    param_1->field6_0x12c = -param_1->field3_0x120 * 0.05;
    param_1->field7_0x130 = -param_1->field4_0x124 * 0.05;
  }
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * param_1->field4_0x124;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * param_1->field3_0x120;
  (param_1->pos1).x =
       g_Supervisor.effectiveFramerateMultiplier * param_1->field2_0x11c + (param_1->pos1).x;
  (param_1->pos1).y = fVar1 + (param_1->pos1).y;
  (param_1->pos1).z = fVar2 + (param_1->pos1).z;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * param_1->field7_0x130;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * param_1->field6_0x12c;
  param_1->field2_0x11c =
       g_Supervisor.effectiveFramerateMultiplier * param_1->field5_0x128 + param_1->field2_0x11c;
  param_1->field3_0x120 = fVar1 + param_1->field3_0x120;
  param_1->field4_0x124 = fVar2 + param_1->field4_0x124;
  return 1;
}

