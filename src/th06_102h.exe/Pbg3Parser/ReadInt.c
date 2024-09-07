
uint __thiscall th06::Pbg3Parser::ReadInt(Pbg3Parser *this,char numBitsAsPowerOf2)

{
  undefined3 extraout_var;
  uint result;
  uint remainingBits;
  int iVar1;
  byte bitIdx;
  
  remainingBits = 1 << (numBitsAsPowerOf2 - 1U & 0x1f);
  result = 0;
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return 0;
  }
  do {
    if (remainingBits == 0) {
      return result;
    }
    if ((this->base).bitIdxInCurByte == 0x80) {
      bitIdx = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
      iVar1 = CONCAT31(extraout_var,bitIdx);
      (this->base).curByte = iVar1;
      if (iVar1 == -1) {
        return 0;
      }
      (this->base).offsetInFile = (this->base).offsetInFile + 1;
      (this->base).someKindOfCrc = (this->base).someKindOfCrc + iVar1;
    }
    bitIdx = (this->base).bitIdxInCurByte;
    if ((bitIdx & *(byte *)&(this->base).curByte) != 0) {
      result = result | remainingBits;
    }
    remainingBits = remainingBits >> 1;
    bitIdx = bitIdx >> 1;
    (this->base).bitIdxInCurByte = bitIdx;
    if (bitIdx == 0) {
      (this->base).bitIdxInCurByte = 0x80;
    }
  } while( true );
}

