
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 ResultScreen::RegisterChain(int param_1)

{
  ResultScreen *this;
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_64;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046924c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  this = (ResultScreen *)operator_new(0x56b0);
  uStack_8 = 0;
  if (this == (ResultScreen *)0x0) {
    pvStack_64 = (void *)0x0;
  }
  else {
    pvStack_64 = ResultScreen(this);
  }
  uStack_8 = 0xffffffff;
  DebugPrint("counat = %d\n",g_GameManager.counat);
  pCVar1 = Chain::CreateElem(&g_Chain,unk_resultscreen);
  *(ChainElem **)((int)pvStack_64 + 0x51a8) = pCVar1;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 8) = FUN_0042f060;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 0xc) = FUN_0042f5bc;
  *(void **)(*(int *)((int)pvStack_64 + 0x51a8) + 0x1c) = pvStack_64;
  if (param_1 != 0) {
    if (g_GameManager.field30_0x1823 == 0) {
      *(undefined4 *)((int)pvStack_64 + 8) = 9;
    }
    else {
      *(undefined4 *)((int)pvStack_64 + 8) = 0x11;
    }
  }
  iVar2 = Chain::AddToCalcChain(&g_Chain,*(ChainElem **)((int)pvStack_64 + 0x51a8),0xd);
  if (iVar2 == 0) {
    pCVar1 = Chain::CreateElem(&g_Chain,FUN_0042e446);
    *(ChainElem **)((int)pvStack_64 + 0x51ac) = pCVar1;
    *(void **)(*(int *)((int)pvStack_64 + 0x51ac) + 0x1c) = pvStack_64;
    Chain::AddToDrawChain(&g_Chain,*(ChainElem **)((int)pvStack_64 + 0x51ac),0xc);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar3;
}

