
ZunResult MainMenu::AddedCallback(MainMenu *param_1)

{
  AnmManager *pAVar1;
  ScoreDat *scoredat;
  int idx;
  
  if (g_GameManager.demo_mode == 0) {
    Supervisor::SetupMidiPlayback(&g_Supervisor,"bgm/th06_01.mid");
  }
  pAVar1 = g_AnmManager;
  for (idx = 0; idx < 0x7a; idx = idx + 1) {
    pAVar1->scripts[idx + 0x100] = (AnmRawInstr *)0x0;
  }
  param_1->unk_81e4 = 0;
  if (g_Supervisor.wantedState2 < 2) {
LAB_0043a516:
    param_1->cursor = 0;
  }
  else {
    if (3 < g_Supervisor.wantedState2) {
      if (g_Supervisor.wantedState2 == 6) {
        param_1->cursor = 4;
        goto LAB_0043a520;
      }
      if (g_Supervisor.wantedState2 != 7) {
        if (g_Supervisor.wantedState2 == 9) {
          param_1->cursor = 5;
          goto LAB_0043a520;
        }
        goto LAB_0043a516;
      }
    }
    param_1->cursor = (uint)(g_GameManager.difficulty == EXTRA);
  }
LAB_0043a520:
  if (g_GameManager.is_in_practice_mode != 0) {
    param_1->cursor = 2;
  }
  g_GameManager.is_in_practice_mode = 0;
  if ((g_Supervisor.cfg.opts & 1) == USE_D3D_HW_TEXTURE_BLENDING) {
    param_1->color1 = 0x80004000;
    param_1->color2 = 0xff008000;
  }
  else {
    param_1->color1 = 0x80ffffff;
    param_1->color2 = 0xffffffff;
  }
  param_1->minimumOpacity = 0;
  param_1->menuTextColor = 1073741824;
  param_1->numFramesSinceActive = 0;
  param_1->isActive = 0;
  param_1->unk_10f28 = 0x10;
  param_1->currentReplay = (ReplayData *)0x0;
  scoredat = ResultScreen::OpenScore("score.dat");
  ResultScreen::ParseClrd(scoredat,g_GameManager.clrd);
  ResultScreen::ParsePscr(scoredat,g_GameManager.pscr);
  ResultScreen::ReleaseScoreDat(scoredat);
  if (g_GameManager.demo_mode == 0) {
    if (g_Supervisor.startup_time_for_menu_music == 0) {
      Supervisor::PlayAudio(&g_Supervisor,"bgm/th06_01.mid");
      ScreenEffect::RegisterChain(0,0x78,0xffffff,0,0);
    }
    else {
      ScreenEffect::RegisterChain(0,200,0xffffff,0,0);
    }
  }
  g_GameManager.demo_mode = 0;
  g_GameManager.demo_frames = 0;
  return ZUN_SUCCESS;
}

