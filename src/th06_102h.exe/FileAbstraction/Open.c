
int __thiscall th06::FileAbstraction::Open(FileAbstraction *this,LPCSTR filename,char *mode)

{
  char cVar1;
  HANDLE hFile;
  char *pcVar2;
  bool goToEnd;
  
  goToEnd = false;
  (*this->vtbl->Close)(this);
  cVar1 = *mode;
  pcVar2 = mode;
  if (cVar1 != '\0') {
    while( true ) {
      if (cVar1 == 'r') {
        this->access = 0x80000000;
        mode = (char *)OPEN_EXISTING;
        goto LAB_0043ced4;
      }
      if (cVar1 == 'w') break;
      if (cVar1 == 'a') {
        goToEnd = true;
        this->access = GENERIC_WRITE;
        mode = (char *)OPEN_ALWAYS;
        goto LAB_0043ced4;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') {
        return 0;
      }
    }
    DeleteFileA(filename);
    this->access = GENERIC_WRITE;
    mode = (char *)OPEN_ALWAYS;
  }
LAB_0043ced4:
  if (*pcVar2 != '\0') {
    hFile = CreateFileA(filename,this->access,1,(LPSECURITY_ATTRIBUTES)0x0,(DWORD)mode,0x8000080,
                        (HANDLE)0x0);
    this->handle = hFile;
    if (hFile != (HANDLE)0xffffffff) {
      if (goToEnd) {
        SetFilePointer(hFile,0,(PLONG)0x0,FILE_END);
      }
      return 1;
    }
  }
  return 0;
}

