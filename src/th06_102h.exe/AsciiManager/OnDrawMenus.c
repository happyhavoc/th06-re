
int AsciiManager::OnDrawMenus(AsciiManager *arg)

{
  DrawStrings(arg);
  arg->numStrings = 0;
  StageMenu::OnDrawGameMenu(&arg->game_menu);
  StageMenu::OnDrawRetryMenu(&arg->retry_menu);
  return 1;
}

