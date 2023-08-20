
void FUN_0043ba10(void)

{
  void **in_ECX;
  
  FUN_0043c2c0();
  if ((in_ECX[0x20] == (void *)0x0) && (*in_ECX != (void *)0x0)) {
    _free(*in_ECX);
    *in_ECX = (void *)0x0;
  }
  return;
}

