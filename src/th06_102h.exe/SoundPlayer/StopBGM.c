
void __thiscall SoundPlayer::StopBGM(SoundPlayer *this)

{
  if (this->streamingSound != (CStreamingSound *)0x0) {
    CSound::Stop(&this->streamingSound->base);
    if (this->m_hndNotifyThreadHandle != (HANDLE)0x0) {
      PostThreadMessageA(this->m_dwNotifyThreadId,0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject(this->m_hndNotifyThreadHandle,0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle(this->m_hndNotifyThreadHandle);
      CloseHandle(this->streamingUpdateEvent);
      this->m_hndNotifyThreadHandle = (HANDLE)0x0;
    }
    if (this->streamingSound != (CStreamingSound *)0x0) {
      if (this->streamingSound != (CStreamingSound *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**(this->streamingSound->base).vtbl)(1);
      }
      this->streamingSound = (CStreamingSound *)0x0;
    }
    DebugPrint2("stop BGM\n");
  }
  return;
}

