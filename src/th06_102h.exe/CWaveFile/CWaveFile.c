
undefined4 * __thiscall CWaveFile::CWaveFile(CWaveFile *this)

{
  this->m_pwfx = (WAVEFORMATEX *)0x0;
  this->m_hmmio = (HMMIO)0x0;
  this->m_dwSize = 0;
  this->m_bIsReadingFromMemory = 0;
  this->m_loopEndPoint = (void *)0x0;
  this->m_loopStartPoint = 0;
  return &this->m_pwfx;
}

