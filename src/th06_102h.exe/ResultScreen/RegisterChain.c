
/* WARNING: Inlined function: FUN_0045c3e0 */

undefined4 ResultScreen::RegisterChain(ResultScreen *param_1)

{
  ResultScreen *this;
  ChainElem *pCVar1;
  int iVar2;
  undefined4 uVar3;
  ResultScreen *pvStack_64;
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
    pvStack_64 = (ResultScreen *)0x0;
  }
  else {
    pvStack_64 = (ResultScreen *)ResultScreen(this);
  }
  uStack_8 = 0xffffffff;
  DebugPrint("counat = %d\n",g_GameManager.counat);
  pCVar1 = Chain::CreateElem(&g_Chain,OnUpdate);
  pvStack_64->calc_chain = pCVar1;
  pvStack_64->calc_chain->addedCallback = AddedCallback;
  pvStack_64->calc_chain->deletedCallback = DeletedCallback;
  pvStack_64->calc_chain->arg = pvStack_64;
  if (param_1 != (ResultScreen *)0x0) {
    if (g_GameManager.field30_0x1823 == 0) {
      pvStack_64->unk_8 = 9;
    }
    else {
      pvStack_64->unk_8 = 0x11;
    }
  }
  iVar2 = Chain::AddToCalcChain(&g_Chain,pvStack_64->calc_chain,0xd);
  if (iVar2 == 0) {
    pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
    pvStack_64->draw_chain = pCVar1;
    pvStack_64->draw_chain->arg = pvStack_64;
    Chain::AddToDrawChain(&g_Chain,pvStack_64->draw_chain,0xc);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  ExceptionList = pvStack_10;
  return uVar3;
}

