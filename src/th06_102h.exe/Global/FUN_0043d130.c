
void FUN_0043d130(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0046cbe8;
  if ((HANDLE)in_ECX[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)in_ECX[1]);
    in_ECX[1] = 0xffffffff;
    in_ECX[2] = 0;
  }
  return;
}

