
int th06::EffectManager::EffectUpdateCallback3(Effect *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).z;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).y;
  (param_1->pos1).x =
       g_Supervisor.effectiveFramerateMultiplier * (param_1->field2_0x11c).x + (param_1->pos1).x;
  (param_1->pos1).y = fVar2 + (param_1->pos1).y;
  (param_1->pos1).z = fVar1 + (param_1->pos1).z;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).z;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).y;
  (param_1->field2_0x11c).x =
       g_Supervisor.effectiveFramerateMultiplier * (param_1->field3_0x128).x +
       (param_1->field2_0x11c).x;
  (param_1->field2_0x11c).y = fVar2 + (param_1->field2_0x11c).y;
  (param_1->field2_0x11c).z = fVar1 + (param_1->field2_0x11c).z;
  return 1;
}

