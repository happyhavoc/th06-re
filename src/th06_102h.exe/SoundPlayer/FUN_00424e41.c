
void __thiscall SoundPlayer::FUN_00424e41(SoundPlayer *this,float param_1)

{
  CStreamingSound *pCVar1;
  void *pvVar2;
  
  if (this->streamingSound != (CStreamingSound *)0x0) {
    pCVar1 = this->streamingSound;
    pCVar1[1].m_pWaveFile = (void *)0x1;
    pvVar2 = (void *)__ftol2((double)(param_1 * 60.0));
    pCVar1[1].m_apDSBuffer = pvVar2;
    pCVar1[1].field2_0x8 = pCVar1[1].m_apDSBuffer;
  }
  return;
}

