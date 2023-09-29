
undefined4 __thiscall Pbg3Archive_conflict1::Load(Pbg3Archive_conflict1 *this,char *param_1)

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
  iVar1 = dtor((Pbg3Archive_conflict1 *)this);
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
    *(Pbg3Parser **)this = pPVar2;
    if (pPVar2 != (Pbg3Parser *)0x0) {
      iVar1 = Pbg3Parser::Open(pPVar2,param_1);
      if (iVar1 != 0) {
        uVar3 = ParseHeader((Pbg3Archive_conflict1 *)this);
        ExceptionList = pvStack_c;
        return uVar3;
      }
      if (*(int **)this != (int *)0x0) {
        (**(code **)(**(int **)this + 0x1c))(1);
        *(undefined4 *)this = 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

