
int Stage::DeletedCallback(Stage *arg)

{
  AnmManager::ReleaseAnm(g_AnmManager,4);
  if (arg->quadVms != (AnmVm *)0x0) {
    _free(arg->quadVms);
    arg->quadVms = (AnmVm *)0x0;
  }
  if (arg->stdData != (byte *)0x0) {
    _free(arg->stdData);
    arg->stdData = (byte *)0x0;
  }
  return 0;
}

