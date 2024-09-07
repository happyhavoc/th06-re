
void __thiscall th06::IPbg3Parser::Reset(IPbg3Parser *this)

{
  this->bitIdxInCurByte = 0x80;
  this->offsetInFile = 0;
  this->fileSize = 0;
  this->curByte = 0;
  this->someKindOfCrc = 0;
  return;
}

