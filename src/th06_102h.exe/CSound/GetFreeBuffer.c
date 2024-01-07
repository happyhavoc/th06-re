
LPDIRECTSOUNDBUFFER __thiscall CSound::GetFreeBuffer(CSound *this)

{
  LPDIRECTSOUNDBUFFER pIVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (this->m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) {
    pIVar1 = (LPDIRECTSOUNDBUFFER)0x0;
  }
  else {
    for (local_c = 0; local_c < this->m_dwNumBuffers; local_c = local_c + 1) {
      if (this->m_apDSBuffer[local_c] != (LPDIRECTSOUNDBUFFER)0x0) {
        local_10 = 0;
        (*this->m_apDSBuffer[local_c]->lpVtbl->GetStatus)(this->m_apDSBuffer[local_c],&local_10);
        if ((local_10 & 1) == 0) break;
      }
    }
    if (local_c == this->m_dwNumBuffers) {
      uVar2 = _rand();
      pIVar1 = this->m_apDSBuffer[uVar2 % this->m_dwNumBuffers];
    }
    else {
      pIVar1 = this->m_apDSBuffer[local_c];
    }
  }
  return pIVar1;
}

