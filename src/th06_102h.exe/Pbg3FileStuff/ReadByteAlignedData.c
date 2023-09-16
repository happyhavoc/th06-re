
void __thiscall Pbg3FileStuff::ReadByteAlignedData(Pbg3FileStuff *this,byte *data,DWORD bytesToRead)

{
  DWORD numBytesRead;
  
  numBytesRead = (DWORD)this;
  (*(code *)this->vtbl->SeekToByteAligned)();
  FileAbstraction::Read(&(this->fileAbstraction).base,data,bytesToRead,&numBytesRead);
  return;
}

