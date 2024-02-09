
void EffectManager::CutChain(void)

{
  Chain::Cut(&g_Chain,&g_EffectManagerCalcChain);
  Chain::Cut(&g_Chain,&g_EffectManagerOnDrawChain);
  return;
}

