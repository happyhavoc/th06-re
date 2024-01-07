
LPDIRECTSOUNDBUFFER __thiscall CSound::GetBuffer(CSound *this,DWORD dwIndex)

{
  LPDIRECTSOUNDBUFFER pIVar1;
  
  if (this->m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) {
    pIVar1 = (LPDIRECTSOUNDBUFFER)0x0;
  }
  else if (dwIndex < this->m_dwNumBuffers) {
    pIVar1 = this->m_apDSBuffer[dwIndex];
  }
  else {
    pIVar1 = (LPDIRECTSOUNDBUFFER)0x0;
  }
  return pIVar1;
}

