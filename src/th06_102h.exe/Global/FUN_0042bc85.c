
undefined4 __fastcall FUN_0042bc85(int param_1)

{
  Hscr *out;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(uint *)(param_1 + 0x24) = (uint)g_GameManager.character;
    *(uint *)(param_1 + 0x2c) = g_GameManager.difficulty;
    local_c = param_1 + 0x40;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      *(short *)(local_c + 0x8a) = (short)*(undefined4 *)(param_1 + 0x2c) + 3;
      local_c = local_c + 0x110;
    }
    FUN_00434e20(g_AnmManager,param_1 + 0x28a0,0xffffff,0,
                 (&PTR_DAT_004784d8)[*(int *)(param_1 + 0x24) * 2]);
    if (g_GameManager.shottype != 0) {
      *(undefined4 *)(param_1 + 0x291c) = 0x80ffffff;
    }
    FUN_00434e20(g_AnmManager,param_1 + 0x29b0,0xffffff,0,
                 (&PTR_DAT_004784dc)[*(int *)(param_1 + 0x24) * 2]);
    if (g_GameManager.shottype != 1) {
      *(undefined4 *)(param_1 + 0x2a2c) = 0x80ffffff;
    }
    *(byte *)(param_1 + 0x5190) =
         g_GameManager.shottype + (char)*(undefined4 *)(param_1 + 0x24) * '\x02';
    *(undefined *)(param_1 + 0x5191) = *(undefined *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x518c) = g_GameManager.score;
    *(undefined *)(param_1 + 0x5188) = 0x10;
    *(undefined4 *)(param_1 + 0x5180) = 0x52435348;
    if (g_GameManager.unk_1822 == 0) {
      *(undefined *)(param_1 + 0x5192) = (undefined)g_GameManager.current_stage;
    }
    else {
      *(undefined *)(param_1 + 0x5192) = 99;
    }
    *(undefined *)(param_1 + 0x5189) = 1;
    _strcpy((char *)(param_1 + 0x5193),"        ");
    out = (Hscr *)(param_1 + 0x5180);
    ResultScreen::FUN_0042bc2d
              ((ResultScreen *)param_1,out,*(int *)(param_1 + 0x2c),
               (uint)g_GameManager.shottype + *(int *)(param_1 + 0x24) * 2);
    if (9 < (int)out) goto LAB_0042c273;
    *(undefined4 *)(param_1 + 0x10) = 0;
    _strcpy((char *)(param_1 + 0x34),"");
  }
  if (*(int *)(param_1 + 4) < 0x1e) {
    return 0;
  }
  if ((((g_CurFrameInput & 0x10) != 0) && ((g_CurFrameInput & 0x10) != (g_LastFrameInput & 0x10)))
     || (((g_CurFrameInput & 0x10) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x10;
      if (*(int *)(param_1 + 0x20) < 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x60;
      }
    } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x20) != 0) && ((g_CurFrameInput & 0x20) != (g_LastFrameInput & 0x20)))
     || (((g_CurFrameInput & 0x20) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
      if (0x5f < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x60;
      }
    } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
     || (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      if (*(int *)(param_1 + 0x20) % 0x10 == 0xf) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
      }
      if (*(int *)(param_1 + 0x20) < 0) {
        *(undefined4 *)(param_1 + 0x20) = 0xf;
      }
    } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
     || (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (*(int *)(param_1 + 0x20) % 0x10 == 0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x10;
      }
    } while (PTR_DAT_004784d4[*(int *)(param_1 + 0x20)] == ' ');
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
  }
  if ((((g_CurFrameInput & 0x1001) == 0) ||
      ((g_CurFrameInput & 0x1001) == (g_LastFrameInput & 0x1001))) &&
     (((g_CurFrameInput & 0x1001) == 0 || (DAT_0069d90c == 0)))) {
LAB_0042c1aa:
    if ((((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) ||
       (((g_CurFrameInput & 10) != 0 && (DAT_0069d90c != 0)))) {
      if (*(int *)(param_1 + 0x10) < 8) {
        local_20 = *(int *)(param_1 + 0x10);
      }
      else {
        local_20 = 7;
      }
      if (0 < *(int *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        *(undefined *)(param_1 + local_20 + 0x5193) = 0x20;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
    }
    if ((g_CurFrameInput & 8) == 0) {
      return 0;
    }
    if ((g_CurFrameInput & 8) == (g_LastFrameInput & 8)) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) < 8) {
      local_1c = *(int *)(param_1 + 0x10);
    }
    else {
      local_1c = 7;
    }
    if (*(int *)(param_1 + 0x20) < 0x5e) {
      *(undefined *)(param_1 + local_1c + 0x5193) = PTR_DAT_004784d4[*(int *)(param_1 + 0x20)];
LAB_0042c173:
      if ((*(int *)(param_1 + 0x10) < 8) &&
         (*(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1, *(int *)(param_1 + 0x10) == 8)) {
        *(undefined4 *)(param_1 + 0x20) = 0x5f;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
      goto LAB_0042c1aa;
    }
    if (*(int *)(param_1 + 0x20) == 0x5e) {
      *(undefined *)(param_1 + local_1c + 0x5193) = 0x20;
      goto LAB_0042c173;
    }
  }
  SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
LAB_0042c273:
  *(undefined4 *)(param_1 + 8) = 0xf;
  *(undefined4 *)(param_1 + 4) = 0;
  local_c = param_1 + 0x40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    *(undefined2 *)(local_c + 0x8a) = 2;
    local_c = local_c + 0x110;
  }
  _strcpy((char *)(param_1 + 0x34),(char *)(param_1 + 0x5193));
  return 0;
}

