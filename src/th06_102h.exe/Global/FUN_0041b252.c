
/* WARNING: Inlined function: FUN_0045c3e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041b252(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046912f;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (g_GameContext.unkInput2 != 3) {
    puVar4 = &DAT_0069bc30;
    ExceptionList = &pvStack_10;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pvVar1 = operator_new(0x2c44);
    uStack_8 = 0;
    if (pvVar1 == (void *)0x0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = FUN_0041b34b();
    }
    DAT_0069bc34 = uStack_20;
  }
  uStack_8 = 0xffffffff;
  _DAT_0069bc80 = FUN_004174d7;
  _DAT_0069bc84 = FUN_0041b1a4;
  _DAT_0069bc88 = FUN_0041b1b1;
  _DAT_0069bc98 = &DAT_0069bc30;
  iVar3 = Chain::AddToCalcChain(&g_Chain,(ChainElem *)&DAT_0069bc7c,0xc);
  if (iVar3 == 0) {
    _DAT_0069bc60 = FUN_00417502;
    _DAT_0069bc64 = 0;
    _DAT_0069bc68 = 0;
    _DAT_0069bc78 = &DAT_0069bc30;
    Chain::AddToDrawChain(&g_Chain,(ChainElem *)&DAT_0069bc5c,0xb);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar2;
}

