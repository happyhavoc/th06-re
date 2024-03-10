
void __thiscall AnmVm::AnmVm(AnmVm *this)

{
  ZunTimer::ZunTimer(&this->currentTimeInScript);
  ZunTimer::ZunTimer(&this->scaleInterpTime);
  ZunTimer::ZunTimer(&this->posInterpTime);
  ZunTimer::ZunTimer(&this->alphaInterpTime);
  this->spriteNumber = -1;
  return;
}

