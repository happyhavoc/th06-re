
void __thiscall Chain::ChainElem::~ChainElem(ChainElem *this)

{
  if (*(int *)(this + 0xc) != 0) {
    (**(code **)(this + 0xc))(*(undefined4 *)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

