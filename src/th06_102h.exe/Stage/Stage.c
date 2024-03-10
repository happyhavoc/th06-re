
void __thiscall Stage::Stage(Stage *this)

{
  ZunTimer::Initialize(&this->scriptTime);
  ZunTimer::Initialize(&this->timer);
  ZunTimer::Initialize(&this->skyFogInterpTimer);
  AnmVm::AnmVm(&this->field20_0x88);
  AnmVm::AnmVm(&this->field21_0x198);
  ZunTimer::Initialize(&this->facingDirInterpTimer);
  return;
}

