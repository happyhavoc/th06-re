
void __thiscall th06::CWaveFile::~CWaveFile(CWaveFile *this)

{
  Close(this);
  if ((this->m_bIsReadingFromMemory == 0) && (this->m_pwfx != (WAVEFORMATEX *)0x0)) {
    operator_delete(this->m_pwfx);
    this->m_pwfx = (WAVEFORMATEX *)0x0;
  }
  return;
}

