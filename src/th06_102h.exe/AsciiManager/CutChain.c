
void AsciiManager::CutChain(void)

{
  Chain::Cut(&g_Chain,&g_AsciiManagerCalcChain);
  Chain::Cut(&g_Chain,&g_AsciiManagerOnDrawLowPrioChain);
  return;
}

