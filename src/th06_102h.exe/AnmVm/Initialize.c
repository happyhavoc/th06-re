
void __thiscall th06::AnmVm::Initialize(AnmVm *this)

{
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined2 *)(this + 0x86) = 0;
  *(undefined2 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  D3DXMatrixIdentity((D3DMATRIX *)(this + 0x3c));
  *(undefined2 *)(this + 0x80) = 3;
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined2 *)(this + 0x8a) = 0;
  *(undefined2 *)(this + 0x8c) = 0;
  ZunTimer::Initialize((ZunTimer *)(this + 0x30));
  return;
}

