
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult th06::ResultScreen::RegisterChain(BOOL param_1)

{
  ResultScreen *this;
  ChainElem *pCVar1;
  int iVar2;
  ZunResult ZVar3;
  ResultScreen *result_screen;
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
    result_screen = (ResultScreen *)0x0;
  }
  else {
    result_screen = (ResultScreen *)ResultScreen(this);
  }
  uStack_8 = 0xffffffff;
  utils::DebugPrint("counat = %d\n",g_GameManager.counat);
  pCVar1 = Chain::CreateElem(&g_Chain,OnUpdate);
  result_screen->calc_chain = pCVar1;
  result_screen->calc_chain->addedCallback = AddedCallback;
  result_screen->calc_chain->deletedCallback = DeletedCallback;
  result_screen->calc_chain->arg = result_screen;
  if (param_1 != 0) {
    if (g_GameManager.is_in_practice_mode == 0) {
      result_screen->resultScreenState = 9;
    }
    else {
      result_screen->resultScreenState = 0x11;
    }
  }
  iVar2 = Chain::AddToCalcChain(&g_Chain,result_screen->calc_chain,0xd);
  if (iVar2 == 0) {
    pCVar1 = Chain::CreateElem(&g_Chain,OnDraw);
    result_screen->draw_chain = pCVar1;
    result_screen->draw_chain->arg = result_screen;
    Chain::AddToDrawChain(&g_Chain,result_screen->draw_chain,0xc);
    ZVar3 = ZUN_SUCCESS;
  }
  else {
    ZVar3 = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return ZVar3;
}

