
BOOL __thiscall Pbg3Archive::Load(Pbg3Archive *this,char *path)

{
  int iVar1;
  Pbg3Parser *pPVar2;
  BOOL BVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0046934b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = ~Pbg3Archive(this);
  if (iVar1 != 0) {
    pPVar2 = (Pbg3Parser *)operator_new(0x24);
    uStack_4 = 0;
    if (pPVar2 == (Pbg3Parser *)0x0) {
      pPVar2 = (Pbg3Parser *)0x0;
    }
    else {
      pPVar2 = (Pbg3Parser *)Pbg3Parser::Pbg3Parser(pPVar2);
    }
    uStack_4 = 0xffffffff;
    this->parser = pPVar2;
    if (pPVar2 != (Pbg3Parser *)0x0) {
      iVar1 = Pbg3Parser::Open(pPVar2,path);
      if (iVar1 != 0) {
        BVar3 = ParseHeader(this);
        ExceptionList = pvStack_c;
        return BVar3;
      }
      if (this->parser != (Pbg3Parser *)0x0) {
        (*(code *)((this->parser->base).vtbl)->operator_delete)(1);
        this->parser = (Pbg3Parser *)0x0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

