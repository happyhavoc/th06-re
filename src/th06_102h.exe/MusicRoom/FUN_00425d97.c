
undefined4 __cdecl MusicRoom::FUN_00425d97(int param_1)

{
  _free(*(void **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  AnmManager::ReleaseAnm(g_AnmManager,0x29);
  AnmManager::ReleaseAnm(g_AnmManager,0x2a);
  AnmManager::ReleaseAnm(g_AnmManager,0x2b);
  Chain::Cut(&g_Chain,*(ChainElem **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

