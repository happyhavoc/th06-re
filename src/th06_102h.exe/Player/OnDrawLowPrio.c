
ChainCallbackResult th06::Player::OnDrawLowPrio(Player *param_1)

{
  DrawBulletExplosions(param_1);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

