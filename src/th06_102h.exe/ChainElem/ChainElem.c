
ChainElem * __thiscall Chain::ChainElem::ChainElem(ChainElem *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(ChainElem **)(this + 0x18) = this;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)this = 0;
  *(ushort *)(this + 2) = *(ushort *)(this + 2) & 0xfffe;
  return (ChainElem *)this;
}

