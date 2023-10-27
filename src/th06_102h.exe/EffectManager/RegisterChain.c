
undefined4 EffectManager::RegisterChain(void)

{
  int iVar1;
  undefined4 uVar2;
  
  Reset((undefined4 *)&g_EffectManager);
  g_EffectManagerCalcChain.callback = OnUpdate;
  g_EffectManagerCalcChain.addedCallback = AddedCallback;
  g_EffectManagerCalcChain.deletedCallback = DeletedCallback;
  g_EffectManagerCalcChain.arg = &g_EffectManager;
  iVar1 = Chain::AddToCalcChain(&g_Chain,&g_EffectManagerCalcChain,10);
  if (iVar1 == 0) {
    g_EffectManagerOnDrawChain.callback = OnDraw;
    g_EffectManagerOnDrawChain.addedCallback = 0;
    g_EffectManagerOnDrawChain.deletedCallback = 0;
    g_EffectManagerOnDrawChain.arg = &g_EffectManager;
    Chain::AddToDrawChain(&g_Chain,&g_EffectManagerOnDrawChain,8);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

