
undefined4 FUN_00410d80(void *param_1)

{
  ReleaseAnm(g_AnmManager,0x2c);
  ReleaseAnm(g_AnmManager,0x2d);
  ReleaseAnm(g_AnmManager,0x2e);
  g_GameContext.unkInput2 = 7;
  AnmManager::ReleaseSurface(g_AnmManager,0);
  _free(*(void **)((int)param_1 + 0x1114));
  Chain::Cut(&g_Chain,*(ChainElem **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  g_GameContext._412_4_ = 0;
  GameContext::RemovePbg3File(&g_GameContext,5);
  return 0;
}

