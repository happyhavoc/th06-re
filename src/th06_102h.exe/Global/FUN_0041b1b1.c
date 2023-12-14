
undefined4 FUN_0041b1b1(int param_1)

{
  AnmManager::ReleaseAnm(g_AnmManager,0x12);
  AnmManager::ReleaseAnm(g_AnmManager,0x13);
  AnmManager::ReleaseAnm(g_AnmManager,0x14);
  FUN_0041872a();
  if (g_Supervisor.curState != 3) {
    AnmManager::ReleaseAnm(g_AnmManager,0xd);
    AnmManager::ReleaseAnm(g_AnmManager,0xe);
    AnmManager::ReleaseAnm(g_AnmManager,0xf);
    AnmManager::ReleaseAnm(g_AnmManager,0x10);
    AnmManager::ReleaseAnm(g_AnmManager,0x11);
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}

