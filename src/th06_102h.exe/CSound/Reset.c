
uint __thiscall th06::CSound::Reset(CSound *this)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  if (this->m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) {
    local_8 = 0x800401f0;
  }
  else {
    local_8 = 0;
    for (local_c = 0; local_c < this->m_dwNumBuffers; local_c = local_c + 1) {
      uVar1 = (*this->m_apDSBuffer[local_c]->lpVtbl->SetCurrentPosition)
                        (this->m_apDSBuffer[local_c],0);
      local_8 = local_8 | uVar1;
    }
  }
  return local_8;
}

