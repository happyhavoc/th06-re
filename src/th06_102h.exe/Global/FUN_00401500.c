
void FUN_00401500(void)

{
  Chain::Cut(&g_Chain,&g_AsciiManagerCalcChain);
  Chain::Cut(&g_Chain,&g_AsciiManagerDrawLowPrioChain);
  return;
}

