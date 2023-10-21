
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 FUN_0043a464(struct *param_1)

{
  AnmManager *pAVar1;
  ScoreDat *scoredat;
  undefined *puVar2;
  int local_c;
  
  if (DAT_0069d4c4 == '\0') {
    isMusicMutedWtf();
  }
  pAVar1 = g_AnmManager;
  for (local_c = 0; local_c < 0x7a; local_c = local_c + 1) {
    pAVar1->scripts[local_c + 0x100] = (AnmRawInstr *)0x0;
  }
  param_1->unk_81e4 = 0;
  if (g_GameContext.unkInput4 < 2) {
LAB_0043a516:
    param_1->unk_81a0 = 0;
  }
  else {
    if (3 < g_GameContext.unkInput4) {
      if (g_GameContext.unkInput4 == 6) {
        param_1->unk_81a0 = 4;
        goto LAB_0043a520;
      }
      if (g_GameContext.unkInput4 != 7) {
        if (g_GameContext.unkInput4 == 9) {
          param_1->unk_81a0 = 5;
          goto LAB_0043a520;
        }
        goto LAB_0043a516;
      }
    }
    param_1->unk_81a0 = (uint)(DAT_0069bcb0 == 4);
  }
LAB_0043a520:
  if (DAT_0069d4c3 != '\0') {
    param_1->unk_81a0 = 2;
  }
  DAT_0069d4c3 = 0;
  if ((g_GameContext.cfg.opts & 1) == USE_D3D_HW_TEXTURE_BLENDING) {
    param_1->unk_8208 = 0x80004000;
    param_1->unk_8204 = 0xff008000;
  }
  else {
    param_1->unk_8208 = 0x80ffffff;
    param_1->unk_8204 = 0xffffffff;
  }
  param_1->unk_81fc = 0;
  param_1->unk_8200 = 0x40000000;
  param_1->unk_820c = 0;
  param_1->unk_8210 = 0;
  param_1->unk_10f28 = 0x10;
  param_1->unk_10edc = 0;
  scoredat = (ScoreDat *)OpenScore("score.dat");
  ParseClrd(scoredat,SCORE_CRLD);
  puVar2 = &DAT_0069cd30;
  ParsePscr((int)scoredat,(Pscr *)&DAT_0069cd30);
  FUN_0042b7dc(puVar2,scoredat);
  if (DAT_0069d4c4 == '\0') {
    if (g_GameContext._1024_4_ == 0) {
      FUN_00424b5d("bgm/th06_01.mid");
      FUN_0042fd30(0,0x78,0xffffff,0,0);
    }
    else {
      FUN_0042fd30(0,200,0xffffff,0,0);
    }
  }
  DAT_0069d4c4 = 0;
  DAT_0069d4c8 = 0;
  return 0;
}

