
undefined4 __thiscall
th06::CWaveFile::Read(CWaveFile *this,undefined4 *param_1,uint dwSizeToRead,uint *pdwSizeRead)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_58;
  _MMIOINFO local_54;
  DWORD local_8;
  
  if (this->m_bIsReadingFromMemory == 0) {
    if (this->m_hmmio == (HMMIO)0x0) {
      uVar1 = 0x800401f0;
    }
    else if ((param_1 == (undefined4 *)0x0) || (pdwSizeRead == (uint *)0x0)) {
      uVar1 = 0x80070057;
    }
    else {
      if (pdwSizeRead != (uint *)0x0) {
        *pdwSizeRead = 0;
      }
      MVar2 = mmioGetInfo(this->m_hmmio,&local_54,0);
      if (MVar2 == 0) {
        local_8 = dwSizeToRead;
        if ((this->m_ck).cksize < dwSizeToRead) {
          local_8 = (this->m_ck).cksize;
        }
        (this->m_ck).cksize = (this->m_ck).cksize - local_8;
        for (local_58 = 0; local_58 < local_8; local_58 = local_58 + 1) {
          if (local_54.pchNext == local_54.pchEndRead) {
            MVar2 = mmioAdvance(this->m_hmmio,&local_54,0);
            if (MVar2 != 0) {
              utils::DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x433);
              return 0x80004005;
            }
            if (local_54.pchNext == local_54.pchEndRead) {
              utils::DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x437);
              return 0x80004005;
            }
          }
          *(char *)((int)param_1 + local_58) = *local_54.pchNext;
          local_54.pchNext = local_54.pchNext + 1;
        }
        MVar2 = mmioSetInfo(this->m_hmmio,&local_54,0);
        if (MVar2 == 0) {
          if (pdwSizeRead != (uint *)0x0) {
            *pdwSizeRead = local_8;
          }
          uVar1 = 0;
        }
        else {
          utils::DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x440);
          uVar1 = 0x80004005;
        }
      }
      else {
        utils::DebugPrint2("error :\t%s(%s)\n","zwave.cpp",0x424);
        uVar1 = 0x80004005;
      }
    }
  }
  else if (this->m_pbDataCur == (BYTE *)0x0) {
    uVar1 = CO_E_NOTINITIALIZED;
  }
  else {
    if (pdwSizeRead != (uint *)0x0) {
      *pdwSizeRead = 0;
    }
    if (this->m_pbData + this->m_ulDataSize < this->m_pbDataCur + dwSizeToRead) {
      dwSizeToRead = this->m_ulDataSize - ((int)this->m_pbDataCur - (int)this->m_pbData);
    }
    puVar4 = (undefined4 *)this->m_pbDataCur;
    for (uVar3 = dwSizeToRead >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar3 = dwSizeToRead & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)param_1 = *(undefined *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (pdwSizeRead != (uint *)0x0) {
      *pdwSizeRead = dwSizeToRead;
    }
    uVar1 = 0;
  }
  return uVar1;
}

