
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 MainMenu::AddedCallback(MainMenu *param_1)

{
  AnmManager *pAVar1;
  ScoreDat *scoredat;
  Pscr *pPVar2;
  int local_c;
  
  if (g_GameManager.demo_mode == 0) {
    isMusicMutedWtf();
  }
  pAVar1 = g_AnmManager;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
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
  if (g_GameManager.unk_1823 != 0) {
    param_1->cursor = 2;
  }
  g_GameManager.unk_1823 = 0;
  if ((g_Supervisor.cfg.opts & 1) == USE_D3D_HW_TEXTURE_BLENDING) {
    param_1->color1 = 0x80004000;
    param_1->color2 = 0xff008000;
  }
  else {
    param_1->color1 = 0x80ffffff;
    param_1->color2 = 0xffffffff;
  }
  param_1->unk_81fc = 0;
  param_1->maybe_menu_text_color = 1073741824;
  param_1->unk_820c = 0;
  param_1->isActive = 0;
  param_1->unk_10f28 = 0x10;
  param_1->currentReplay = (ReplayData *)0x0;
  scoredat = OpenScore("score.dat");
  ParseClrd(scoredat,g_GameManager.clrd);
  pPVar2 = g_GameManager.pscr;
  ParsePscr(scoredat,g_GameManager.pscr);
  ScoreDat::FUN_0042b7dc(pPVar2,scoredat);
  if (g_GameManager.demo_mode == 0) {
    if (g_Supervisor.startup_time_for_menu_music == 0) {
      Supervisor::PlayAudio("bgm/th06_01.mid");
      ScreenEffect::RegisterChain(0,0x78,0xffffff,0,0);
    }
    else {
      ScreenEffect::RegisterChain(0,200,0xffffff,0,0);
    }
  }
  g_GameManager.demo_mode = 0;
  g_GameManager.unk_1828 = 0;
  return 0;
}

