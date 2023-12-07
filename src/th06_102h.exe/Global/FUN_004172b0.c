
void FUN_004172b0(void)

{
  Chain::Cut(&g_Chain,&g_BulletManagerCalcChain);
  Chain::Cut(&g_Chain,&g_BulletManagerDrawChain);
  return;
}

