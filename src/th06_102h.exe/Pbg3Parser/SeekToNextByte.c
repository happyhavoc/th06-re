
undefined4 __thiscall th06::Pbg3Parser::SeekToNextByte(Pbg3Parser *this)

{
  byte bVar1;
  
  if ((this->fileAbstraction).base.handle != (HANDLE)0x0) {
    bVar1 = (this->base).bitIdxInCurByte;
    while (bVar1 != 0x80) {
      (*((this->base).vtbl)->ReadBit)(this);
      bVar1 = (this->base).bitIdxInCurByte;
    }
    return 1;
  }
  return 0;
}

