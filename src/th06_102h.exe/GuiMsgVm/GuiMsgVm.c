
GuiMsgVm * __thiscall th06::GuiMsgVm::GuiMsgVm(GuiMsgVm *this)

{
  AnmVm *local_5c;
  int local_54;
  AnmVm *local_40;
  int local_38;
  AnmVm *local_24;
  int local_1c;
  
  ZunTimer::Initialize(&this->timer);
  local_1c = 2;
  local_24 = this->portraits;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    AnmVm::AnmVm((AnmVm *)local_24);
    local_24 = local_24 + 1;
  }
  local_38 = 2;
  local_40 = this->dialogue_lines;
  while (local_38 = local_38 + -1, -1 < local_38) {
    AnmVm::AnmVm((AnmVm *)local_40);
    local_40 = local_40 + 1;
  }
  local_54 = 2;
  local_5c = this->intro_lines;
  while (local_54 = local_54 + -1, -1 < local_54) {
    AnmVm::AnmVm((AnmVm *)local_5c);
    local_5c = local_5c + 1;
  }
  return this;
}

