
undefined4 __thiscall Pbg3File_conflict1::Unk1(Pbg3File *this,char *filename)

{
  int iVar1;
  Pbg3FileStuff *pPVar2;
  undefined4 uVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0046934b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = SomeKindOfDelete((Pbg3File_conflict1 *)this);
  if (iVar1 != 0) {
    pPVar2 = (Pbg3FileStuff *)operator_new(0x24);
    local_4 = 0;
    if (pPVar2 == (Pbg3FileStuff *)0x0) {
      pPVar2 = (Pbg3FileStuff *)0x0;
    }
    else {
      pPVar2 = (Pbg3FileStuff *)Pbg3FileStuff::Init2(pPVar2);
    }
    local_4 = 0xffffffff;
    this->inner = pPVar2;
    if (pPVar2 != (Pbg3FileStuff *)0x0) {
      iVar1 = Pbg3FileStuff::Unk1(pPVar2,filename);
      if (iVar1 != 0) {
        uVar3 = Unk12((Pbg3File_conflict1 *)this);
        ExceptionList = local_c;
        return uVar3;
      }
      if (this->inner != (Pbg3FileStuff *)0x0) {
        (*(code *)this->inner->vtbl->dtor)(1);
        this->inner = (Pbg3FileStuff *)0x0;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

