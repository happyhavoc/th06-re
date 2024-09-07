
undefined4 * __thiscall
th06::CStreamingSound::CStreamingSound
          (CStreamingSound *this,LPDIRECTSOUNDBUFFER pDSBuffer,DWORD pDSBufferSize,
          CWaveFile *pWaveFile,DWORD dwNotifySize)

{
  CSound::CSound(&this->base,&pDSBuffer,pDSBufferSize,1,pWaveFile);
  (this->base).vtbl = &PTR_operator_delete_0046c69c;
  this->m_dwLastPlayPos = 0;
  this->m_dwPlayProgress = 0;
  this->m_dwNotifySize = dwNotifySize;
  this->m_dwNextWriteOffset = 0;
  this->m_bFillNextNotificationWithSilence = 0;
  return (undefined4 *)this;
}

