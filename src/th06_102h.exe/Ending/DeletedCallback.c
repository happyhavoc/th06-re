
ZunResult th06::Ending::DeletedCallback(Ending *ending)

{
  AnmManager::ReleaseAnm(g_AnmManager,44);
  AnmManager::ReleaseAnm(g_AnmManager,45);
  AnmManager::ReleaseAnm(g_AnmManager,46);
  g_Supervisor.curState = 7;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  _free(ending->endFileData);
  Chain::Cut(&g_Chain,ending->chainElem);
  ending->chainElem = (ChainElem *)0x0;
  operator_delete(ending);
  g_Supervisor.isInEnding = 0;
  Supervisor::ReleasePbg3(&g_Supervisor,5);
  return ZUN_SUCCESS;
}

