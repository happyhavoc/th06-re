
undefined4 __thiscall ResultScreen::DeletedCallback(ResultScreen *this,ResultScreen *param_1)

{
  ResultScreen *pRVar1;
  int local_c;
  int local_8;
  
  if (param_1->scoredat != (ScoreDat *)0x0) {
    pRVar1 = param_1;
    WriteScore();
    ScoreDat::FUN_0042b7dc(pRVar1,param_1->scoredat);
  }
  param_1->scoredat = (ScoreDat *)0x0;
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
  Chain::Cut(&g_Chain,param_1->draw_chain);
  param_1->draw_chain = (ChainElem *)0x0;
  if (param_1 != (ResultScreen *)0x0) {
    _free(param_1->scoredat);
    _free(param_1);
  }
  return 0;
}

