
ZunResult th06::ResultScreen::DeletedCallback(ResultScreen *resultScreen)

{
  int character;
  int difficulty;
  
  if (resultScreen->scoredat != (ScoreDat *)0x0) {
    WriteScore(resultScreen);
    ReleaseScoreDat(resultScreen->scoredat);
  }
  resultScreen->scoredat = (ScoreDat *)0x0;
  for (difficulty = 0; difficulty < 5; difficulty = difficulty + 1) {
    for (character = 0; character < 4; character = character + 1) {
      FreeScore(resultScreen,difficulty,character);
    }
  }
  AnmManager::ReleaseAnm(g_AnmManager,0x25);
  AnmManager::ReleaseAnm(g_AnmManager,0x26);
  AnmManager::ReleaseAnm(g_AnmManager,0x27);
  AnmManager::ReleaseAnm(g_AnmManager,0x28);
  AnmManager::ReleaseSurface(g_AnmManager,0);
  Chain::Cut(&g_Chain,resultScreen->draw_chain);
  resultScreen->draw_chain = (ChainElem *)0x0;
  if (resultScreen != (ResultScreen *)0x0) {
    _free(resultScreen->scoredat);
    operator_delete(resultScreen);
  }
  return ZUN_SUCCESS;
}

