
void __thiscall Stage::Stage(Stage *this)

{
  ZunTimer::ZunTimer(&this->scriptTime);
  ZunTimer::ZunTimer(&this->timer);
  ZunTimer::ZunTimer(&this->skyFogInterpTimer);
  AnmVm::AnmVm(&this->field20_0x88);
  AnmVm::AnmVm(&this->field21_0x198);
  ZunTimer::ZunTimer(&this->facingDirInterpTimer);
  return;
}

