
byte __thiscall FileAbstraction::ReadByte(FileAbstraction *this)

{
  BOOL BVar1;
  DWORD outBytesRead;
  byte data;
  
  BVar1 = (*this->vtbl->Read)(this,(char *)&data,1,&outBytesRead);
  if ((BVar1 != 0) && (outBytesRead != 0)) {
    return data;
  }
  return 0xff;
}

