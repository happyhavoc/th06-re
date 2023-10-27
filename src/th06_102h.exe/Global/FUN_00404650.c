
void FUN_00404650(void)

{
  Chain::Cut(&g_Chain,&g_StageCalcChain);
  Chain::Cut(&g_Chain,&g_StageOnDrawHighPrioChain);
  Chain::Cut(&g_Chain,&g_StageOnDrawLowPrioChain);
  return;
}

