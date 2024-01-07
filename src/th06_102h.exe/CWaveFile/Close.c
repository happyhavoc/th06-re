
undefined4 __thiscall CWaveFile::Close(CWaveFile *this)

{
  if (this->m_dwFlags == 1) {
    mmioClose(this->m_hmmio,0);
    this->m_hmmio = (HMMIO)0x0;
  }
  return 0;
}

