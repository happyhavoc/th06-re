
BOOL __thiscall Pbg3FileStuff::GetLastWriteTime(Pbg3FileStuff *this,LPFILETIME lastWriteTime)

{
  HANDLE hFile;
  BOOL BVar1;
  
  hFile = (this->fileAbstraction).base.handle;
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,lastWriteTime);
  return BVar1;
}

