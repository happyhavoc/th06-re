
undefined4 EnemyManager::DeletedCallback(void)

{
  AnmManager::ReleaseAnm(g_AnmManager,9);
  AnmManager::ReleaseAnm(g_AnmManager,8);
  return 0;
}

