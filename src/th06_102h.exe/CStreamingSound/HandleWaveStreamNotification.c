
int __thiscall
th06::CStreamingSound::HandleWaveStreamNotification(CStreamingSound *this,int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  LPVOID local_14;
  uint local_10;
  undefined4 *local_c;
  DWORD local_8;
  
  if (((this->base).m_apDSBuffer == (LPDIRECTSOUNDBUFFER *)0x0) ||
     ((this->base).m_pWaveFile == (CWaveFile *)0x0)) {
    local_20 = -0x7ffbfe10;
  }
  else {
    local_20 = CSound::RestoreBuffer(&this->base,*(this->base).m_apDSBuffer,&local_18);
    if (local_20 < 0) {
      DebugPrint2("error : RestoreBuffer in HandleWaveStreamNotification\n");
    }
    else if (local_18 == 0) {
      local_c = (undefined4 *)0x0;
      local_14 = (LPVOID)0x0;
      local_20 = (*(*(this->base).m_apDSBuffer)->lpVtbl->Lock)
                           (*(this->base).m_apDSBuffer,this->m_dwNextWriteOffset,
                            this->m_dwNotifySize,&local_c,&local_24,&local_14,&local_8,0);
      if (local_20 < 0) {
        DebugPrint2("error : Buffer->Lock in HandleWaveStreamNotification\n");
      }
      else if (local_14 == (LPVOID)0x0) {
        if (this->m_bFillNextNotificationWithSilence == 0) {
          local_20 = CWaveFile::Read((this->base).m_pWaveFile,local_c,local_24,&local_10);
          if (local_20 < 0) {
            DebugPrint2("error : m_pWaveFile->Read in HandleWaveStreamNotification\n");
            return local_20;
          }
        }
        else {
          cVar1 = (-(((this->base).m_pWaveFile)->m_pwfx->wBitsPerSample != 8) & 0x80U) + 0x80;
          puVar3 = local_c;
          for (uVar2 = local_24 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = local_24 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)puVar3 = cVar1;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          local_10 = local_24;
        }
        if (local_10 < local_24) {
          if (param_1 == 0) {
            cVar1 = (-(((this->base).m_pWaveFile)->m_pwfx->wBitsPerSample != 8) & 0x80U) + 0x80;
            puVar3 = (undefined4 *)((int)local_c + local_10);
            for (uVar2 = local_24 - local_10 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
              puVar3 = puVar3 + 1;
            }
            for (uVar2 = local_24 - local_10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(char *)puVar3 = cVar1;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
            this->m_bFillNextNotificationWithSilence = 1;
          }
          else {
            for (local_2c = local_10; local_2c < local_24; local_2c = local_2c + local_10) {
              local_20 = CWaveFile::ResetFile((this->base).m_pWaveFile,true);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->ResetFile in HandleWaveStreamNotification\n");
                return local_20;
              }
              local_20 = CWaveFile::Read((this->base).m_pWaveFile,
                                         (undefined4 *)((int)local_c + local_2c),local_24 - local_2c
                                         ,&local_10);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->Read(+) in HandleWaveStreamNotification\n");
                return local_20;
              }
            }
          }
        }
        (*(*(this->base).m_apDSBuffer)->lpVtbl->Unlock)
                  (*(this->base).m_apDSBuffer,local_c,local_24,(LPVOID)0x0,0);
        local_20 = (*(*(this->base).m_apDSBuffer)->lpVtbl->GetCurrentPosition)
                             (*(this->base).m_apDSBuffer,&local_28,(LPDWORD)0x0);
        if (local_20 < 0) {
          DebugPrint2(
                     "error : m_apDSBuffer[0]->GetCurrentPosition in HandleWaveStreamNotification\n"
                     );
        }
        else {
          if (local_28 < this->m_dwLastPlayPos) {
            local_1c = (this->base).m_dwDSBufferSize - this->m_dwLastPlayPos;
          }
          else {
            local_1c = -this->m_dwLastPlayPos;
          }
          local_1c = local_1c + local_28;
          this->m_dwPlayProgress = this->m_dwPlayProgress + local_1c;
          this->m_dwLastPlayPos = local_28;
          if ((this->m_bFillNextNotificationWithSilence != 0) &&
             (uVar2 = CWaveFile::GetSize((this->base).m_pWaveFile), uVar2 <= this->m_dwPlayProgress)
             ) {
            (*(*(this->base).m_apDSBuffer)->lpVtbl->Stop)(*(this->base).m_apDSBuffer);
          }
          this->m_dwNextWriteOffset = this->m_dwNextWriteOffset + local_24;
          this->m_dwNextWriteOffset = this->m_dwNextWriteOffset % (this->base).m_dwDSBufferSize;
          local_20 = 0;
        }
      }
      else {
        local_20 = -0x7fff0001;
      }
    }
    else {
      local_20 = CSound::FillBufferWithSound(&this->base,*(this->base).m_apDSBuffer,0);
      if (local_20 < 0) {
        DebugPrint2("error : FillBufferWithSound in HandleWaveStreamNotification\n");
      }
      else {
        local_20 = 0;
      }
    }
  }
  return local_20;
}

