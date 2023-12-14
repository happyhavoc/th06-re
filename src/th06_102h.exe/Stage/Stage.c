
void __fastcall Stage::Stage(Stage *this)

{
  AnmTimer::AnmTimer(&this->scriptTime);
  AnmTimer::AnmTimer(&this->timer);
  AnmTimer::AnmTimer(&this->skyFogInterpTimer);
  AnmVm::AnmVm(&this->field23_0x88);
  AnmVm::AnmVm(&this->field24_0x198);
  AnmTimer::AnmTimer(&this->facingDirInterpTimer);
  return;
}

