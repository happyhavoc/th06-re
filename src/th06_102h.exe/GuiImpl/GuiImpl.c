
GuiImpl * __thiscall th06::GuiImpl::GuiImpl(GuiImpl *this)

{
  GuiImpl *local_10;
  int local_8;
  
  local_8 = 0x1a;
  local_10 = this;
  while (local_8 = local_8 + -1, -1 < local_8) {
    AnmVm::AnmVm((AnmVm *)local_10);
    local_10 = (GuiImpl *)(local_10->vms + 1);
  }
  AnmVm::AnmVm((AnmVm *)&this->stageNameSprite);
  AnmVm::AnmVm((AnmVm *)&this->songNameSprite);
  AnmVm::AnmVm((AnmVm *)&this->playerSpellcardPortrait);
  AnmVm::AnmVm((AnmVm *)&this->enemySpellcardPortrait);
  AnmVm::AnmVm((AnmVm *)&this->bombSpellcardName);
  AnmVm::AnmVm((AnmVm *)&this->enemySpellcardName);
  AnmVm::AnmVm((AnmVm *)&this->bombSpellcardBackground);
  AnmVm::AnmVm((AnmVm *)&this->enemySpellcardBackground);
  AnmVm::AnmVm((AnmVm *)&this->stageFinishedScoreSprite);
  GuiMsgVm::GuiMsgVm(&this->msg);
  ZunTimer::Initialize(&(this->bonusScore).timer);
  ZunTimer::Initialize(&(this->fullPowerMode).timer);
  ZunTimer::Initialize(&(this->spellCardBonus).timer);
  return this;
}

