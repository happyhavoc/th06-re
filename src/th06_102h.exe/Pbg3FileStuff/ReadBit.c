
bool __thiscall Pbg3FileStuff::ReadBit(Pbg3FileStuff *this)

{
  byte bVar1;
  undefined3 extraout_var;
  byte bVar3;
  int iVar2;
  
  if ((this->fileAbstraction).base.handle == (HANDLE)0x0) {
    return false;
  }
  if (this->bitIdxInCurByte == 0x80) {
    bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
    iVar2 = CONCAT31(extraout_var,bVar1);
    *(int *)&this->curByte = iVar2;
    if (iVar2 == -1) {
      return false;
    }
    this->offsetInFile = this->offsetInFile + 1;
    this->someKindOfCrc = this->someKindOfCrc + iVar2;
  }
  bVar1 = this->bitIdxInCurByte;
  bVar3 = bVar1 >> 1;
  this->bitIdxInCurByte = bVar3;
  if (bVar3 == 0) {
    this->bitIdxInCurByte = 0x80;
  }
  return (*(uint *)&this->curByte & (uint)bVar1) != 0;
}
