
ZunResult MainMenu::FUN_0043753c(MainMenu *param_1,int param_2)

{
  ZunResult ZVar1;
  
  if ((((g_CurFrameInput & 0x10) == 0) || ((g_CurFrameInput & 0x10) == (g_LastFrameInput & 0x10)))
     && (((g_CurFrameInput & 0x10) == 0 || (DAT_0069d90c == 0)))) {
    if ((((g_CurFrameInput & 0x20) == 0) || ((g_CurFrameInput & 0x20) == (g_LastFrameInput & 0x20)))
       && (((g_CurFrameInput & 0x20) == 0 || (DAT_0069d90c == 0)))) {
      ZVar1 = ZUN_SUCCESS;
    }
    else {
      param_1->cursor = param_1->cursor + 1;
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
      if ((int)param_1->cursor < 0) {
        param_1->cursor = param_2 - 1;
      }
      if (param_2 <= (int)param_1->cursor) {
        param_1->cursor = 0;
      }
      ZVar1 = 1;
    }
  }
  else {
    param_1->cursor = param_1->cursor - 1;
    SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
    if ((int)param_1->cursor < 0) {
      param_1->cursor = param_2 - 1;
    }
    if (param_2 <= (int)param_1->cursor) {
      param_1->cursor = 0;
    }
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

