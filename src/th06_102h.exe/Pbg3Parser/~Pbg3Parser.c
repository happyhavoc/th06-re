
void __thiscall Pbg3Parser::~Pbg3Parser(Pbg3Parser *this)

{
  Pbg3FileAbstraction *this_00;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &unwindToPbg3ParserVtableAssign;
  local_c = ExceptionList;
  this_00 = &this->fileAbstraction;
  ExceptionList = &local_c;
  (this->base).vtbl = &PBG3PARSER_VTBL;
  (this_00->base).vtbl = &FileAbstractionVtable_0046cbbc;
  local_4 = 1;
  FileAbstraction::Close(&this_00->base);
  IPbg3Parser::Reset(&this->base);
  local_4 = local_4 & 0xffffff00;
  FileAbstraction::~FileAbstraction(&this_00->base);
  (this->base).vtbl = &IPBG3PARSER_VTBL;
  ExceptionList = local_c;
  return;
}

