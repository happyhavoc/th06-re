
BOOL __thiscall
th06::FileAbstraction::Read(FileAbstraction *this,byte *data,DWORD dataLen,LPDWORD numBytesRead)

{
  BOOL BVar1;
  
  if (this->access != 0x80000000) {
    return 0;
  }
  BVar1 = ReadFile(this->handle,data,dataLen,numBytesRead,(LPOVERLAPPED)0x0);
  return BVar1;
}

