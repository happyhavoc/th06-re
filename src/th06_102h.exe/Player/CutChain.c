
void Player::CutChain(void)

{
  Chain::Cut(&g_Chain,(ChainElem *)g_Player._39140_4_);
  g_Player._39140_4_ = 0;
  Chain::Cut(&g_Chain,(ChainElem *)g_Player._39144_4_);
  g_Player._39144_4_ = 0;
  Chain::Cut(&g_Chain,(ChainElem *)g_Player._39148_4_);
  g_Player._39148_4_ = 0;
  return;
}

