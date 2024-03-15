
void __thiscall Gui::FUN_004173d9(Gui *gui,int param_2)

{
  GuiImpl *iVar1;
  
  iVar1 = gui->impl;
  (iVar1->field16_0x2c04).field0_0x0.x = 416.0;
  (iVar1->field16_0x2c04).field0_0x0.y = 232.0;
  (iVar1->field16_0x2c04).field0_0x0.z = 0.0;
  (gui->impl->field16_0x2c04).field2_0x10 = 1;
  iVar1 = gui->impl;
  (iVar1->field16_0x2c04).field3_0x14.current = 0;
  (iVar1->field16_0x2c04).field3_0x14.subFrame = 0.0;
  (iVar1->field16_0x2c04).field3_0x14.previous = -999;
  (gui->impl->field16_0x2c04).field1_0xc = param_2;
  return;
}

