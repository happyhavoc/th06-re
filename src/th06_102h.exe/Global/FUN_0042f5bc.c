
undefined4 FUN_0042f5bc(ScoreDat **param_1)

{
  ScoreDat **ppSVar1;
  int local_c;
  int local_8;
  
  if (*param_1 != (ScoreDat *)0x0) {
    ppSVar1 = param_1;
    WriteScore();
    FUN_0042b7dc(ppSVar1,*param_1);
  }
  *param_1 = (ScoreDat *)0x0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      FUN_0042bc5b(local_8,local_c);
    }
  }
  AnmManager::ReleaseAnm(g_AnmManager,0x25);
  AnmManager::ReleaseAnm(g_AnmManager,0x26);
  AnmManager::ReleaseAnm(g_AnmManager,0x27);
  AnmManager::ReleaseAnm(g_AnmManager,0x28);
  AnmManager::ReleaseSurface(g_AnmManager,0);
  Chain::Cut(&g_Chain,(ChainElem *)param_1[0x146b]);
  param_1[0x146b] = (ScoreDat *)0x0;
  if (param_1 != (ScoreDat **)0x0) {
    _free(*param_1);
    _free(param_1);
  }
  return 0;
}

