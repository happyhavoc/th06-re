
undefined4 __thiscall CWaveFile::ReadMMIO(CWaveFile *this)

{
  MMRESULT MVar1;
  undefined4 uVar2;
  LONG LVar3;
  WAVEFORMATEX *pWVar4;
  uint uVar5;
  uint local_2c;
  _MMCKINFO local_28;
  undefined4 local_14;
  DWORD local_10;
  DWORD local_c;
  undefined4 local_8;
  
  this->m_pwfx = (WAVEFORMATEX *)0x0;
  MVar1 = mmioDescend(this->m_hmmio,&this->m_ckRiff,(MMCKINFO *)0x0,0);
  if (MVar1 == 0) {
    if (((this->m_ckRiff).ckid == 0x46464952) && ((this->m_ckRiff).fccType == 0x45564157)) {
      local_28.ckid = 0x20746d66;
      MVar1 = mmioDescend(this->m_hmmio,&local_28,&this->m_ckRiff,0x10);
      if (MVar1 == 0) {
        if (local_28.cksize < 0x10) {
          uVar2 = E_FAIL;
        }
        else {
          LVar3 = mmioRead(this->m_hmmio,(HPSTR)&local_14,0x10);
          if (LVar3 == 0x10) {
            if ((local_14 & 0xffff) == 1) {
              pWVar4 = (WAVEFORMATEX *)operator_new(0x12);
              this->m_pwfx = pWVar4;
              if (this->m_pwfx == (WAVEFORMATEX *)0x0) {
                return 0x80004005;
              }
              pWVar4 = this->m_pwfx;
              pWVar4->wFormatTag = (undefined2)local_14;
              pWVar4->nChannels = local_14._2_2_;
              pWVar4->nSamplesPerSec = local_10;
              pWVar4->nAvgBytesPerSec = local_c;
              pWVar4->nBlockAlign = (undefined2)local_8;
              pWVar4->wBitsPerSample = local_8._2_2_;
              this->m_pwfx->cbSize = 0;
            }
            else {
              local_2c = local_2c & 0xffff0000;
              LVar3 = mmioRead(this->m_hmmio,(HPSTR)&local_2c,2);
              if (LVar3 != 2) {
                return 0x80004005;
              }
              pWVar4 = (WAVEFORMATEX *)operator_new((local_2c & 0xffff) + 0x12);
              this->m_pwfx = pWVar4;
              if (this->m_pwfx == (WAVEFORMATEX *)0x0) {
                return 0x80004005;
              }
              pWVar4 = this->m_pwfx;
              pWVar4->wFormatTag = (undefined2)local_14;
              pWVar4->nChannels = local_14._2_2_;
              pWVar4->nSamplesPerSec = local_10;
              pWVar4->nAvgBytesPerSec = local_c;
              pWVar4->nBlockAlign = (undefined2)local_8;
              pWVar4->wBitsPerSample = local_8._2_2_;
              this->m_pwfx->cbSize = (WORD)local_2c;
              uVar5 = mmioRead(this->m_hmmio,(HPSTR)(this->m_pwfx + 1),local_2c & 0xffff);
              if (uVar5 != (local_2c & 0xffff)) {
                if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
                  operator_delete(this->m_pwfx);
                  this->m_pwfx = (WAVEFORMATEX *)0x0;
                }
                return 0x80004005;
              }
            }
            MVar1 = mmioAscend(this->m_hmmio,&local_28,0);
            if (MVar1 == 0) {
              uVar2 = 0;
            }
            else {
              if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
                operator_delete(this->m_pwfx);
                this->m_pwfx = (WAVEFORMATEX *)0x0;
              }
              uVar2 = 0x80004005;
            }
          }
          else {
            uVar2 = 0x80004005;
          }
        }
      }
      else {
        uVar2 = 0x80004005;
      }
    }
    else {
      uVar2 = 0x80004005;
    }
  }
  else {
    uVar2 = 0x80004005;
  }
  return uVar2;
}

