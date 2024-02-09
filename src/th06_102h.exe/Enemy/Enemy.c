
AnmVm * __thiscall Enemy::Enemy(Enemy *this)

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
  AnmTimer::AnmTimer(&(this->current_context).time);
  local_30 = 8;
  local_38 = this->saved_context_stack;
  while (local_30 = local_30 + -1, -1 < local_30) {
    AnmTimer::AnmTimer(&local_38->time);
    local_38 = local_38 + 1;
  }
  AnmTimer::AnmTimer(&this->move_interp_timer);
  AnmTimer::AnmTimer(&this->boss_timer);
  pEVar2 = &this->bullet_props;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->sprite = 0;
    pEVar2->color = 0;
    pEVar2 = (EnemyBulletShooter *)&pEVar2->position;
  }
  AnmTimer::AnmTimer(&this->shoot_interval_timer);
  pEVar3 = &this->laser_props;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar3->sprite = 0;
    pEVar3->color = 0;
    pEVar3 = (EnemyLaserShooter *)&pEVar3->position;
  }
  AnmTimer::AnmTimer(&this->field44_0xe44);
  AnmTimer::AnmTimer(&this->field64_0xebc);
  return &this->primary_vm;
}

