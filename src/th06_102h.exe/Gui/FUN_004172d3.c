
undefined4 __thiscall Gui::FUN_004172d3(Gui *this)

{
  GuiImpl *pGVar1;
  uint uVar2;
  undefined4 local_c;
  
  if (((this->impl->loadingScreenSprite).activeSpriteIndex < 0) ||
     (pGVar1 = this->impl, uVar2._0_2_ = (pGVar1->loadingScreenSprite).flags,
     uVar2._2_1_ = (pGVar1->loadingScreenSprite).unk_82[0],
     uVar2._3_1_ = (pGVar1->loadingScreenSprite).unk_82[1], (uVar2 >> 0xd & 1) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

