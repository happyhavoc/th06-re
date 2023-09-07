
int __thiscall FileAbstraction::Open(FileAbstraction *this,LPCSTR filename,char *mode)

{
  bool bVar1;
  char cVar2;
  HANDLE hFile;
  char *pcVar3;
  
  bVar1 = false;
  (*this->vtbl->Close)(this);
  cVar2 = *mode;
  pcVar3 = mode;
  if (cVar2 != '\0') {
    while( true ) {
      if (cVar2 == 'r') {
        this->field2_0x8 = 0x80000000;
        mode = (char *)0x3;
        goto LAB_0043ced4;
      }
      if (cVar2 == 'w') break;
      if (cVar2 == 'a') {
        bVar1 = true;
        this->field2_0x8 = 0x40000000;
        mode = (char *)0x4;
        goto LAB_0043ced4;
      }
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      if (cVar2 == '\0') {
        return 0;
      }
    }
    DeleteFileA(filename);
    this->field2_0x8 = 0x40000000;
    mode = (char *)0x4;
  }
LAB_0043ced4:
  if (*pcVar3 != '\0') {
    hFile = CreateFileA(filename,this->field2_0x8,1,(LPSECURITY_ATTRIBUTES)0x0,(DWORD)mode,0x8000080
                        ,(HANDLE)0x0);
    this->handle = hFile;
    if (hFile != (HANDLE)0xffffffff) {
      if (bVar1) {
        SetFilePointer(hFile,0,(PLONG)0x0,2);
      }
      return 1;
    }
  }
  return 0;
}

