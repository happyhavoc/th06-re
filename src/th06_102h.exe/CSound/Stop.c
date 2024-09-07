
uint __thiscall th06::CSound::Stop(CSound *this)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  if (this->m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) {
    local_8 = 0x800401f0;
  }
  else {
    local_8 = 0;
    DebugPrint2("CSound::Stop ");
    for (local_c = 0; local_c < this->m_dwNumBuffers; local_c = local_c + 1) {
      DebugPrint2("%d ",local_c);
      uVar1 = (*this->m_apDSBuffer[local_c]->lpVtbl->Stop)(this->m_apDSBuffer[local_c]);
      local_8 = local_8 | uVar1;
    }
    DebugPrint2("\n");
    this->m_dwIsFadingOut = 0;
  }
  return local_8;
}

