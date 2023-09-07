
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 FUN_0042d773(int param_1)

{
  void *pvVar1;
  ChainElem *pCVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvStack_64;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046924c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  pvVar1 = operator_new(0x56b0);
  uStack_8 = 0;
  if (pvVar1 == (void *)0x0) {
    pvStack_64 = (void *)0x0;
  }
  else {
    pvStack_64 = FUN_0042d8a1(pvVar1);
  }
  uStack_8 = 0xffffffff;
  DebugPrint("counat = %d\n",DAT_0069d70c);
  pCVar2 = AllocateChainElem(&g_Chain,FUN_0042d98e);
  *(ChainElem **)((int)pvStack_64 + 0x51a8) = pCVar2;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 8) = FUN_0042f060;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 0xc) = FUN_0042f5bc;
  *(void **)(*(int *)((int)pvStack_64 + 0x51a8) + 0x1c) = pvStack_64;
  if (param_1 != 0) {
    if (DAT_0069d4c3 == '\0') {
      *(undefined4 *)((int)pvStack_64 + 8) = 9;
    }
    else {
      *(undefined4 *)((int)pvStack_64 + 8) = 0x11;
    }
  }
  iVar3 = Chain::AddToCalcChain(&g_Chain,*(ChainElem **)((int)pvStack_64 + 0x51a8),0xd);
  if (iVar3 == 0) {
    pCVar2 = AllocateChainElem(&g_Chain,FUN_0042e446);
    *(ChainElem **)((int)pvStack_64 + 0x51ac) = pCVar2;
    *(void **)(*(int *)((int)pvStack_64 + 0x51ac) + 0x1c) = pvStack_64;
    Chain::AddToDrawChain(&g_Chain,*(ChainElem **)((int)pvStack_64 + 0x51ac),0xc);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar4;
}

