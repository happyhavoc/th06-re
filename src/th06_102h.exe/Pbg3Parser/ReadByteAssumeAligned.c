
byte __thiscall Pbg3Parser::ReadByteAssumeAligned(Pbg3Parser *this)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = (this->base).offsetInFile;
  if (uVar1 < (this->base).fileSize) {
    (this->base).offsetInFile = uVar1 + 1;
  }
  bVar2 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
  return bVar2;
}

