
void __thiscall th06::Gui::ShowFullPowerMode(Gui *gui,int param_2)

{
  GuiImpl *iVar1;
  
  iVar1 = gui->impl;
  (iVar1->fullPowerMode).pos.x = 416.0;
  (iVar1->fullPowerMode).pos.y = 232.0;
  (iVar1->fullPowerMode).pos.z = 0.0;
  (gui->impl->fullPowerMode).isShown = 1;
  iVar1 = gui->impl;
  (iVar1->fullPowerMode).timer.current = 0;
  (iVar1->fullPowerMode).timer.subFrame = 0.0;
  (iVar1->fullPowerMode).timer.previous = -999;
  (gui->impl->fullPowerMode).fmtArg = param_2;
  return;
}

