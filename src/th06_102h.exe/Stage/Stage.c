
void __thiscall Stage::Stage(Stage *this)

{
  ZunTimer::Initialize(&this->scriptTime);
  ZunTimer::Initialize(&this->timer);
  ZunTimer::Initialize(&this->skyFogInterpTimer);
  AnmVm::AnmVm(&this->spellcardBackground);
  AnmVm::AnmVm(&this->unk_198);
  ZunTimer::Initialize(&this->facingDirInterpTimer);
  return;
}

