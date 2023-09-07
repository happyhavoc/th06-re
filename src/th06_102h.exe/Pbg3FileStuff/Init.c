
undefined4 * __fastcall Pbg3FileStuff::Init(Pbg3FileStuff *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004692e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_0046cb7c;
  Init(this);
  local_4 = 0;
  FileAbstraction::Init(&(this->fileAbstraction).base);
  (this->fileAbstraction).base.vtbl = &FileAbstractionVtable_0046cbbc;
  *(undefined ***)this = &PTR_Unk1_0046cb9c;
  ExceptionList = local_c;
  return (undefined4 *)this;
}

