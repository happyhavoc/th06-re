
BOOL FUN_0043cf50(LPVOID param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != -0x80000000) {
    return 0;
  }
  BVar1 = ReadFile(*(HANDLE *)(in_ECX + 4),param_1,param_2,param_3,(LPOVERLAPPED)0x0);
  return BVar1;
}

