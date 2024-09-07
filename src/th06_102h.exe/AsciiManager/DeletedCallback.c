
ZunResult th06::AsciiManager::DeletedCallback(AsciiManager *arg)

{
  AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,1);
  AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,2);
  AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,3);
  return ZUN_SUCCESS;
}

