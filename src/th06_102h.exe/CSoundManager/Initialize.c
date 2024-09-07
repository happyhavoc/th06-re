
int __thiscall
th06::CSoundManager::Initialize
          (CSoundManager *this,HWND hWnd,DWORD dwCoopLevel,DWORD dwPrimaryChannels,int dwPrimaryFreq
          ,DWORD dwPrimaryBitRate)

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
    SetPrimaryBufferFormat(this,dwPrimaryChannels,dwPrimaryFreq,dwPrimaryBitRate);
    iVar1 = 0;
  }
  return iVar1;
}

