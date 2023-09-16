
undefined4 FUN_00410d80(void *param_1)

{
  FUN_00432030(g_AnmManager,0x2c);
  FUN_00432030(g_AnmManager,0x2d);
  FUN_00432030(g_AnmManager,0x2e);
  g_GameContext.unkInput2 = 7;
  AnmManager::FUN_00435270(g_AnmManager,0);
  _free(*(void **)((int)param_1 + 0x1114));
  Chain::Cut((Chain *)&DAT_0069d918,*(ChainElem **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  _free(param_1);
  g_GameContext._412_4_ = 0;
  GameContext::RemovePbg3File(&g_GameContext,5);
  return 0;
}

