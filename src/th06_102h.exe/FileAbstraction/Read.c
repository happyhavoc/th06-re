
BOOL __thiscall
FileAbstraction::Read(FileAbstraction *this,byte *data,DWORD dataLen,LPDWORD numBytesRead)

{
  BOOL BVar1;
  
  if (this->field2_0x8 != -0x80000000) {
    return 0;
  }
  BVar1 = ReadFile(this->handle,data,dataLen,numBytesRead,(LPOVERLAPPED)0x0);
  return BVar1;
}

