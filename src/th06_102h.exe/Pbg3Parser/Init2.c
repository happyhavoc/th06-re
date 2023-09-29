
undefined4 * __fastcall Pbg3Parser::Init2(Pbg3Parser *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004692e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vtbl = &Pbg3ParserVtbl_0046cb7c;
  Init(this);
  local_4 = 0;
  FileAbstraction::Init(&(this->fileAbstraction).base);
  (this->fileAbstraction).base.vtbl = &FileAbstractionVtable_0046cbbc;
  this->vtbl = &Pbg3ParserVtbl_0046cb9c;
  ExceptionList = local_c;
  return &this->vtbl;
}

