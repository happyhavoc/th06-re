
void __thiscall
DirectSound8Player::CreateSoundBuffer
          (DirectSound8Player *this,short channels,int samples_per_sec,ushort bits_per_sample)

{
  HRESULT HVar1;
  int iVar2;
  DSBUFFERDESC *pDVar3;
  uint unaff_retaddr;
  DSBUFFERDESC soundbuf;
  uint local_20;
  WAVEFORMATEX wave_format;
  IDirectSoundBuffer *local_8;
  
  local_20 = __security_cookie ^ unaff_retaddr;
  local_8 = (IDirectSoundBuffer *)0x0;
  if (this->directsound8 != (LPDIRECTSOUND8)0x0) {
    pDVar3 = &soundbuf;
                    /* memset(soundbuf, 0, sizeof(soundbuf)); */
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DSBUFFERDESC *)&pDVar3->dwFlags;
    }
    soundbuf.dwSize = 0x24;
    soundbuf.dwFlags = 1;
    soundbuf.dwBufferBytes = 0;
    soundbuf.lpwfxFormat = (LPWAVEFORMATEX)0x0;
    HVar1 = (*this->directsound8->lpVtbl->CreateSoundBuffer)
                      (this->directsound8,&soundbuf,&local_8,(LPUNKNOWN)0x0);
    if (-1 < HVar1) {
      wave_format.cbSize = 0;
      wave_format.wFormatTag = 1;
      wave_format.nChannels = channels;
      wave_format.wBitsPerSample = bits_per_sample;
      wave_format.nBlockAlign = (short)((int)(uint)bits_per_sample >> 3) * channels;
      wave_format.nAvgBytesPerSec = samples_per_sec * (uint)wave_format.nBlockAlign;
      wave_format.nSamplesPerSec = samples_per_sec;
      HVar1 = (*local_8->lpVtbl->SetFormat)(local_8,&wave_format);
      if ((-1 < HVar1) && (local_8 != (IDirectSoundBuffer *)0x0)) {
        (*local_8->lpVtbl->Release)(local_8);
        local_8 = (IDirectSoundBuffer *)0x0;
      }
    }
  }
  __security_check_cookie(local_20 ^ unaff_retaddr);
  return;
}

