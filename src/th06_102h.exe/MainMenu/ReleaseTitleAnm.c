
void th06::MainMenu::ReleaseTitleAnm(void)

{
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1c; local_8 = local_8 + 1) {
    AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,local_8);
  }
  return;
}

