
/* WARNING: Inlined function: FUN_0045c3e0 */

ZunResult th06::Gui::RegisterChain(void)

{
  GuiImpl *this;
  ZunResult ZVar1;
  int iVar2;
  Gui *pGVar3;
  GuiImpl *pGStack_20;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0046912f;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (g_Supervisor.curState != SUPERVISOR_STATE_GAMEMANAGER_REINIT) {
    pGVar3 = &g_Gui;
    ExceptionList = &pvStack_10;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      pGVar3->flags = 0;
      pGVar3 = (Gui *)&pGVar3->impl;
    }
    this = (GuiImpl *)operator_new(0x2c44);
    uStack_8 = 0;
    if (this == (GuiImpl *)0x0) {
      pGStack_20 = (GuiImpl *)0x0;
    }
    else {
      pGStack_20 = GuiImpl::GuiImpl(this);
    }
    g_Gui.impl = pGStack_20;
  }
  uStack_8 = 0xffffffff;
  g_GuiCalcChain.callback = OnUpdate;
  g_GuiCalcChain.addedCallback = AddedCallback;
  g_GuiCalcChain.deletedCallback = DeletedCallback;
  g_GuiCalcChain.arg = &g_Gui;
  iVar2 = Chain::AddToCalcChain(&g_Chain,&g_GuiCalcChain,0xc);
  if (iVar2 == 0) {
    g_GuiDrawChain.callback = OnDraw;
    g_GuiDrawChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_GuiDrawChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_GuiDrawChain.arg = &g_Gui;
    Chain::AddToDrawChain(&g_Chain,&g_GuiDrawChain,0xb);
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  ExceptionList = pvStack_10;
  return ZVar1;
}

