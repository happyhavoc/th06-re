
void th06::EnemyManager::CutChain(void)

{
  Chain::Cut(&g_Chain,&g_EnemyManagerCalcChain);
  Chain::Cut(&g_Chain,&g_EnemyManagerDrawChain);
  return;
}

