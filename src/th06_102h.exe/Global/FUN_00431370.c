
undefined4 FUN_00431370(void)

{
  bool bVar1;
  DWORD DVar2;
  BOOL BVar3;
  MSG msg;
  
  bVar1 = false;
  while (!bVar1) {
    DVar2 = MsgWaitForMultipleObjects(1,&g_SoundPlayer.streamingUpdateEvent,0,0xffffffff,0xbf);
    if (g_SoundPlayer.streamingSound == (CStreamingSound *)0x0) {
      bVar1 = true;
    }
    if (DVar2 == 0) {
      if (g_SoundPlayer.streamingSound != (CStreamingSound *)0x0) {
        CStreamingSound::HandleWaveStreamNotification(g_SoundPlayer.streamingSound,1);
      }
    }
    else if (DVar2 == 1) {
      while (BVar3 = PeekMessageA(&msg,(HWND)0x0,0,0,1), BVar3 != 0) {
        if (msg.message == WM_QUIT) {
          bVar1 = true;
        }
      }
    }
  }
  return 0;
}

