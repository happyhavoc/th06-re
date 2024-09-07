
int __thiscall th06::Pbg3Parser::ReadByteAlignedData(Pbg3Parser *this,byte *data,DWORD bytesToRead)

{
  BOOL BVar1;
  DWORD numBytesRead;
  
  numBytesRead = (DWORD)this;
  (*(code *)((this->base).vtbl)->SeekToNextByte)();
  BVar1 = FileAbstraction::Read(&(this->fileAbstraction).base,data,bytesToRead,&numBytesRead);
  return BVar1;
}

