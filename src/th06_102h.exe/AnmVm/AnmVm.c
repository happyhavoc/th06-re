
void __thiscall th06::AnmVm::AnmVm(AnmVm *this)

{
  ZunTimer::Initialize(&this->currentTimeInScript);
  ZunTimer::Initialize(&this->scaleInterpTime);
  ZunTimer::Initialize(&this->posInterpTime);
  ZunTimer::Initialize(&this->alphaInterpTime);
  this->activeSpriteIndex = -1;
  return;
}

