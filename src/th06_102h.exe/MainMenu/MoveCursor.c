
ZunResult MainMenu::MoveCursor(MainMenu *menu,int menu_length)

{
  ZunResult ZVar1;
  
  if ((((g_CurFrameInput & 0x10) == 0) || ((g_CurFrameInput & 0x10) == (g_LastFrameInput & 0x10)))
     && (((g_CurFrameInput & 0x10) == 0 || (DAT_0069d90c == 0)))) {
    if ((((g_CurFrameInput & 0x20) == 0) || ((g_CurFrameInput & 0x20) == (g_LastFrameInput & 0x20)))
       && (((g_CurFrameInput & 0x20) == 0 || (DAT_0069d90c == 0)))) {
      ZVar1 = ZUN_SUCCESS;
    }
    else {
      menu->cursor = menu->cursor + 1;
      SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
      if ((int)menu->cursor < 0) {
        menu->cursor = menu_length - 1;
      }
      if (menu_length <= (int)menu->cursor) {
        menu->cursor = 0;
      }
      ZVar1 = 1;
    }
  }
  else {
    menu->cursor = menu->cursor - 1;
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,0xc);
    if ((int)menu->cursor < 0) {
      menu->cursor = menu_length - 1;
    }
    if (menu_length <= (int)menu->cursor) {
      menu->cursor = 0;
    }
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

