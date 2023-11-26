
undefined4 FUN_00417270(void)

{
  if (g_Supervisor.curState != 3) {
    ReleaseAnm(g_AnmManager,6);
    ReleaseAnm(g_AnmManager,7);
  }
  return 0;
}

