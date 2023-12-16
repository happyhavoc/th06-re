
void __thiscall AnmVm::AnmVm(AnmVm *this)

{
  AnmTimer::AnmTimer(&this->currentTimeInScript);
  AnmTimer::AnmTimer(&this->scaleInterpTime);
  AnmTimer::AnmTimer(&this->posInterpTime);
  AnmTimer::AnmTimer(&this->alphaInterpTime);
  this->spriteNumber = -1;
  return;
}

