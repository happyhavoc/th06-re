
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0040e1b0(Enemy *param_1,AnmRawInstr *param_2)

{
  float fVar1;
  float fVar2;
  int local_8;
  
  local_8 = param_1->life;
  if (MAX_BOSS_TIME < (param_1->boss_timer).current) {
    local_8 = 0;
  }
  if (param_2->args[3] == 0) {
    (param_1->current_context).float3 = 2.0 - ((float)local_8 * 1.0) / 6000.0;
    (param_1->current_context).var5 = (local_8 * 0xf0) / 6000 + 0x28;
  }
  else {
    fVar1 = 320.0 - ((float)local_8 * 160.0) / 6000.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (param_1->current_context).float2 = fVar2 * fVar1 + (192.0 - fVar1 / 2.0);
    fVar1 = 128.0 - ((float)local_8 * 64.0) / 6000.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (param_1->current_context).float3 = fVar2 * fVar1 + (96.0 - fVar1 / 2.0);
  }
  return;
}

