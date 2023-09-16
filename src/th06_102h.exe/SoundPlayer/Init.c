
void __thiscall SoundPlayer::Init(SoundPlayer *this,HWND game_window)

{
  DirectSound8Player *this_00;
  undefined4 *puVar1;
  int iVar2;
  HRESULT res;
  DSBUFFERDESC *pDVar3;
  uint unaff_retaddr;
  DirectSound8Player *local_78;
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
  puVar1 = (undefined4 *)operator_new(4);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_78 = (DirectSound8Player *)0x0;
  }
  else {
    local_78 = (DirectSound8Player *)FUN_0043a7b0(puVar1);
  }
  local_8 = 0xffffffff;
  this->directsound8_uninit = local_78;
  iVar2 = DirectSound8Player::Init(this->directsound8_uninit,game_window,2,2,0xac44,0x10);
  if (iVar2 < 0) {
    GameErrorContextLog(&g_GameErrorContext,
                        "DirectSound オブジェクトの初期化が失敗したよ\n");
    if (this->directsound8_uninit != (DirectSound8Player *)0x0) {
      this_00 = this->directsound8_uninit;
      if (this_00 != (DirectSound8Player *)0x0) {
        DirectSound8Player::Release(this_00);
        _free(this_00);
      }
      this->directsound8_uninit = (DirectSound8Player *)0x0;
    }
  }
  else {
    (this->directsound).directsound8 = this->directsound8_uninit->directsound8;
    this->field1318_0x618 = 0;
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
    res = (*((this->directsound).directsound8)->lpVtbl->CreateSoundBuffer)
                    ((this->directsound).directsound8,&bufdesc,&this->soundbuffer,(LPUNKNOWN)0x0);
    if ((-1 < res) &&
       (res = (*this->soundbuffer->lpVtbl->Lock)
                        (this->soundbuffer,0,0x8000,&local_48,&local_44,&local_3c,&local_40,0),
       -1 < res)) {
      puVar1 = local_48;
                    /* memset(buffer, 0, 0x8000); */
      for (iVar2 = 0x2000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
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

