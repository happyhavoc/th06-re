
void __thiscall th06::Stage::Stage(Stage *this)

{
  ZunTimer::Initialize((ZunTimer *)(this + 0x1c));
  ZunTimer::Initialize((ZunTimer *)(this + 0x2c));
  ZunTimer::Initialize((ZunTimer *)(this + 0x70));
  AnmVm::AnmVm((AnmVm *)(this + 0x88));
  AnmVm::AnmVm((AnmVm *)(this + 0x198));
  ZunTimer::Initialize((ZunTimer *)(this + 0x2c8));
  return;
}

