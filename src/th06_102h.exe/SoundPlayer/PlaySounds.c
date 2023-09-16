
void __thiscall SoundPlayer::PlaySounds(SoundPlayer *this)

{
  int iVar1;
  int idx;
  
  if ((this->directsound8_uninit != (DirectSound8Player *)0x0) &&
     (g_GameContext.cfg.playSounds != 0)) {
    for (idx = 0; (idx < 3 && (-1 < this->soundBuffersToPlay[idx])); idx = idx + 1) {
      iVar1 = this->soundBuffersToPlay[idx];
      this->soundBuffersToPlay[idx] = -1;
      if (this->duplicateSoundBuffers[iVar1] != (LPDIRECTSOUNDBUFFER)0x0) {
        (*this->duplicateSoundBuffers[iVar1]->lpVtbl->Stop)(this->duplicateSoundBuffers[iVar1]);
        (*this->duplicateSoundBuffers[iVar1]->lpVtbl->SetCurrentPosition)
                  (this->duplicateSoundBuffers[iVar1],0);
        (*this->duplicateSoundBuffers[iVar1]->lpVtbl->Play)
                  (this->duplicateSoundBuffers[iVar1],0,0,0);
      }
    }
  }
  return;
}

