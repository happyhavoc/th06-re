
byte __thiscall Pbg3Parser::ReadByteAssumeAligned(Pbg3Parser *this)

{
  byte bVar1;
  
  if (this->offsetInFile < this->fileSize) {
    this->offsetInFile = this->offsetInFile + 1;
  }
  bVar1 = FileAbstraction::ReadByte(&(this->fileAbstraction).base);
  return bVar1;
}

