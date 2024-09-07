
undefined4 * __thiscall th06::EffectManager::EffectManager(EffectManager *this)

{
  Effect *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = this->effects;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm((AnmVm *)local_24);
    ZunTimer::Initialize(&local_24->timer);
    local_24 = local_24 + 1;
  }
  Reset(this);
  return &this->next_index;
}

