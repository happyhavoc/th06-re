
int __thiscall Player::Player(Player *this)

{
  AnmVm *local_64;
  int local_5c;
  AnmTimer *local_50;
  int local_48;
  int local_3c;
  int local_30;
  int local_24;
  AnmVm *local_20;
  int local_18;
  
  AnmVm::AnmVm(&this->vm0);
  local_18 = 3;
  local_20 = this->vm1;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::AnmVm(local_20);
    local_20 = local_20 + 1;
  }
  local_24 = 2;
  do {
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  local_30 = 0x20;
  do {
    local_30 = local_30 + -1;
  } while (-1 < local_30);
  local_3c = 0x20;
  do {
    local_3c = local_3c + -1;
  } while (-1 < local_3c);
  local_48 = 2;
  local_50 = this->field16_0x9b8;
  while (local_48 = local_48 + -1, -1 < local_48) {
    AnmTimer::AnmTimer(local_50);
    local_50 = local_50 + 1;
  }
  AnmTimer::AnmTimer(&this->field26_0x9e8);
  local_5c = 0x50;
  local_64 = &this->bullets[0].field0_0x0;
  while (local_5c = local_5c + -1, -1 < local_5c) {
    AnmVm::AnmVm(local_64);
    AnmTimer::AnmTimer(&local_64[1].currentTimeInScript);
    local_64 = (AnmVm *)(local_64[1].matrix.m[0] + 3);
  }
  AnmTimer::AnmTimer(&this->field34_0x75a8);
  AnmTimer::AnmTimer(&this->field35_0x75b4);
  PlayerInner::PlayerInner(&this->inner);
  return (int)this;
}
