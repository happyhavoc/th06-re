
BOOL FUN_0043c6b0(LPFILETIME param_1)

{
  BOOL BVar1;
  int in_ECX;
  
  if (*(HANDLE *)(in_ECX + 0x1c) == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar1 = GetFileTime(*(HANDLE *)(in_ECX + 0x1c),(LPFILETIME)0x0,(LPFILETIME)0x0,param_1);
  return BVar1;
}

