
ZunResult __thiscall SoundPlayer::LoadWav(SoundPlayer *this,LPSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  HANDLE pvVar4;
  HRESULT HVar5;
  ZunResult exit_status;
  DWORD local_cc;
  DWORD local_c0;
  CWaveFile local_b0;
  DWORD local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004692ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CWaveFile::CWaveFile(&local_b0);
  local_8 = 0;
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    local_8 = 0xffffffff;
    CWaveFile::operator_delete(&local_b0);
    exit_status = ZUN_ERROR;
  }
  else if (g_Supervisor.cfg.playSounds == 0) {
    local_8 = 0xffffffff;
    CWaveFile::operator_delete(&local_b0);
    exit_status = ZUN_ERROR;
  }
  else if ((this->csoundmanager).m_pDS == (LPDIRECTSOUND8)0x0) {
    local_8 = 0xffffffff;
    CWaveFile::operator_delete(&local_b0);
    exit_status = ZUN_ERROR;
  }
  else {
    StopBGM(this);
    DebugPrint2("load BGM\n");
    iVar1 = CWaveFile::Open(&local_b0,param_1,0,1);
    if (iVar1 < 0) {
      DebugPrint2("error : wav file load error %s\n",param_1);
      CWaveFile::Close(&local_b0);
      local_8 = 0xffffffff;
      CWaveFile::operator_delete(&local_b0);
      exit_status = ZUN_ERROR;
    }
    else {
      iVar1 = CWaveFile::GetSize(&local_b0);
      if (iVar1 == 0) {
        CWaveFile::Close(&local_b0);
        local_8 = 0xffffffff;
        CWaveFile::operator_delete(&local_b0);
        exit_status = ZUN_ERROR;
      }
      else {
        DVar2 = timeGetTime();
        local_c0 = DVar2;
        while ((local_c0 < DVar2 + 100 && (DVar2 <= local_c0))) {
          local_c0 = timeGetTime();
        }
        CWaveFile::Close(&local_b0);
        uVar3 = (local_b0.m_pwfx)->nSamplesPerSec * 2 * (uint)(local_b0.m_pwfx)->nBlockAlign >> 2;
        local_14 = uVar3 - uVar3 % (uint)(local_b0.m_pwfx)->nBlockAlign;
        pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        this->streamingUpdateEvent = pvVar4;
        pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00431370,g_Supervisor.hwndGameWindow,
                              0,&this->m_dwNotifyThreadId);
        this->m_hndNotifyThreadHandle = pvVar4;
        HVar5 = CSoundManager::CreateStreaming
                          (this->csoundmanager_ptr,&this->streamingSound,param_1,0x10100,
                           (GUID)ZEXT816(0),4,local_14,this->streamingUpdateEvent);
        if (HVar5 < 0) {
          DebugPrint2(
                     "error : ストリーミング用サウンドバッファを作成出来ませんでした\n"
                     );
          local_8 = 0xffffffff;
          CWaveFile::operator_delete(&local_b0);
          exit_status = ZUN_ERROR;
        }
        else {
          DebugPrint2("comp\n");
          DVar2 = timeGetTime();
          local_cc = DVar2;
          while ((local_cc < DVar2 + 100 && (DVar2 <= local_cc))) {
            local_cc = timeGetTime();
          }
          local_8 = 0xffffffff;
          CWaveFile::operator_delete(&local_b0);
          exit_status = ZUN_SUCCESS;
        }
      }
    }
  }
  ExceptionList = local_10;
  return exit_status;
}

