
void __thiscall SoundPlayer::StopBGM(SoundPlayer *this)

{
  if (this->streamingSound != (CStreamingSound *)0x0) {
    CSound::Stop(&this->streamingSound->base);
    if (this->field1191_0x618 != 0) {
      PostThreadMessageA(*(DWORD *)&this->field_0x614,0x12,0,0);
      DebugPrint2("stop m_dwNotifyThreadID\n");
      WaitForSingleObject((HANDLE)this->field1191_0x618,0xffffffff);
      DebugPrint2("comp\n");
      CloseHandle((HANDLE)this->field1191_0x618);
      CloseHandle(this->hEvent);
      this->field1191_0x618 = 0;
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

