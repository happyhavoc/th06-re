
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
    this->directSoundHdl = (LPDIRECTSOUND8)0x0;
    (*this->initSoundBuffer->lpVtbl->Stop)(this->initSoundBuffer);
    if (this->initSoundBuffer != (LPDIRECTSOUNDBUFFER)0x0) {
      (*this->initSoundBuffer->lpVtbl->Release)(this->initSoundBuffer);
      this->initSoundBuffer = (LPDIRECTSOUNDBUFFER)0x0;
    }
    if (this->backgroundMusic != (CStreamingSound *)0x0) {
      if (this->backgroundMusic != (CStreamingSound *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**(this->backgroundMusic->base).vtbl)(1);
      }
      this->backgroundMusic = (CStreamingSound *)0x0;
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

