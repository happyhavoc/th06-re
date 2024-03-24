
int MainMenu::MoveCursor(MainMenu *menu,int menu_length)

{
  int result;
  
  if ((((g_CurFrameInput & 0x10) == 0) || ((g_CurFrameInput & 0x10) == (g_LastFrameInput & 0x10)))
     && (((g_CurFrameInput & 0x10) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
    if ((((g_CurFrameInput & 0x20) == 0) || ((g_CurFrameInput & 0x20) == (g_LastFrameInput & 0x20)))
       && (((g_CurFrameInput & 0x20) == 0 || (g_IsEigthFrameOfHeldInput == 0)))) {
      result = 0;
    }
    else {
      menu->cursor = menu->cursor + 1;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
      if ((int)menu->cursor < 0) {
        menu->cursor = menu_length - 1;
      }
      if (menu_length <= (int)menu->cursor) {
        menu->cursor = 0;
      }
      result = 1;
    }
  }
  else {
    menu->cursor = menu->cursor - 1;
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc,0);
    if ((int)menu->cursor < 0) {
      menu->cursor = menu_length - 1;
    }
    if (menu_length <= (int)menu->cursor) {
      menu->cursor = 0;
    }
    result = -1;
  }
  return result;
}

