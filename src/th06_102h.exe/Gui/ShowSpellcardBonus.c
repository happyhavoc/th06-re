
void __thiscall Gui::ShowSpellcardBonus(Gui *this,int param_1)

{
  GuiImpl *pGVar1;
  
  pGVar1 = this->impl;
  (pGVar1->spellCardBonus).pos.x = 224.0;
  (pGVar1->spellCardBonus).pos.y = 16.0;
  (pGVar1->spellCardBonus).pos.z = 0.0;
  (this->impl->spellCardBonus).isShown = 1;
  pGVar1 = this->impl;
  (pGVar1->spellCardBonus).timer.current = 0;
  (pGVar1->spellCardBonus).timer.subFrame = 0.0;
  (pGVar1->spellCardBonus).timer.previous = -999;
  (this->impl->spellCardBonus).fmtArg = param_1;
  return;
}

