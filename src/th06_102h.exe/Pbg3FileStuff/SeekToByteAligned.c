
undefined4 __thiscall Pbg3FileStuff::SeekToByteAligned(Pbg3FileStuff *this)

{
  byte bVar1;
  
  if ((this->fileAbstraction).base.handle != (HANDLE)0x0) {
    bVar1 = this->bitIdxInCurByte;
    while (bVar1 != 0x80) {
      (*(code *)this->vtbl->ReadBit)();
      bVar1 = this->bitIdxInCurByte;
    }
    return 1;
  }
  return 0;
}

