
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
  StageMenu::StageMenu(&this->game_menu);
  StageMenu::StageMenu(&this->retry_menu);
  local_80 = 0x203;
  local_88 = this->popups;
  while (local_80 = local_80 + -1, -1 < local_80) {
    ZunTimer::Initialize(&local_88->timer);
    local_88 = local_88 + 1;
  }
  return;
}

