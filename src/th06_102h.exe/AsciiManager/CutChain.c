
void th06::AsciiManager::CutChain(void)

{
  Chain::Cut(&g_Chain,&g_AsciiManagerCalcChain);
  Chain::Cut(&g_Chain,&g_AsciiManagerOnDrawMenusChain);
  return;
}

