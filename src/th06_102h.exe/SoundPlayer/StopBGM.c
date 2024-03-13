
void __thiscall SoundPlayer::StopBGM(SoundPlayer *this)

{
  if (this->streamingSound != (CStreamingSound *)0x0) {
    CSound::Stop(&this->streamingSound->base);
    if (this->field1188_0x618 != (HANDLE)0x0) {
      PostThreadMessageA(this->field1187_0x614,0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject(this->field1188_0x618,0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle(this->field1188_0x618);
      CloseHandle(this->hEvent);
      this->field1188_0x618 = (HANDLE)0x0;
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

