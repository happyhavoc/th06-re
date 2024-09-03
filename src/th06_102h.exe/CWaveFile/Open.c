
int __thiscall CWaveFile::Open(CWaveFile *this,LPSTR path,undefined4 unused,DWORD flags)

{
  HMMIO mmio;
  int iVar1;
  _MMIOINFO *mmioInfo_memclear;
  _MMIOINFO mmioInfo;
  int result;
  
  this->m_dwFlags = flags;
  this->m_bIsReadingFromMemory = 0;
  if (this->m_dwFlags == 1) {
    if (path == (LPSTR)0x0) {
      result = -0x7ff8ffa9;
    }
    else {
      if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
        operator_delete(this->m_pwfx);
        this->m_pwfx = (WAVEFORMATEX *)0x0;
      }
      mmioInfo_memclear = &mmioInfo;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        mmioInfo_memclear->dwFlags = 0;
        mmioInfo_memclear = (_MMIOINFO *)&mmioInfo_memclear->fccIOProc;
      }
      mmio = mmioOpenA(path,&mmioInfo,MMIO_ALLOCBUF);
      this->m_hmmio = mmio;
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
        result = E_FAIL;
      }
      else {
        result = ReadMMIO(this);
        if (result < 0) {
          mmioClose(this->m_hmmio,0);
          DebugPrint2("error : ReadOpen in CWaveFile::Open()\n");
          result = -0x7fffbffb;
        }
        else {
          result = ResetFile(this,false);
          if (result < 0) {
            DebugPrint2("error : ResetFile in CWaveFile::Open()\n");
            result = -0x7fffbffb;
          }
          else {
            this->m_dwSize = (this->m_ck).cksize;
          }
        }
      }
    }
  }
  return result;
}

