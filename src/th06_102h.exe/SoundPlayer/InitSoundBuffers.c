
ZunResult __thiscall th06::SoundPlayer::InitSoundBuffers(SoundPlayer *this)

{
  ZunResult ZVar1;
  uint idx;
  
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else if (this->directSoundHdl == (LPDIRECTSOUND8)0x0) {
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    for (idx = 0; (int)idx < 3; idx = idx + 1) {
      this->soundBuffersToPlay[idx] = -1;
    }
    for (idx = 0; (int)idx < 0x1a; idx = idx + 1) {
      ZVar1 = LoadSound(this,idx,g_SFXList[idx]);
      if (ZVar1 != ZUN_SUCCESS) {
        GameErrorContext::Log
                  (&g_GameErrorContext,
                   "error : Sound ファイルが読み込めない データを確認 %s\n",
                   g_SFXList[idx]);
        return ZUN_ERROR;
      }
    }
    for (idx = 0; idx < 0x20; idx = idx + 1) {
      (*this->directSoundHdl->lpVtbl->DuplicateSoundBuffer)
                (this->directSoundHdl,this->sound_buffers[SOUND_BUFFER_IDX_VOL[idx].buffer_idx],
                 this->duplicateSoundBuffers + idx);
      (*this->duplicateSoundBuffers[idx]->lpVtbl->SetCurrentPosition)
                (this->duplicateSoundBuffers[idx],0);
      (*this->duplicateSoundBuffers[idx]->lpVtbl->SetVolume)
                (this->duplicateSoundBuffers[idx],(int)SOUND_BUFFER_IDX_VOL[idx].volume);
    }
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

