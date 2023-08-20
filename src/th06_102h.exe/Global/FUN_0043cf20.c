
void FUN_0043cf20(void)

{
  int in_ECX;
  
  if (*(HANDLE *)(in_ECX + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0xffffffff;
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}

