
int AsciiManager::RegisterChain(void)

{
  int iVar1;
  
  g_AsciiManagerCalcChain.callback = OnUpdate;
  g_AsciiManagerCalcChain.addedCallback = AddedCallback;
  g_AsciiManagerCalcChain.deletedCallback = DeletedCallback;
  g_AsciiManagerCalcChain.arg = &g_AsciiManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_AsciiManagerCalcChain,1);
  if (iVar1 == 0) {
    g_AsciiManagerOnDrawLowPrioChain.callback = OnDrawLowPrio;
    g_AsciiManagerOnDrawLowPrioChain.addedCallback = 0;
    g_AsciiManagerOnDrawLowPrioChain.deletedCallback = 0;
    g_AsciiManagerOnDrawLowPrioChain.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&g_AsciiManagerOnDrawLowPrioChain,0xf);
    g_AsciiManagerOnDrawHighPrioChain.callback = OnDrawHighPrio;
    g_AsciiManagerOnDrawHighPrioChain.addedCallback = 0;
    g_AsciiManagerOnDrawHighPrioChain.deletedCallback = 0;
    g_AsciiManagerOnDrawHighPrioChain.arg = &g_AsciiManager;
    Chain::AddToDrawChain(&g_Chain,&g_AsciiManagerOnDrawHighPrioChain,10);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

