
undefined4 Player::DeletedCallback(void)

{
  if (g_GameContext.unkInput2 != 3) {
    ReleaseAnm(g_AnmManager,5);
  }
  return 0;
}

