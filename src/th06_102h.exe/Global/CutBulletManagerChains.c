
void CutBulletManagerChains(void)

{
  Chain::Cut(&g_Chain,&g_BulletManagerCalcChain);
  Chain::Cut(&g_Chain,&g_BulletManagerDrawChain);
  return;
}

