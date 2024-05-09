
ZunResult EffectManager::RegisterChain(void)

{
  int iVar1;
  ZunResult ZVar2;
  
  Reset(&g_EffectManager);
  g_EffectManagerCalcChain.callback = OnUpdate;
  g_EffectManagerCalcChain.addedCallback = AddedCallback;
  g_EffectManagerCalcChain.deletedCallback = DeletedCallback;
  g_EffectManagerCalcChain.arg = &g_EffectManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_EffectManagerCalcChain,10);
  if (iVar1 == 0) {
    g_EffectManagerOnDrawChain.callback = OnDraw;
    g_EffectManagerOnDrawChain.addedCallback = (ChainLifecycleCallback *)0x0;
    g_EffectManagerOnDrawChain.deletedCallback = (ChainLifecycleCallback *)0x0;
    g_EffectManagerOnDrawChain.arg = &g_EffectManager;
    Chain::AddToDrawChain(&g_Chain,&g_EffectManagerOnDrawChain,8);
    ZVar2 = ZUN_SUCCESS;
  }
  else {
    ZVar2 = ZUN_ERROR;
  }
  return ZVar2;
}

