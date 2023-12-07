
ChainCallbackResult AsciiManager::OnUpdate(AsciiManager *arg)

{
  AsciiManagerPopup *local_c;
  int local_8;
  
  if ((g_GameManager.is_in_game_menu == 0) && (g_GameManager.is_in_retry_menu == 0)) {
    local_c = arg->popups0;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (local_c->inUse != '\0') {
        (local_c->position).y =
             (local_c->position).y - g_Supervisor.effectiveFramerateMultiplier * 0.5;
        (local_c->timer).previous = (local_c->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(local_c->timer).current,&(local_c->timer).subFrame);
        if (0x3c < (local_c->timer).current) {
          local_c->inUse = '\0';
        }
      }
      local_c = local_c + 1;
    }
  }
  else if (g_GameManager.is_in_game_menu != 0) {
    StageMenu::OnUpdateGameMenu(&arg->game_menu);
  }
  if (g_GameManager.is_in_retry_menu != 0) {
    StageMenu::OnUpdateRetryMenu(&arg->retry_menu);
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

