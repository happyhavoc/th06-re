
uint __thiscall Pbg3FileStuff::ReadInt(Pbg3FileStuff *this,char numBitsAsPowerOf2)

{
  byte bVar1;
  undefined3 extraout_var;
  uint result;
  uint uVar3;
  int iVar2;
  
  uVar3 = 1 << (numBitsAsPowerOf2 - 1U & 0x1f);
  result = 0;
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return 0;
  }
  do {
    if (uVar3 == 0) {
      return result;
    }
    if (this->bitIdxInCurByte == 0x80) {
      bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
      iVar2 = CONCAT31(extraout_var,bVar1);
      *(int *)&this->curByte = iVar2;
      if (iVar2 == -1) {
        return 0;
      }
      this->offsetInFile = this->offsetInFile + 1;
      this->someKindOfCrc = this->someKindOfCrc + iVar2;
    }
    if ((this->bitIdxInCurByte & this->curByte) != 0) {
      result = result | uVar3;
    }
    uVar3 = uVar3 >> 1;
    bVar1 = this->bitIdxInCurByte >> 1;
    this->bitIdxInCurByte = bVar1;
    if (bVar1 == 0) {
      this->bitIdxInCurByte = 0x80;
    }
  } while( true );
}

