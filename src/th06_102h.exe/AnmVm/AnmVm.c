
void __thiscall AnmVm::AnmVm(AnmVm *this)

{
  ZunTimer::Initialize(&this->currentTimeInScript);
  ZunTimer::Initialize(&this->scaleInterpTime);
  ZunTimer::Initialize(&this->posInterpTime);
  ZunTimer::Initialize(&this->alphaInterpTime);
  this->spriteNumber = -1;
  return;
}

