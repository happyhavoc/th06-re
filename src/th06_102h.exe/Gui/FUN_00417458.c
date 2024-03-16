
void __thiscall Gui::FUN_00417458(Gui *this,int param_1)

{
  GuiImpl *pGVar1;
  
  pGVar1 = this->impl;
  (pGVar1->field17_0x2c24).field0_0x0.x = 224.0;
  (pGVar1->field17_0x2c24).field0_0x0.y = 16.0;
  (pGVar1->field17_0x2c24).field0_0x0.z = 0.0;
  (this->impl->field17_0x2c24).field2_0x10 = 1;
  pGVar1 = this->impl;
  (pGVar1->field17_0x2c24).field3_0x14.current = 0;
  (pGVar1->field17_0x2c24).field3_0x14.subFrame = 0.0;
  (pGVar1->field17_0x2c24).field3_0x14.previous = -999;
  (this->impl->field17_0x2c24).field1_0xc = param_1;
  return;
}

