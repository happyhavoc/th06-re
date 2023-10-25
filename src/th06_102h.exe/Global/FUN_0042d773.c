
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 FUN_0042d773(int param_1)

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
    pvStack_64 = ResultScreen::ResultScreen(this);
  }
  uStack_8 = 0xffffffff;
  DebugPrint("counat = %d\n",g_GameManager._6764_4_);
  pCVar1 = ChainElem::Allocate(FUN_0042d98e);
  *(ChainElem **)((int)pvStack_64 + 0x51a8) = pCVar1;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 8) = FUN_0042f060;
  *(code **)(*(int *)((int)pvStack_64 + 0x51a8) + 0xc) = FUN_0042f5bc;
  *(void **)(*(int *)((int)pvStack_64 + 0x51a8) + 0x1c) = pvStack_64;
  if (param_1 != 0) {
    if (g_GameManager._6179_1_ == '\0') {
      *(undefined4 *)((int)pvStack_64 + 8) = 9;
    }
    else {
      *(undefined4 *)((int)pvStack_64 + 8) = 0x11;
    }
  }
  iVar2 = Chain::AddToCalcChain(&g_Chain,*(ChainElem **)((int)pvStack_64 + 0x51a8),0xd);
  if (iVar2 == 0) {
    pCVar1 = ChainElem::Allocate(FUN_0042e446);
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

