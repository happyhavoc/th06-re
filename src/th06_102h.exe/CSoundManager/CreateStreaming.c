
HRESULT __thiscall
CSoundManager::CreateStreaming
          (CSoundManager *this,CStreamingSound **ppStreamingSound,LPSTR strWaveFileName,
          DWORD dwCreationFlags,GUID guid3DAlgorithm,DWORD dwNotifyCount,DWORD dwNotifySize,
          HANDLE hEventNotify)

{
  HRESULT HVar1;
  CWaveFile *this_00;
  CStreamingSound *this_01;
  int iVar2;
  DSBUFFERDESC *pDVar3;
  uint unaff_retaddr;
  CStreamingSound *local_7c;
  CWaveFile *local_78;
  uint local_54;
  LPDIRECTSOUNDNOTIFY local_50;
  HRESULT local_4c;
  DSBUFFERDESC local_48;
  uint local_24;
  IDirectSoundBuffer *local_20;
  CWaveFile *local_1c;
  LPCDSBPOSITIONNOTIFY local_18;
  DWORD local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004692d6;
  local_10 = ExceptionList;
  local_24 = __security_cookie ^ unaff_retaddr;
  if (this->m_pDS == (LPDIRECTSOUND8)0x0) {
    HVar1 = CO_E_NOTINITIALIZED;
  }
  else {
    local_20 = (IDirectSoundBuffer *)0x0;
    local_1c = (CWaveFile *)0x0;
    local_18 = (LPCDSBPOSITIONNOTIFY)0x0;
    local_50 = (LPDIRECTSOUNDNOTIFY)0x0;
    ExceptionList = &local_10;
    this_00 = (CWaveFile *)operator_new(0x98);
    local_8 = 0;
    if (this_00 == (CWaveFile *)0x0) {
      local_78 = (CWaveFile *)0x0;
    }
    else {
      local_78 = CWaveFile::CWaveFile(this_00);
    }
    local_8 = 0xffffffff;
    local_1c = local_78;
    CWaveFile::Open(local_78,strWaveFileName,0,1);
    local_14 = dwNotifySize * dwNotifyCount;
    pDVar3 = &local_48;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DSBUFFERDESC *)&pDVar3->dwFlags;
    }
    local_48.dwSize = 0x24;
    local_48.dwFlags = dwCreationFlags | 0x18188;
    local_48.dwBufferBytes = local_14;
    local_48.guid3DAlgorithm.Data1 = guid3DAlgorithm.Data1;
    local_48.guid3DAlgorithm.Data2 = guid3DAlgorithm.Data2;
    local_48.guid3DAlgorithm.Data3 = guid3DAlgorithm.Data3;
    local_48.guid3DAlgorithm.Data4[0] = guid3DAlgorithm.Data4[0];
    local_48.guid3DAlgorithm.Data4[1] = guid3DAlgorithm.Data4[1];
    local_48.guid3DAlgorithm.Data4[2] = guid3DAlgorithm.Data4[2];
    local_48.guid3DAlgorithm.Data4[3] = guid3DAlgorithm.Data4[3];
    local_48.guid3DAlgorithm.Data4[4] = guid3DAlgorithm.Data4[4];
    local_48.guid3DAlgorithm.Data4[5] = guid3DAlgorithm.Data4[5];
    local_48.guid3DAlgorithm.Data4[6] = guid3DAlgorithm.Data4[6];
    local_48.guid3DAlgorithm.Data4[7] = guid3DAlgorithm.Data4[7];
    local_48.lpwfxFormat = local_1c->m_pwfx;
    local_4c = (*this->m_pDS->lpVtbl->CreateSoundBuffer)
                         (this->m_pDS,&local_48,&local_20,(LPUNKNOWN)0x0);
    if (local_4c < 0) {
      HVar1 = E_FAIL;
    }
    else {
      local_4c = (*local_20->lpVtbl->QueryInterface)(local_20,&IID_0046fe10,&local_50);
      if (local_4c < 0) {
        HVar1 = E_FAIL;
      }
      else {
        local_18 = (LPCDSBPOSITIONNOTIFY)operator_new(dwNotifyCount << 3);
        if (local_18 == (LPCDSBPOSITIONNOTIFY)0x0) {
          HVar1 = E_OUTOFMEMORY;
        }
        else {
          for (local_54 = 0; local_54 < dwNotifyCount; local_54 = local_54 + 1) {
            local_18[local_54].dwOffset = dwNotifySize * local_54 + -1 + dwNotifySize;
            local_18[local_54].hEventNotify = hEventNotify;
          }
          local_4c = (*local_50->lpVtbl->SetNotificationPositions)(local_50,dwNotifyCount,local_18);
          if (local_4c < 0) {
            if (local_50 != (LPDIRECTSOUNDNOTIFY)0x0) {
              (*local_50->lpVtbl->Release)(local_50);
              local_50 = (LPDIRECTSOUNDNOTIFY)0x0;
            }
            if (local_18 != (LPCDSBPOSITIONNOTIFY)0x0) {
              _free(local_18);
              local_18 = (LPCDSBPOSITIONNOTIFY)0x0;
            }
            HVar1 = E_FAIL;
          }
          else {
            if (local_50 != (LPDIRECTSOUNDNOTIFY)0x0) {
              (*local_50->lpVtbl->Release)(local_50);
              local_50 = (LPDIRECTSOUNDNOTIFY)0x0;
            }
            if (local_18 != (LPCDSBPOSITIONNOTIFY)0x0) {
              _free(local_18);
              local_18 = (LPCDSBPOSITIONNOTIFY)0x0;
            }
            this_01 = (CStreamingSound *)operator_new(0x34);
            local_8 = 1;
            if (this_01 == (CStreamingSound *)0x0) {
              local_7c = (CStreamingSound *)0x0;
            }
            else {
              local_7c = (CStreamingSound *)
                         CStreamingSound::CStreamingSound
                                   (this_01,local_20,local_14,local_1c,dwNotifySize);
            }
            local_8 = 0xffffffff;
            *ppStreamingSound = local_7c;
            HVar1 = 0;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ unaff_retaddr);
  return HVar1;
}

