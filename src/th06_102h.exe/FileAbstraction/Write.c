
BOOL __thiscall
th06::FileAbstraction::Write(FileAbstraction *this,LPCVOID data,DWORD dataLen,LPDWORD outWritten)

{
  BOOL BVar1;
  
  if (this->access != 0x40000000) {
    return 0;
  }
  BVar1 = WriteFile(this->handle,data,dataLen,outWritten,(LPOVERLAPPED)0x0);
  return BVar1;
}

