
void __thiscall Pbg3Parser::~Pbg3Parser(Pbg3Parser *this)

{
  Pbg3FileAbstraction *this_00;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0046932f;
  local_c = ExceptionList;
  this_00 = &this->fileAbstraction;
  ExceptionList = &local_c;
  this->vtbl = &Pbg3ParserVtbl_0046cb9c;
  (this_00->base).vtbl = &FileAbstractionVtable_0046cbbc;
  local_4 = 1;
  FileAbstraction::Close(&this_00->base);
  Init(this);
  local_4 = local_4 & 0xffffff00;
  FileAbstraction::UnkDeinit(&this_00->base);
  this->vtbl = &Pbg3ParserVtbl_0046cb7c;
  ExceptionList = local_c;
  return;
}

