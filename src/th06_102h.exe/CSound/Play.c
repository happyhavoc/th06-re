
int __thiscall th06::CSound::Play(CSound *this,DWORD dwPriority,DWORD dwFlags)

{
  int iVar1;
  int local_c;
  LPDIRECTSOUNDBUFFER local_8;
  
  if (this->m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    local_8 = (LPDIRECTSOUNDBUFFER)GetFreeBuffer(this);
    if (local_8 == (LPDIRECTSOUNDBUFFER)0x0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      iVar1 = RestoreBuffer(this,local_8,&local_c);
      if (-1 < iVar1) {
        if (local_c != 0) {
          iVar1 = FillBufferWithSound(this,local_8,0);
          if (iVar1 < 0) {
            return iVar1;
          }
          Reset(this);
        }
        this->m_dwIsFadingOut = 0;
        this->m_dwCurFadeoutProgress = 0;
        this->m_dwTotalFadeout = 0;
        iVar1 = (*local_8->lpVtbl->Play)(local_8,0,dwPriority,dwFlags);
      }
    }
  }
  return iVar1;
}

