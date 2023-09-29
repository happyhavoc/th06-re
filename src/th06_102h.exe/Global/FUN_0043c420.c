
void FUN_0043c420(byte param_1)

{
  Pbg3ParserVtbl **in_ECX;
  
  *in_ECX = &Pbg3ParserVtbl_0046cb7c;
  if ((param_1 & 1) != 0) {
    _free(in_ECX);
  }
  return;
}

