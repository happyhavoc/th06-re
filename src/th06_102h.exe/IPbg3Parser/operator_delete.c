
Pbg3Parser * __thiscall IPbg3Parser::operator_delete(IPbg3Parser *this,byte param_1)

{
  this->vtbl = &IPBG3PARSER_VTBL;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this);
  }
  return (Pbg3Parser *)this;
}

