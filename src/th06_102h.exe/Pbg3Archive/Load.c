
undefined4 __thiscall Pbg3Archive::Load(Pbg3Archive *this,char *param_1)

{
  int iVar1;
  Pbg3Parser *pPVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0046934b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = dtor(this);
  if (iVar1 != 0) {
    pPVar2 = (Pbg3Parser *)operator_new(0x24);
    uStack_4 = 0;
    if (pPVar2 == (Pbg3Parser *)0x0) {
      pPVar2 = (Pbg3Parser *)0x0;
    }
    else {
      pPVar2 = (Pbg3Parser *)Pbg3Parser::Init2(pPVar2);
    }
    uStack_4 = 0xffffffff;
    this->inner = pPVar2;
    if (pPVar2 != (Pbg3Parser *)0x0) {
      iVar1 = Pbg3Parser::Open(pPVar2,param_1);
      if (iVar1 != 0) {
        uVar3 = ParseHeader(this);
        ExceptionList = pvStack_c;
        return uVar3;
      }
      if (this->inner != (Pbg3Parser *)0x0) {
        (*(code *)this->inner->vtbl->Close)(1);
        this->inner = (Pbg3Parser *)0x0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

