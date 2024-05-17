
ZunResult Player::DeletedCallback(Player *p)

{
  if (g_Supervisor.curState != 3) {
    AnmManager::ReleaseAnm(g_AnmManager,5);
  }
  return ZUN_SUCCESS;
}

