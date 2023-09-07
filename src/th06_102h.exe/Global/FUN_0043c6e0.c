
void __fastcall FUN_0043c6e0(Pbg3FileStuff *param_1)

{
  Pbg3FileAbstraction *pPVar1;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0046932f;
  local_c = ExceptionList;
  pPVar1 = &param_1->fileAbstraction;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = &PTR_Unk1_0046cb9c;
  (pPVar1->base).vtbl = &FileAbstractionVtable_0046cbbc;
  local_4 = 1;
  FileAbstraction::Close(&pPVar1->base);
  Pbg3FileStuff::Init(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_0043d130(&pPVar1->base);
  *(undefined ***)param_1 = &PTR_FUN_0046cb7c;
  ExceptionList = local_c;
  return;
}

