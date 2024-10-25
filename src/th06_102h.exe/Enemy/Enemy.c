
AnmVm * __thiscall th06::Enemy::Enemy(Enemy *this)

{
  int iVar1;
  EnemyBulletShooter *pEVar2;
  EnemyLaserShooter *pEVar3;
  EnemyEclContext *local_38;
  int local_30;
  AnmVm *local_20;
  int local_18;
  
  AnmVm::AnmVm(&this->primary_vm);
  local_18 = 8;
  local_20 = this->vms;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  ZunTimer::Initialize(&(this->current_context).time);
  local_30 = 8;
  local_38 = this->saved_context_stack;
  while (local_30 = local_30 + -1, -1 < local_30) {
    ZunTimer::Initialize(&local_38->time);
    local_38 = local_38 + 1;
  }
  ZunTimer::Initialize(&this->move_interp_timer);
  ZunTimer::Initialize(&this->boss_timer);
  pEVar2 = &this->bullet_props;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->spriteOffset = 0;
    pEVar2 = (EnemyBulletShooter *)&pEVar2->position;
  }
  ZunTimer::Initialize(&this->shoot_interval_timer);
  pEVar3 = &this->laser_props;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar3->sprite = 0;
    pEVar3->spriteOffset = 0;
    pEVar3 = (EnemyLaserShooter *)&pEVar3->position;
  }
  ZunTimer::Initialize(&this->exInsFunc10Timer);
  ZunTimer::Initialize(&this->exInsFunc6Timer);
  return &this->primary_vm;
}

