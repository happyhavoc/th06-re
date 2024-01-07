
ZunResult __thiscall SoundPlayer::Release(SoundPlayer *this)

{
  CSoundManager *this_00;
  int local_8;
  
  if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
    for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
      if (this->duplicateSoundBuffers[local_8] != (LPDIRECTSOUNDBUFFER)0x0) {
        (*this->duplicateSoundBuffers[local_8]->lpVtbl->Release)
                  (this->duplicateSoundBuffers[local_8]);
        this->duplicateSoundBuffers[local_8] = (LPDIRECTSOUNDBUFFER)0x0;
      }
      if (this->sound_buffers[local_8] != (LPDIRECTSOUNDBUFFER)0x0) {
        (*this->sound_buffers[local_8]->lpVtbl->Release)(this->sound_buffers[local_8]);
        this->sound_buffers[local_8] = (LPDIRECTSOUNDBUFFER)0x0;
      }
    }
    KillTimer((HWND)this->game_window,1);
    StopBGM(this);
    (this->csoundmanager).m_pDS = (LPDIRECTSOUND8)0x0;
    (*this->soundbuffer->lpVtbl->Stop)(this->soundbuffer);
    if (this->soundbuffer != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->soundbuffer->lpVtbl->Release)(this->soundbuffer);
      this->soundbuffer = (LPDIRECTSOUNDBUFFER)0x0;
    }
    if (this->streamingSound != (CStreamingSound *)0x0) {
      if (this->streamingSound != (CStreamingSound *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**(this->streamingSound->base).vtbl)(1);
      }
      this->streamingSound = (CStreamingSound *)0x0;
    }
    if (this->csoundmanager_ptr != (CSoundManager *)0x0) {
      this_00 = this->csoundmanager_ptr;
      if (this_00 != (CSoundManager *)0x0) {
        CSoundManager::~CSoundManager(this_00);
        _free(this_00);
      }
      this->csoundmanager_ptr = (CSoundManager *)0x0;
    }
  }
  return ZUN_SUCCESS;
}

