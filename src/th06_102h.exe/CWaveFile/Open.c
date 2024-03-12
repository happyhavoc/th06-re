
int __thiscall CWaveFile::Open(CWaveFile *this,LPSTR param_1,undefined4 param_2,DWORD flags)

{
  HMMIO pHVar1;
  int iVar2;
  _MMIOINFO *p_Var3;
  _MMIOINFO mmioInfo;
  int local_8;
  
  this->m_dwFlags = flags;
  this->m_bIsReadingFromMemory = 0;
  if (this->m_dwFlags == 1) {
    if (param_1 == (LPSTR)0x0) {
      local_8 = -0x7ff8ffa9;
    }
    else {
      if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
        _free(this->m_pwfx);
        this->m_pwfx = (WAVEFORMATEX *)0x0;
      }
      p_Var3 = &mmioInfo;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        p_Var3->dwFlags = 0;
        p_Var3 = (_MMIOINFO *)&p_Var3->fccIOProc;
      }
      pHVar1 = mmioOpenA(param_1,&mmioInfo,0x10000);
      this->m_hmmio = pHVar1;
      if (this->m_hmmio == (HMMIO)0x0) {
        switch(mmioInfo.wErrorRet) {
        case 0x10b:
          DebugPrint2("The directory specification is incorrect. \n");
          break;
        case 0x10c:
          DebugPrint2("The file is protected and cannot be opened. \n");
          break;
        case 0x10d:
          DebugPrint2("The file is being used by another application and is unavailable. \n");
          break;
        case 0x10f:
          DebugPrint2("too Meny Open Files \n");
          break;
        case 0x110:
          DebugPrint2(
                     "Another failure condition occurred. This is the default error for an open-file failure. \n"
                     );
        }
        DebugPrint2("error : mmioOpen in CWaveFile::Open()\n");
        local_8 = E_FAIL;
      }
      else {
        local_8 = ReadMMIO(this);
        if (local_8 < 0) {
          mmioClose(this->m_hmmio,0);
          DebugPrint2("error : ReadOpen in CWaveFile::Open()\n");
          local_8 = -0x7fffbffb;
        }
        else {
          local_8 = ResetFile(this,false);
          if (local_8 < 0) {
            DebugPrint2("error : ResetFile in CWaveFile::Open()\n");
            local_8 = -0x7fffbffb;
          }
          else {
            this->m_dwSize = (this->m_ck).cksize;
          }
        }
      }
    }
  }
  return local_8;
}

