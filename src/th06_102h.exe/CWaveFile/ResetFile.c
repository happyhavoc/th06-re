
undefined4 __thiscall th06::CWaveFile::ResetFile(CWaveFile *this,bool loop)

{
  LONG LVar1;
  MMRESULT MVar2;
  int local_58;
  _MMIOINFO mmioinfoIn;
  MMRESULT local_8;
  
  if (this->m_bIsReadingFromMemory == 0) {
    if (this->m_hmmio == (HMMIO)0x0) {
      utils::DebugPrint2("error : m_hmmio\t== NULL in CWaveFile::ResetFile\n");
      return 0x800401f0;
    }
    if (this->m_dwFlags == 1) {
      LVar1 = mmioSeek(this->m_hmmio,(this->m_ckRiff).dwDataOffset + 4,0);
      if (LVar1 == -1) {
        utils::DebugPrint2("error : mmioSeek in CWaveFile::ResetFile\n");
        return 0x80004005;
      }
      (this->m_ck).ckid = 0x61746164;
      local_8 = mmioDescend(this->m_hmmio,&this->m_ck,&this->m_ckRiff,0x10);
      if (local_8 != 0) {
        utils::DebugPrint2("error : mmioDescend in CWaveFile::ResetFile\n");
        return 0x80004005;
      }
      if (0 < (int)this->m_loopEndPoint) {
        (this->m_ck).cksize = this->m_loopEndPoint;
      }
      if ((loop) && (0 < (int)this->m_loopStartPoint)) {
        MVar2 = mmioGetInfo(this->m_hmmio,&mmioinfoIn,0);
        if (MVar2 != 0) {
          utils::DebugPrint2("error : mmioGetInfo in CWaveFile::ResetFile\n");
          return 0x80004005;
        }
        for (local_58 = 0; local_58 < (int)this->m_loopStartPoint; local_58 = local_58 + 1) {
          if (mmioinfoIn.pchNext == mmioinfoIn.pchEndRead) {
            MVar2 = mmioAdvance(this->m_hmmio,&mmioinfoIn,0);
            if (MVar2 != 0) {
              utils::DebugPrint2("error : mmioAdvance in CWaveFile::ResetFile\n");
              return 0x80004005;
            }
            if (mmioinfoIn.pchNext == mmioinfoIn.pchEndRead) {
              utils::DebugPrint2(
                                "error : mmioinfoIn.pchNext == mmioinfoIn.pchEndRead in CWaveFile::ResetFile\n"
                                );
              return 0x80004005;
            }
          }
          mmioinfoIn.pchNext = mmioinfoIn.pchNext + 1;
        }
        (this->m_ck).cksize = (this->m_ck).cksize - this->m_loopStartPoint;
        MVar2 = mmioSetInfo(this->m_hmmio,&mmioinfoIn,0);
        if (MVar2 != 0) {
          utils::DebugPrint2("error : mmioSetInfo in CWaveFile::ResetFile\n");
          return 0x80004005;
        }
      }
    }
  }
  else {
    this->m_pbDataCur = this->m_pbData;
  }
  return 0;
}

