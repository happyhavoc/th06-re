
ZunResult AsciiManager::RegisterChain(void)

{
  int iVar1;
  ZunResult ZVar2;
  
  g_AsciiManagerCalcChain.callback = OnUpdate;
  g_AsciiManagerCalcChain.addedCallback = AddedCallback;
  g_AsciiManagerCalcChain.deletedCallback = DeletedCallback;
  g_AsciiManagerCalcChain.arg = &g_AsciiManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_AsciiManagerCalcChain,1);
  if (iVar1 == 0) {
    g_AsciiManagerOnDrawMenusChain.callback = OnDrawMenus;
    g_AsciiManagerOnDrawMenusChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_AsciiManagerOnDrawMenusChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_AsciiManagerOnDrawMenusChain.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&g_AsciiManagerOnDrawMenusChain,0xf);
    g_AsciiManagerOnDrawHighPrioChain.callback = OnDrawPopups;
    g_AsciiManagerOnDrawHighPrioChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_AsciiManagerOnDrawHighPrioChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_AsciiManagerOnDrawHighPrioChain.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&g_AsciiManagerOnDrawHighPrioChain,10);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

