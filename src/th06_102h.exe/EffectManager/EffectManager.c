
undefined4 * __thiscall EffectManager::EffectManager(EffectManager *this)

{
  AnmVm *local_24;
  int local_1c;
  
  local_1c = 0x201;
  local_24 = (AnmVm *)&this->field_0x8;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm(local_24);
    AnmTimer::AnmTimer((AnmTimer *)(local_24[1].matrix.m[1] + 2));
    local_24 = (AnmVm *)(local_24[1].matrix.m + 3);
  }
  Reset(this);
  return (undefined4 *)this;
}

