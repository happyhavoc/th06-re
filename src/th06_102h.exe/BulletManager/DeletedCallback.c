
ZunResult th06::BulletManager::DeletedCallback(BulletManager *arg)

{
  if (g_Supervisor.curState != 3) {
    AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,6);
    AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,7);
  }
  return ZUN_SUCCESS;
}

