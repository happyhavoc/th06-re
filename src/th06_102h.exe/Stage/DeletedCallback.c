
int Stage::DeletedCallback(Stage *arg)

{
  ReleaseAnm(g_AnmManager,4);
  if (arg->quadVms != (AnmVm *)0x0) {
    _free(arg->quadVms);
    arg->quadVms = (AnmVm *)0x0;
  }
  if (arg->field1_0x4 != 0) {
    _free((void *)arg->field1_0x4);
    arg->field1_0x4 = 0;
  }
  return 0;
}

