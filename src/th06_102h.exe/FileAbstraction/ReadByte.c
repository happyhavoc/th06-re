
byte __thiscall FileAbstraction::ReadByte(FileAbstraction *this)

{
  BOOL readRes;
  DWORD outBytesRead;
  byte data;
  
  readRes = (*this->vtbl->Read)(this,(char *)&data,1,&outBytesRead);
  if ((readRes != 0) && (outBytesRead != 0)) {
    return data;
  }
  return 0xff;
}

