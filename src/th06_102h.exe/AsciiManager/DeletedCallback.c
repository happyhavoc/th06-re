
int AsciiManager::DeletedCallback(AsciiManager *arg)

{
  ReleaseAnm(g_AnmManager,1);
  ReleaseAnm(g_AnmManager,2);
  ReleaseAnm(g_AnmManager,3);
  return 0;
}

