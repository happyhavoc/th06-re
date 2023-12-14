
ZunResult AsciiManager::DeletedCallback(AsciiManager *arg)

{
  AnmManager::ReleaseAnm(g_AnmManager,1);
  AnmManager::ReleaseAnm(g_AnmManager,2);
  AnmManager::ReleaseAnm(g_AnmManager,3);
  return ZUN_SUCCESS;
}

