
int __thiscall
CSoundManager::Initialize
          (CSoundManager *this,HWND hWnd,DWORD dwCoopLevel,undefined4 dwPrimaryChannels,
          int dwPrimaryFreq,undefined4 dwPrimaryBitRate)

{
  int iVar1;
  
  if (this->m_pDS != (LPDIRECTSOUND8)0x0) {
    (*this->m_pDS->lpVtbl->Release)(this->m_pDS);
    this->m_pDS = (LPDIRECTSOUND8)0x0;
  }
  iVar1 = DirectSoundCreate8((LPCGUID)0x0,&this->m_pDS,(LPUNKNOWN)0x0);
  if ((-1 < iVar1) &&
     (iVar1 = (*this->m_pDS->lpVtbl->SetCooperativeLevel)(this->m_pDS,(HWND)hWnd,dwCoopLevel),
     -1 < iVar1)) {
    SetPrimaryBufferFormat(this,(short)dwPrimaryChannels,dwPrimaryFreq,(ushort)dwPrimaryBitRate);
    iVar1 = 0;
  }
  return iVar1;
}

