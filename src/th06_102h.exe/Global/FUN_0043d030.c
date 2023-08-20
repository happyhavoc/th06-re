
undefined4 FUN_0043d030(LONG param_1,DWORD param_2)

{
  int in_ECX;
  
  if (*(HANDLE *)(in_ECX + 4) == (HANDLE)0xffffffff) {
    return 0;
  }
  SetFilePointer(*(HANDLE *)(in_ECX + 4),param_1,(PLONG)0x0,param_2);
  return 1;
}

