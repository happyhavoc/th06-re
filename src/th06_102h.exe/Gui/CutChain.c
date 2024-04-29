
void Gui::CutChain(void)

{
  Chain::Cut(&g_Chain,&g_GuiCalcChain);
  Chain::Cut(&g_Chain,&g_GuiDrawChain);
  return;
}

