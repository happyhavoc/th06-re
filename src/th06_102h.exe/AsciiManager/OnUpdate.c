
ChainCallbackResult AsciiManager::OnUpdate(AsciiManager *arg)

{
  AsciiManagerPopup *curPopup;
  int local_8;
  
  if ((g_GameManager.is_in_game_menu == 0) && (g_GameManager.is_in_retry_menu == 0)) {
    curPopup = arg->popups0;
    for (local_8 = 0; local_8 < 0x203; local_8 = local_8 + 1) {
      if (curPopup->inUse != '\0') {
        (curPopup->position).y =
             (curPopup->position).y - g_Supervisor.effectiveFramerateMultiplier * 0.5;
        (curPopup->timer).previous = (curPopup->timer).current;
        Supervisor::TickTimer(&g_Supervisor,&(curPopup->timer).current,&(curPopup->timer).subFrame);
        if (0x3c < (curPopup->timer).current) {
          curPopup->inUse = '\0';
        }
      }
      curPopup = curPopup + 1;
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

