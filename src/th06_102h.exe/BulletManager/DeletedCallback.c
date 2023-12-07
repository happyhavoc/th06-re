
undefined4 BulletManager::DeletedCallback(void)

{
  if (g_Supervisor.curState != 3) {
    ReleaseAnm(g_AnmManager,6);
    ReleaseAnm(g_AnmManager,7);
  }
  return 0;
}

