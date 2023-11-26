
undefined4 FUN_00410d80(void *param_1)

{
  ReleaseAnm(g_AnmManager,0x2c);
  ReleaseAnm(g_AnmManager,0x2d);
  ReleaseAnm(g_AnmManager,0x2e);
  g_Supervisor.curState = 7;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  _free(*(void **)((int)param_1 + 0x1114));
  Chain::Cut(&g_Chain,*(ChainElem **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  g_Supervisor.field78_0x19c = 0;
  Supervisor::RemovePbg3File(&g_Supervisor,5);
  return 0;
}

