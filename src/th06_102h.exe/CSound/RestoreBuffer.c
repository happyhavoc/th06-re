
int __thiscall CSound::RestoreBuffer(CSound *this,LPDIRECTSOUNDBUFFER pDSB,BOOL *pbWasRestored)

{
  int iVar1;
  HRESULT HVar2;
  uint dwStatus;
  
  if (pDSB == (LPDIRECTSOUNDBUFFER)0x0) {
    iVar1 = -0x7ffbfe10;
  }
  else {
    if (pbWasRestored != (BOOL *)0x0) {
      *pbWasRestored = 0;
    }
    iVar1 = (*pDSB->lpVtbl->GetStatus)(pDSB,&dwStatus);
    if (-1 < iVar1) {
      if ((dwStatus & DSBSTATUS_BUFFERLOST) == 0) {
        iVar1 = 1;
      }
      else {
        do {
          HVar2 = (*pDSB->lpVtbl->Restore)(pDSB);
          if (HVar2 == -0x7787ff6a) {
            Sleep(10);
          }
          HVar2 = (*pDSB->lpVtbl->Restore)(pDSB);
        } while (HVar2 != 0);
        if (pbWasRestored != (BOOL *)0x0) {
          *pbWasRestored = 1;
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

