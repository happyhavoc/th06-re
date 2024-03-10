
int __thiscall EnemyManager::EnemyManager(EnemyManager *this)

{
  Enemy *local_94;
  int local_8c;
  
  Enemy::Enemy(&this->template);
  local_8c = 0x101;
  local_94 = this->enemies;
  while (local_8c = local_8c + -1, -1 < local_8c) {
    Enemy::Enemy(local_94);
    local_94 = local_94 + 1;
  }
  ZunTimer::ZunTimer(&this->timeline_time);
  Initialize(this);
  return (int)this;
}

