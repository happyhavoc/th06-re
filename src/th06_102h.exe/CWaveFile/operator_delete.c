
void __thiscall CWaveFile::operator_delete(CWaveFile *this)

{
  Close(this);
  if ((this->m_bIsReadingFromMemory == 0) && (this->m_pwfx != (WAVEFORMATEX *)0x0)) {
    _free(this->m_pwfx);
    this->m_pwfx = (WAVEFORMATEX *)0x0;
  }
  return;
}

