
void __thiscall th06::AnmVm::AnmVm(AnmVm *this)

{
  ZunTimer::Initialize((ZunTimer *)(this + 0x30));
  ZunTimer::Initialize((ZunTimer *)(this + 0xa4));
  ZunTimer::Initialize((ZunTimer *)(this + 0xf0));
  ZunTimer::Initialize((ZunTimer *)(this + 0x100));
  *(undefined2 *)(this + 0xb0) = 0xffff;
  return;
}

