
undefined4 * __thiscall
CSound::CSound(CSound *this,LPDIRECTSOUNDBUFFER *apDSBuffer,DWORD dwDSBufferSize,uint dwNumBuffers,
              CWaveFile *pWaveFile)

{
  LPDIRECTSOUNDBUFFER *ppIVar1;
  uint local_8;
  
  this->vtbl = &PTR_operator_delete_0046c680;
  ppIVar1 = (LPDIRECTSOUNDBUFFER *)operator_new(dwNumBuffers << 2);
  this->m_apDSBuffer = ppIVar1;
  for (local_8 = 0; local_8 < dwNumBuffers; local_8 = local_8 + 1) {
    this->m_apDSBuffer[local_8] = apDSBuffer[local_8];
  }
  this->m_dwDSBufferSize = dwDSBufferSize;
  this->m_dwNumBuffers = dwNumBuffers;
  this->m_pWaveFile = pWaveFile;
  FillBufferWithSound(this,*this->m_apDSBuffer,0);
  for (local_8 = 0; local_8 < dwNumBuffers; local_8 = local_8 + 1) {
    (*this->m_apDSBuffer[local_8]->lpVtbl->SetCurrentPosition)(this->m_apDSBuffer[local_8],0);
  }
  return &this->vtbl;
}

