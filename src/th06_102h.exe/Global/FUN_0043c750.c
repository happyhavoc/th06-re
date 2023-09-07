
void FUN_0043c750(byte param_1)

{
  Pbg3FileStuff *in_ECX;
  
  FUN_0043c6e0(in_ECX);
  if ((param_1 & 1) != 0) {
    _free(in_ECX);
  }
  return;
}

