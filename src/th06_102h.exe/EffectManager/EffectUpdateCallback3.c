
int EffectManager::EffectUpdateCallback3(Effect *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * param_1->field4_0x124;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * param_1->field3_0x120;
  (param_1->pos1).x =
       g_Supervisor.effectiveFramerateMultiplier * param_1->field2_0x11c + (param_1->pos1).x;
  (param_1->pos1).y = fVar2 + (param_1->pos1).y;
  (param_1->pos1).z = fVar1 + (param_1->pos1).z;
  fVar1 = g_Supervisor.effectiveFramerateMultiplier * param_1->field7_0x130;
  fVar2 = g_Supervisor.effectiveFramerateMultiplier * param_1->field6_0x12c;
  param_1->field2_0x11c =
       g_Supervisor.effectiveFramerateMultiplier * param_1->field5_0x128 + param_1->field2_0x11c;
  param_1->field3_0x120 = fVar2 + param_1->field3_0x120;
  param_1->field4_0x124 = fVar1 + param_1->field4_0x124;
  return 1;
}

