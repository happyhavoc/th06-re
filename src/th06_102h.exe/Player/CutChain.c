
void Player::CutChain(void)

{
  Chain::Cut(&g_Chain,PTR_006d3f0c);
  PTR_006d3f0c = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,PTR_006d3f10);
  PTR_006d3f10 = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,PTR_006d3f14);
  PTR_006d3f14 = (ChainElem *)0x0;
  return;
}

