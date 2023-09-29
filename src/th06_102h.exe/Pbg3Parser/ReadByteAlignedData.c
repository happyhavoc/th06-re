
void __thiscall Pbg3Parser::ReadByteAlignedData(Pbg3Parser *this,byte *data,DWORD bytesToRead)

{
  DWORD numBytesRead;
  
  numBytesRead = (DWORD)this;
  (*(code *)this->vtbl->SeekToByteAligned)();
  FileAbstraction::Read(&(this->fileAbstraction).base,data,bytesToRead,&numBytesRead);
  return;
}

