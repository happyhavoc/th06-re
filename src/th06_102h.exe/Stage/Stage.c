
void __fastcall Stage::Stage(Stage *this)

{
  AnmTimer::AnmTimer(&this->scriptTime);
  AnmTimer::AnmTimer(&this->field9_0x2c);
  AnmTimer::AnmTimer(&this->skyFogInterpTimer);
  AnmVm::AnmVm(&this->field20_0x88);
  AnmVm::AnmVm(&this->field21_0x198);
  AnmTimer::AnmTimer(&this->facingDirInterpTimer);
  return;
}

