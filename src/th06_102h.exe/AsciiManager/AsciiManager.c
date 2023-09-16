
void __thiscall AsciiManager::AsciiManager(AsciiManager *this)

{
  AsciiManagerPopup *local_88;
  int local_80;
  int local_28;
  
  AnmVm::AnmVm(&this->vm0);
  AnmVm::AnmVm(&this->vm1);
  local_28 = 0x100;
  do {
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  AsciiManagerProbablyStageRelated::AsciiManagerProbablyStageRelated(&this->field17_0x6244);
  AsciiManagerProbablyStageRelated::AsciiManagerProbablyStageRelated(&this->field18_0x69bc);
  local_80 = 0x203;
  local_88 = this->popups0;
  while (local_80 = local_80 + -1, -1 < local_80) {
    AnmTimer::AnmTimer(&local_88->timer);
    local_88 = local_88 + 1;
  }
  return;
}

