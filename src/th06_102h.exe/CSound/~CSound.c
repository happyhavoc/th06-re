
void __thiscall CSound::~CSound(CSound *this)

{
  CWaveFile *this_00;
  uint local_8;
  
  this->vtbl = &PTR_operator_delete_0046c680;
  for (local_8 = 0; local_8 < this->m_dwNumBuffers; local_8 = local_8 + 1) {
    if (this->m_apDSBuffer[local_8] != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->m_apDSBuffer[local_8]->lpVtbl->Release)(this->m_apDSBuffer[local_8]);
      this->m_apDSBuffer[local_8] = (LPDIRECTSOUNDBUFFER)0x0;
    }
  }
  if (this->m_apDSBuffer != (LPDIRECTSOUNDBUFFER *)0x0) {
    _free(this->m_apDSBuffer);
    this->m_apDSBuffer = (LPDIRECTSOUNDBUFFER *)0x0;
  }
  if (this->m_pWaveFile != (CWaveFile *)0x0) {
    this_00 = this->m_pWaveFile;
    if (this_00 != (CWaveFile *)0x0) {
      CWaveFile::~CWaveFile(this_00);
      _free(this_00);
    }
    this->m_pWaveFile = (CWaveFile *)0x0;
  }
  return;
}

