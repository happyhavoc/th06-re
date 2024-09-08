
ZunResult __thiscall th06::SoundPlayer::InitializeDSound(SoundPlayer *this,HWND game_window)

{
  DWORD_PTR cookie;
  CSoundManager *pCVar1;
  int iVar2;
  ZunResult ZVar3;
  HRESULT res;
  DSBUFFERDESC *pDVar4;
  undefined4 *puVar5;
  CSoundManager *local_78;
  tWAVEFORMATEX wav_format;
  undefined4 *audioBuffer1Start;
  DWORD audioBuffer1Len;
  DWORD audioBuffer2Len;
  LPVOID audioBuffer2Start;
  DSBUFFERDESC bufdesc;
  void *exc_list;
  undefined *puStack_c;
  CSoundManager *mgr;
  
  cookie = __security_cookie;
  mgr = (CSoundManager *)0xffffffff;
  puStack_c = &LAB_0046928b;
  exc_list = ExceptionList;
  ExceptionList = &exc_list;
  pCVar1 = (CSoundManager *)operator_new(4);
  mgr = (CSoundManager *)0x0;
  if (pCVar1 == (CSoundManager *)0x0) {
    local_78 = (CSoundManager *)0x0;
  }
  else {
    local_78 = (CSoundManager *)CSoundManager::CSoundManager(pCVar1);
  }
  mgr = (CSoundManager *)0xffffffff;
  this->csoundmanager_ptr = local_78;
  iVar2 = CSoundManager::Initialize(this->csoundmanager_ptr,game_window,2,2,0xac44,0x10);
  if (iVar2 < 0) {
    GameErrorContext::Log
              (&g_GameErrorContext,"DirectSound オブジェクトの初期化が失敗したよ\n")
    ;
    if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
      pCVar1 = this->csoundmanager_ptr;
      if (pCVar1 != (CSoundManager *)0x0) {
        CSoundManager::~CSoundManager(pCVar1);
        operator_delete(pCVar1);
      }
      this->csoundmanager_ptr = (CSoundManager *)0x0;
    }
    ZVar3 = ZUN_ERROR;
  }
  else {
    this->directSoundHdl = this->csoundmanager_ptr->m_pDS;
    this->backgroundMusicThreadHandle = (HANDLE)0x0;
    pDVar4 = &bufdesc;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar4->dwSize = 0;
      pDVar4 = (DSBUFFERDESC *)&pDVar4->dwFlags;
    }
    bufdesc.dwSize = 0x24;
    bufdesc.dwFlags = 0x8008;
    bufdesc.dwBufferBytes = 0x8000;
    wav_format.cbSize = 0;
    wav_format.wFormatTag = 1;
    wav_format.nChannels = 2;
    wav_format.nSamplesPerSec = 0xac44;
    wav_format.nAvgBytesPerSec = 0x2b110;
    wav_format.nBlockAlign = 4;
    wav_format.wBitsPerSample = 0x10;
    bufdesc.lpwfxFormat = &wav_format;
    res = (*this->directSoundHdl->lpVtbl->CreateSoundBuffer)
                    (this->directSoundHdl,&bufdesc,&this->initSoundBuffer,(LPUNKNOWN)0x0);
    if (res < 0) {
      ZVar3 = ZUN_ERROR;
    }
    else {
      res = (*this->initSoundBuffer->lpVtbl->Lock)
                      (this->initSoundBuffer,0,0x8000,&audioBuffer1Start,&audioBuffer1Len,
                       &audioBuffer2Start,&audioBuffer2Len,0);
      if (res < 0) {
        ZVar3 = ZUN_ERROR;
      }
      else {
        puVar5 = audioBuffer1Start;
                    /* memset(buffer, 0, 0x8000); */
        for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        (*this->initSoundBuffer->lpVtbl->Unlock)
                  (this->initSoundBuffer,audioBuffer1Start,audioBuffer1Len,audioBuffer2Start,
                   audioBuffer2Len);
        (*this->initSoundBuffer->lpVtbl->Play)(this->initSoundBuffer,0,0,1);
                    /* 4 times per second */
        SetTimer(game_window,0,0xfa,(TIMERPROC)0x0);
        this->game_window = (HWND)game_window;
        GameErrorContext::Log
                  (&g_GameErrorContext,"DirectSound は正常に初期化されました\n");
        ZVar3 = ZUN_SUCCESS;
      }
    }
  }
  ExceptionList = exc_list;
  __security_check_cookie(cookie);
  return ZVar3;
}

