
BulletManager * __thiscall th06::BulletManager::BulletManager(BulletManager *this)

{
  Laser *local_60;
  int local_58;
  Bullet *local_30;
  int local_28;
  BulletTypeSprites *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = this->bullet_type_templates;
  while (local_18 = local_18 + -1, -1 < local_18) {
    BulletTypeVms::BulletTypeVms((BulletTypeVms *)local_20);
    local_20 = local_20 + 1;
  }
  local_28 = 0x280;
  local_30 = this->bullets;
  while (local_28 = local_28 + -1, -1 < local_28) {
    BulletTypeVms::BulletTypeVms((BulletTypeVms *)local_30);
    ZunTimer::Initialize(&local_30->timer);
    local_30 = local_30 + 1;
  }
  local_58 = 0x40;
  local_60 = this->lasers;
  while (local_58 = local_58 + -1, -1 < local_58) {
    AnmVm::AnmVm((AnmVm *)local_60);
    AnmVm::AnmVm((AnmVm *)&local_60->vm1);
    ZunTimer::Initialize(&local_60->timer);
    local_60 = local_60 + 1;
  }
  ZunTimer::Initialize(&this->time);
  InitializeToZero(this);
  return this;
}

