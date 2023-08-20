
undefined4 FUN_0043ce60(LPCSTR param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  HANDLE hFile;
  int *in_ECX;
  char *pcVar3;
  
  bVar1 = false;
  (**(code **)(*in_ECX + 4))();
  cVar2 = *param_2;
  pcVar3 = param_2;
  if (cVar2 != '\0') {
    while( true ) {
      if (cVar2 == 'r') {
        in_ECX[2] = -0x80000000;
        param_2 = (char *)0x3;
        goto LAB_0043ced4;
      }
      if (cVar2 == 'w') break;
      if (cVar2 == 'a') {
        bVar1 = true;
        in_ECX[2] = 0x40000000;
        param_2 = (char *)0x4;
        goto LAB_0043ced4;
      }
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      if (cVar2 == '\0') {
        return 0;
      }
    }
    DeleteFileA(param_1);
    in_ECX[2] = 0x40000000;
    param_2 = (char *)0x4;
  }
LAB_0043ced4:
  if (*pcVar3 != '\0') {
    hFile = CreateFileA(param_1,in_ECX[2],1,(LPSECURITY_ATTRIBUTES)0x0,(DWORD)param_2,0x8000080,
                        (HANDLE)0x0);
    in_ECX[1] = (int)hFile;
    if (hFile != (HANDLE)0xffffffff) {
      if (bVar1) {
        SetFilePointer(hFile,0,(PLONG)0x0,2);
      }
      return 1;
    }
  }
  return 0;
}

