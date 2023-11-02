
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Player::CutChain(void)

{
  Chain::Cut(&g_Chain,_DAT_006d3f0c);
  _DAT_006d3f0c = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,_DAT_006d3f10);
  _DAT_006d3f10 = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,_DAT_006d3f14);
  _DAT_006d3f14 = (ChainElem *)0x0;
  return;
}

