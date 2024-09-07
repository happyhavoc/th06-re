
int __thiscall th06::Pbg3Parser::ReadBit(Pbg3Parser *this)

{
  byte bVar1;
  undefined3 extraout_var;
  byte bVar3;
  int iVar2;
  
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return 0;
  }
  if ((this->base).bitIdxInCurByte == 0x80) {
    bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
    iVar2 = CONCAT31(extraout_var,bVar1);
    (this->base).curByte = iVar2;
    if (iVar2 == -1) {
      return 0;
    }
    (this->base).offsetInFile = (this->base).offsetInFile + 1;
    (this->base).someKindOfCrc = (this->base).someKindOfCrc + iVar2;
  }
  bVar1 = (this->base).bitIdxInCurByte;
  bVar3 = bVar1 >> 1;
  (this->base).bitIdxInCurByte = bVar3;
  if (bVar3 == 0) {
    (this->base).bitIdxInCurByte = 0x80;
  }
  return (uint)(((this->base).curByte & (uint)bVar1) != 0);
}

