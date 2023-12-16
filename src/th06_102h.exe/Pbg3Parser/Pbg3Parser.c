
undefined4 * __thiscall Pbg3Parser::Pbg3Parser(Pbg3Parser *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004692e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->base).vtbl = &IPBG3PARSER_VTBL;
  IPbg3Parser::Reset(&this->base);
  local_4 = 0;
  FileAbstraction::FileAbstraction(&(this->fileAbstraction).base);
  (this->fileAbstraction).base.vtbl = &FileAbstractionVtable_0046cbbc;
  (this->base).vtbl = &PBG3PARSER_VTBL;
  ExceptionList = local_c;
  return (undefined4 *)this;
}

