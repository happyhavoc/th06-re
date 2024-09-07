
BOOL __thiscall th06::Pbg3Parser::GetLastWriteTime(Pbg3Parser *this,LPFILETIME lastWriteTime)

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

