
void __thiscall Gui::FUN_0041735a(Gui *this,int param_1)

{
  GuiImpl *pGVar1;
  
  pGVar1 = this->impl;
  (pGVar1->bonusScore).pos.x = 416.0;
  (pGVar1->bonusScore).pos.y = 32.0;
  (pGVar1->bonusScore).pos.z = 0.0;
  (this->impl->bonusScore).isShown = 1;
  pGVar1 = this->impl;
  (pGVar1->bonusScore).timer.current = 0;
  (pGVar1->bonusScore).timer.subFrame = 0.0;
  (pGVar1->bonusScore).timer.previous = -999;
  (this->impl->bonusScore).fmtArg = param_1;
  return;
}

