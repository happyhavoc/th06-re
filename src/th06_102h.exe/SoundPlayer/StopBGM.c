
void __thiscall th06::SoundPlayer::StopBGM(SoundPlayer *this)

{
  if (this->backgroundMusic != (CStreamingSound *)0x0) {
    CSound::Stop(&this->backgroundMusic->base);
    if (this->backgroundMusicThreadHandle != (HANDLE)0x0) {
      PostThreadMessageA(this->backgroundMusicThreadId,0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject(this->backgroundMusicThreadHandle,0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle(this->backgroundMusicThreadHandle);
      CloseHandle(this->backgroundMusicUpdateEvent);
      this->backgroundMusicThreadHandle = (HANDLE)0x0;
    }
    if (this->backgroundMusic != (CStreamingSound *)0x0) {
      if (this->backgroundMusic != (CStreamingSound *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**(this->backgroundMusic->base).vtbl)(1);
      }
      this->backgroundMusic = (CStreamingSound *)0x0;
    }
    DebugPrint2("stop BGM\n");
  }
  return;
}

