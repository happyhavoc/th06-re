
ChainCallbackResult th06::GameManager::OnDraw(GameManager *param_1)

{
  if (param_1->is_in_game_menu != 0) {
    param_1->is_in_game_menu = 2;
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

