
int __thiscall CStreamingSound::HandleWaveStreamNotification(CStreamingSound *this,int param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_2c;
  void *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined local_8 [4];
  
  if ((this->m_apDSBuffer == (void *)0x0) || (this->m_pWaveFile == (void *)0x0)) {
    local_20 = -0x7ffbfe10;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_20 = FUN_0043b090(*this->m_apDSBuffer,&local_18);
    if (local_20 < 0) {
      DebugPrint2("error : RestoreBuffer in HandleWaveStreamNotification\n");
    }
    else if (local_18 == 0) {
      local_c = (undefined4 *)0x0;
      local_14 = 0;
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      local_20 = (**(code **)(**this->m_apDSBuffer + 0x2c))
                           (*this->m_apDSBuffer,this[2].m_pWaveFile,this[2].field2_0x8,&local_c,
                            &local_24,&local_14,local_8,0);
      if (local_20 < 0) {
        DebugPrint2("error : Buffer->Lock in HandleWaveStreamNotification\n");
      }
      else if (local_14 == 0) {
        if (this[3].unk == (void *)0x0) {
          local_20 = FUN_0043c080(local_c,local_24,&local_10);
          if (local_20 < 0) {
            DebugPrint2("error : m_pWaveFile->Read in HandleWaveStreamNotification\n");
            return local_20;
          }
        }
        else {
                    /* WARNING: Load size is inaccurate */
          cVar1 = (-(*(short *)(*this->m_pWaveFile + 0xe) != 8) & 0x80U) + 0x80;
          puVar4 = local_c;
          for (uVar3 = local_24 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar4 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
            puVar4 = puVar4 + 1;
          }
          for (uVar3 = local_24 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)puVar4 = cVar1;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          local_10 = local_24;
        }
        if (local_10 < local_24) {
          if (param_1 == 0) {
                    /* WARNING: Load size is inaccurate */
            cVar1 = (-(*(short *)(*this->m_pWaveFile + 0xe) != 8) & 0x80U) + 0x80;
            puVar4 = (undefined4 *)((int)local_c + local_10);
            for (uVar3 = local_24 - local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar4 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
              puVar4 = puVar4 + 1;
            }
            for (uVar3 = local_24 - local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(char *)puVar4 = cVar1;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
            this[3].unk = (void *)0x1;
          }
          else {
            for (local_2c = local_10; local_2c < local_24; local_2c = local_2c + local_10) {
              local_20 = FUN_0043be70(1);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->ResetFile in HandleWaveStreamNotification\n");
                return local_20;
              }
              local_20 = FUN_0043c080((char *)((int)local_c + local_2c),local_24 - local_2c,
                                      &local_10);
              if (local_20 < 0) {
                DebugPrint2("error : m_pWaveFile->Read(+) in HandleWaveStreamNotification\n");
                return local_20;
              }
            }
          }
        }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
        (**(code **)(**this->m_apDSBuffer + 0x4c))(*this->m_apDSBuffer,local_c,local_24,0,0);
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
        local_20 = (**(code **)(**this->m_apDSBuffer + 0x10))(*this->m_apDSBuffer,&local_28,0);
        if (local_20 < 0) {
          DebugPrint2(
                     "error : m_apDSBuffer[0]->GetCurrentPosition in HandleWaveStreamNotification\n"
                     );
        }
        else {
          if (local_28 < this[2].unk) {
            local_1c = (int)this->field2_0x8 - (int)this[2].unk;
          }
          else {
            local_1c = -(int)this[2].unk;
          }
          local_1c = local_1c + (int)local_28;
          this[2].m_apDSBuffer = (void *)((int)this[2].m_apDSBuffer + local_1c);
          this[2].unk = local_28;
          if ((this[3].unk != (void *)0x0) &&
             (pvVar2 = (void *)FUN_0043be50(this->m_pWaveFile), pvVar2 <= this[2].m_apDSBuffer)) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
            (**(code **)(**this->m_apDSBuffer + 0x48))(*this->m_apDSBuffer);
          }
          this[2].m_pWaveFile = (void *)((int)this[2].m_pWaveFile + local_24);
          this[2].m_pWaveFile = (void *)((uint)this[2].m_pWaveFile % (uint)this->field2_0x8);
          local_20 = 0;
        }
      }
      else {
        local_20 = -0x7fff0001;
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      local_20 = FUN_0043aea0((int)this,*this->m_apDSBuffer,0);
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

