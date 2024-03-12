
void __thiscall SoundPlayer::InitializeDSound(SoundPlayer *this,HWND game_window)

{
  CSoundManager *pCVar1;
  int iVar2;
  HRESULT res;
  DSBUFFERDESC *pDVar3;
  undefined4 *puVar4;
  uint unaff_retaddr;
  CSoundManager *local_78;
  tWAVEFORMATEX wav_format;
  undefined4 *local_48;
  DWORD local_44;
  DWORD local_40;
  LPVOID local_3c;
  DSBUFFERDESC bufdesc;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0046928b;
  local_10 = ExceptionList;
  local_14 = __security_cookie ^ unaff_retaddr;
  ExceptionList = &local_10;
  pCVar1 = (CSoundManager *)operator_new(4);
  local_8 = 0;
  if (pCVar1 == (CSoundManager *)0x0) {
    local_78 = (CSoundManager *)0x0;
  }
  else {
    local_78 = (CSoundManager *)CSoundManager::CSoundManager(pCVar1);
  }
  local_8 = 0xffffffff;
  this->csoundmanager_ptr = local_78;
  iVar2 = CSoundManager::Initialize(this->csoundmanager_ptr,game_window,2,2,0xac44,0x10);
  if (iVar2 < 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "DirectSound オブジェクトの初期化が失敗したよ\n");
    if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
      pCVar1 = this->csoundmanager_ptr;
      if (pCVar1 != (CSoundManager *)0x0) {
        CSoundManager::~CSoundManager(pCVar1);
        _free(pCVar1);
      }
      this->csoundmanager_ptr = (CSoundManager *)0x0;
    }
  }
  else {
    (this->csoundmanager).m_pDS = this->csoundmanager_ptr->m_pDS;
    this->field1191_0x618 = 0;
    pDVar3 = &bufdesc;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DSBUFFERDESC *)&pDVar3->dwFlags;
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
    res = (*((this->csoundmanager).m_pDS)->lpVtbl->CreateSoundBuffer)
                    ((this->csoundmanager).m_pDS,&bufdesc,&this->soundbuffer,(LPUNKNOWN)0x0);
    if ((-1 < res) &&
       (res = (*this->soundbuffer->lpVtbl->Lock)
                        (this->soundbuffer,0,0x8000,&local_48,&local_44,&local_3c,&local_40,0),
       -1 < res)) {
      puVar4 = local_48;
                    /* memset(buffer, 0, 0x8000); */
      for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      (*this->soundbuffer->lpVtbl->Unlock)(this->soundbuffer,local_48,local_44,local_3c,local_40);
      (*this->soundbuffer->lpVtbl->Play)(this->soundbuffer,0,0,1);
                    /* 4 times per second */
      SetTimer(game_window,0,0xfa,(TIMERPROC)0x0);
      this->game_window = (HWND)game_window;
      GameErrorContextLog(&g_GameErrorContext,"DirectSound は正常に初期化されました\n");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ unaff_retaddr);
  return;
}

