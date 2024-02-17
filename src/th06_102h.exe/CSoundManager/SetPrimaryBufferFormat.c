
HRESULT __thiscall
CSoundManager::SetPrimaryBufferFormat
          (CSoundManager *this,DWORD channels,DWORD samples_per_sec,DWORD bits_per_sample)

{
  HRESULT HVar1;
  int iVar2;
  DSBUFFERDESC *pDVar3;
  uint unaff_retaddr;
  DSBUFFERDESC soundbuf_desc;
  uint stack_cookie2;
  WAVEFORMATEX wave_format;
  IDirectSoundBuffer *soundbuf;
  
  stack_cookie2 = __security_cookie ^ unaff_retaddr;
  soundbuf = (IDirectSoundBuffer *)0x0;
  if (this->m_pDS == (LPDIRECTSOUND8)0x0) {
    HVar1 = -0x7ffbfe10;
  }
  else {
    pDVar3 = &soundbuf_desc;
                    /* memset(soundbuf, 0, sizeof(soundbuf)); */
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar3->dwSize = 0;
      pDVar3 = (DSBUFFERDESC *)&pDVar3->dwFlags;
    }
    soundbuf_desc.dwSize = 0x24;
    soundbuf_desc.dwFlags = 1;
    soundbuf_desc.dwBufferBytes = 0;
    soundbuf_desc.lpwfxFormat = (LPWAVEFORMATEX)0x0;
    HVar1 = (*this->m_pDS->lpVtbl->CreateSoundBuffer)
                      (this->m_pDS,&soundbuf_desc,&soundbuf,(LPUNKNOWN)0x0);
    if (-1 < HVar1) {
      wave_format.cbSize = 0;
      wave_format.wFormatTag = 1;
      wave_format.nChannels = (WORD)channels;
      wave_format.wBitsPerSample = (WORD)bits_per_sample;
      wave_format.nBlockAlign = (short)((int)(bits_per_sample & 0xffff) >> 3) * (WORD)channels;
      wave_format.nAvgBytesPerSec = samples_per_sec * wave_format.nBlockAlign;
      wave_format.nSamplesPerSec = samples_per_sec;
      HVar1 = (*soundbuf->lpVtbl->SetFormat)(soundbuf,&wave_format);
      if (-1 < HVar1) {
        if (soundbuf != (IDirectSoundBuffer *)0x0) {
          (*soundbuf->lpVtbl->Release)(soundbuf);
          soundbuf = (IDirectSoundBuffer *)0x0;
        }
        HVar1 = 0;
      }
    }
  }
  __security_check_cookie(stack_cookie2 ^ unaff_retaddr);
  return HVar1;
}

