
HRESULT __thiscall CStreamingSound::Reset(CStreamingSound *this)

{
  HRESULT HVar1;
  int local_8;
  
  if ((*(this->base).m_apDSBuffer == (LPDIRECTSOUNDBUFFER)0x0) ||
     ((this->base).m_pWaveFile == (CWaveFile *)0x0)) {
    HVar1 = -0x7ffbfe10;
  }
  else {
    this->m_dwLastPlayPos = 0;
    this->m_dwPlayProgress = 0;
    this->m_dwNextWriteOffset = 0;
    this->m_bFillNextNotificationWithSilence = 0;
    HVar1 = CSound::RestoreBuffer(&this->base,*(this->base).m_apDSBuffer,&local_8);
    if ((-1 < HVar1) &&
       ((local_8 == 0 ||
        (HVar1 = CSound::FillBufferWithSound(&this->base,*(this->base).m_apDSBuffer,0), -1 < HVar1))
       )) {
      CWaveFile::ResetFile((this->base).m_pWaveFile,false);
      HVar1 = (*(*(this->base).m_apDSBuffer)->lpVtbl->SetCurrentPosition)
                        (*(this->base).m_apDSBuffer,0);
    }
  }
  return HVar1;
}

