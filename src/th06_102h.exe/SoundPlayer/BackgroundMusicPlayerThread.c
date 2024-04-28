
DWORD SoundPlayer::BackgroundMusicPlayerThread(LPVOID lpThreadParameter)

{
  DWORD DVar2;
  BOOL BVar3;
  MSG msg;
  bool stopped;
  
  stopped = false;
  while (!stopped) {
    DVar2 = MsgWaitForMultipleObjects(1,&g_SoundPlayer.backgroundMusicUpdateEvent,0,0xffffffff,0xbf)
    ;
    if (g_SoundPlayer.backgroundMusic == (CStreamingSound *)0x0) {
      stopped = true;
    }
    if (DVar2 == 0) {
      if (g_SoundPlayer.backgroundMusic != (CStreamingSound *)0x0) {
        CStreamingSound::HandleWaveStreamNotification(g_SoundPlayer.backgroundMusic,1);
      }
    }
    else if (DVar2 == 1) {
      while (BVar3 = PeekMessageA(&msg,(HWND)0x0,0,0,1), BVar3 != 0) {
        if (msg.message == WM_QUIT) {
          stopped = true;
        }
      }
    }
  }
  return 0;
}

