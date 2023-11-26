
void GameManager::Deinitialize(void)

{
  Chain::Cut(&g_Chain,&g_GameManagerCalcChain);
  Chain::Cut(&g_Chain,&g_GameManagerDrawChain);
  return;
}

