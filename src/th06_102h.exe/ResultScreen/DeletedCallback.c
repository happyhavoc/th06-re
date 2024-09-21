
undefined4 __thiscall th06::ResultScreen::DeletedCallback(ResultScreen *this,ResultScreen *param_1)

{
  int character;
  int difficulty;
  
  if (param_1->scoredat != (ScoreDat *)0x0) {
    WriteScore(param_1);
    ReleaseScoreDat(param_1->scoredat);
  }
  param_1->scoredat = (ScoreDat *)0x0;
  for (difficulty = 0; difficulty < 5; difficulty = difficulty + 1) {
    for (character = 0; character < 4; character = character + 1) {
      FreeScore(param_1,difficulty,character);
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
    operator_delete(param_1);
  }
  return 0;
}

