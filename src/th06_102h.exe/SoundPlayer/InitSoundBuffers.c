
ZunResult __thiscall SoundPlayer::InitSoundBuffers(SoundPlayer *this)

{
  ZunResult ZVar1;
  int iVar2;
  uint idx;
  
  if (this->csoundmanager_ptr == (CSoundManager *)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else if ((this->csoundmanager).m_pDS == (LPDIRECTSOUND8)0x0) {
    ZVar1 = ZUN_SUCCESS;
  }
  else {
    for (idx = 0; (int)idx < 3; idx = idx + 1) {
      this->soundBuffersToPlay[idx] = -1;
    }
    for (idx = 0; (int)idx < 0x1a; idx = idx + 1) {
      iVar2 = idx;
      LoadSound(this,idx,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
      if (iVar2 != 0) {
        GameErrorContextLog(&g_GameErrorContext,
                            "error : Sound ファイルが読み込めない データを確認 %s\n"
                            ,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
        return ZUN_ERROR;
      }
    }
    for (idx = 0; idx < 0x20; idx = idx + 1) {
      (*((this->csoundmanager).m_pDS)->lpVtbl->DuplicateSoundBuffer)
                ((this->csoundmanager).m_pDS,
                 this->sound_buffers[SOUND_BUFFER_IDX_VOL[idx].buffer_idx],
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

