
void Enemy::ExInsStageXFunc16(Enemy *this,AnmRawInstr *inst)

{
  float fVar2;
  int local_8;
  float fVar1;
  
  local_8 = this->life;
  if (MAX_BOSS_TIME < (this->boss_timer).current) {
    local_8 = 0;
  }
  if (inst->args[3] == 0) {
    (this->current_context).float3 = 2.0 - ((float)local_8 * 1.0) / 6000.0;
    (this->current_context).var5 = (local_8 * 0xf0) / 6000 + 0x28;
  }
  else {
    fVar1 = 320.0 - ((float)local_8 * 160.0) / 6000.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (this->current_context).float2 = fVar2 * fVar1 + (192.0 - fVar1 / 2.0);
    fVar1 = 128.0 - ((float)local_8 * 64.0) / 6000.0;
    fVar2 = Rng::GetRandomF32ZeroToOne(&g_Rng);
    (this->current_context).float3 = fVar2 * fVar1 + (96.0 - fVar1 / 2.0);
  }
  return;
}

