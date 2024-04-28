
ChainCallbackResult Player::OnDrawLowPrio(Player *param_1)

{
  UpdateBullets2Wtf(param_1);
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

