
undefined4 FUN_0041b1b1(int param_1)

{
  ReleaseAnm(g_AnmManager,0x12);
  ReleaseAnm(g_AnmManager,0x13);
  ReleaseAnm(g_AnmManager,0x14);
  FUN_0041872a();
  if (g_GameContext.unkInput2 != 3) {
    ReleaseAnm(g_AnmManager,0xd);
    ReleaseAnm(g_AnmManager,0xe);
    ReleaseAnm(g_AnmManager,0xf);
    ReleaseAnm(g_AnmManager,0x10);
    ReleaseAnm(g_AnmManager,0x11);
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}

