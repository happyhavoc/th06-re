
undefined4 Player::DeletedCallback(void)

{
  if (g_Supervisor.curState != 3) {
    ReleaseAnm(g_AnmManager,5);
  }
  return 0;
}

