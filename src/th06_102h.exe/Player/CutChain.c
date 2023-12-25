
void Player::CutChain(void)

{
  Chain::Cut(&g_Chain,g_Player.onTick);
  g_Player.onTick = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,g_Player.onDraw1);
  g_Player.onDraw1 = (ChainElem *)0x0;
  Chain::Cut(&g_Chain,g_Player.onDraw2);
  g_Player.onDraw2 = (ChainElem *)0x0;
  return;
}

