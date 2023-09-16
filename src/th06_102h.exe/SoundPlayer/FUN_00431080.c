
undefined4 __fastcall SoundPlayer::FUN_00431080(SoundPlayer *this)

{
  undefined4 uVar1;
  int iVar2;
  uint idx;
  
  if (this->directsound8_uninit == (DirectSound8Player *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if ((this->directsound).directsound8 == (LPDIRECTSOUND8)0x0) {
    uVar1 = 0;
  }
  else {
    for (idx = 0; (int)idx < 3; idx = idx + 1) {
      this->soundBuffersToPlay[idx] = -1;
    }
    for (idx = 0; (int)idx < 0x1a; idx = idx + 1) {
      iVar2 = idx;
      FUN_004306e0(this,idx,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
      if (iVar2 != 0) {
        GameErrorContextLog((GameErrorContext *)&DAT_0069d998,
                            "error : Sound ファイルが読み込めない データを確認 %s\n"
                            ,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
        return 0xffffffff;
      }
    }
    for (idx = 0; idx < 0x20; idx = idx + 1) {
      (*((this->directsound).directsound8)->lpVtbl->DuplicateSoundBuffer)
                ((this->directsound).directsound8,
                 this->sound_buffers[SOUND_BUFFER_IDX_VOL[idx].buffer_idx],
                 this->duplicateSoundBuffers + idx);
      (*this->duplicateSoundBuffers[idx]->lpVtbl->SetCurrentPosition)
                (this->duplicateSoundBuffers[idx],0);
      (*this->duplicateSoundBuffers[idx]->lpVtbl->SetVolume)
                (this->duplicateSoundBuffers[idx],(int)SOUND_BUFFER_IDX_VOL[idx].volume);
    }
    uVar1 = 0;
  }
  return uVar1;
}

