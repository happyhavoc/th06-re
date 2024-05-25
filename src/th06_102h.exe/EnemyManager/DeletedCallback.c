
ZunResult EnemyManager::DeletedCallback(EnemyManager *mgr)

{
  AnmManager::ReleaseAnm(g_AnmManager,9);
  AnmManager::ReleaseAnm(g_AnmManager,8);
  return ZUN_SUCCESS;
}

