
undefined4 FUN_00425d97(int param_1)

{
  _free(*(void **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  AnmManager::FUN_00435270(g_AnmManager,0);
  FUN_00432030(g_AnmManager,0x29);
  FUN_00432030(g_AnmManager,0x2a);
  FUN_00432030(g_AnmManager,0x2b);
  Chain::Cut(&g_Chain,*(ChainElem **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

