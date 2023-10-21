
Pbg3Parser * __thiscall IPbg3Parser::IPbg3Parser(void *this,byte param_1)

{
  *(Pbg3ParserVtbl **)this = &Pbg3ParserVtbl_0046cb7c;
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return (Pbg3Parser *)this;
}

