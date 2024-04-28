
ZunResult __thiscall SoundPlayer::LoadWav(SoundPlayer *this,LPSTR path)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  HANDLE pvVar5;
  HRESULT HVar6;
  ZunResult exit_status;
  SoundPlayer *self_backup;
  DWORD cur_time2;
  DWORD cur_time;
  uint blockAlign;
  CWaveFile waveFile;
  void *exception_list;
  undefined *puStack_c;
  undefined4 unk_err_res_;
  
  unk_err_res_ = 0xffffffff;
  puStack_c = &LAB_004692ab;
  exception_list = ExceptionList;
  ExceptionList = &exception_list;
  CWaveFile::CWaveFile(&waveFile);
  unk_err_res_ = 0;
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    unk_err_res_ = 0xffffffff;
    CWaveFile::~CWaveFile(&waveFile);
    exit_status = ZUN_ERROR;
  }
  else if (g_Supervisor.cfg.playSounds == 0) {
    unk_err_res_ = 0xffffffff;
    CWaveFile::~CWaveFile(&waveFile);
    exit_status = ZUN_ERROR;
  }
  else if (this->directSoundHdl == (LPDIRECTSOUND8)0x0) {
    unk_err_res_ = 0xffffffff;
    CWaveFile::~CWaveFile(&waveFile);
    exit_status = ZUN_ERROR;
  }
  else {
    StopBGM(this);
    DebugPrint2("load BGM\n");
    iVar2 = CWaveFile::Open(&waveFile,path,0,1);
    if (iVar2 < 0) {
      DebugPrint2("error : wav file load error %s\n",path);
      CWaveFile::Close(&waveFile);
      unk_err_res_ = 0xffffffff;
      CWaveFile::~CWaveFile(&waveFile);
      exit_status = ZUN_ERROR;
    }
    else {
      iVar2 = CWaveFile::GetSize(&waveFile);
      if (iVar2 == 0) {
        CWaveFile::Close(&waveFile);
        unk_err_res_ = 0xffffffff;
        CWaveFile::~CWaveFile(&waveFile);
        exit_status = ZUN_ERROR;
      }
      else {
        DVar3 = timeGetTime();
        cur_time = DVar3;
        while ((cur_time < DVar3 + 100 && (DVar3 <= cur_time))) {
          cur_time = timeGetTime();
        }
        CWaveFile::Close(&waveFile);
        uVar1 = (waveFile.m_pwfx)->nBlockAlign;
        uVar4 = (waveFile.m_pwfx)->nSamplesPerSec * 2 * (uint)uVar1 >> 2;
        pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        this->backgroundMusicUpdateEvent = pvVar5;
        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,BackgroundMusicPlayerThread,
                              g_Supervisor.hwndGameWindow,0,&this->backgroundMusicThreadId);
        this->backgroundMusicThreadHandle = pvVar5;
        HVar6 = CSoundManager::CreateStreaming
                          (this->csoundmanager_ptr,&this->backgroundMusic,path,0x10100,
                           (GUID)ZEXT816(0),4,uVar4 - uVar4 % (uint)uVar1,
                           this->backgroundMusicUpdateEvent);
        if (HVar6 < 0) {
          DebugPrint2(
                     "error : ストリーミング用サウン���バッファを作成出来ませんでした\n"
                     );
          unk_err_res_ = 0xffffffff;
          CWaveFile::~CWaveFile(&waveFile);
          exit_status = ZUN_ERROR;
        }
        else {
          DebugPrint2("comp\n");
          DVar3 = timeGetTime();
          cur_time2 = DVar3;
          while ((cur_time2 < DVar3 + 100 && (DVar3 <= cur_time2))) {
            cur_time2 = timeGetTime();
          }
          unk_err_res_ = 0xffffffff;
          CWaveFile::~CWaveFile(&waveFile);
          exit_status = ZUN_SUCCESS;
        }
      }
    }
  }
  ExceptionList = exception_list;
  return exit_status;
}

