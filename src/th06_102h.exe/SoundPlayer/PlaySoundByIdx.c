
SoundPlayer * __thiscall SoundPlayer::PlaySoundByIdx(SoundPlayer *this,int soundIdx)

{
  SoundPlayer *pSVar1;
  SoundPlayer *local_8;
  short SFXToPlay;
  
  SFXToPlay = SOUND_BUFFER_IDX_VOL[soundIdx].unk;
  pSVar1 = (SoundPlayer *)soundIdx;
  for (local_8 = (SoundPlayer *)0x0;
      ((int)local_8 < 3 && (pSVar1 = local_8, -1 < this->soundBuffersToPlay[(int)local_8]));
      local_8 = (SoundPlayer *)((int)&(local_8->csoundmanager).m_pDS + 1)) {
    if (this->soundBuffersToPlay[(int)local_8] == soundIdx) {
      return this;
    }
    pSVar1 = this;
  }
  if ((int)local_8 < 3) {
    this->soundBuffersToPlay[(int)local_8] = soundIdx;
    this->unk_408[soundIdx] = (int)SFXToPlay;
    pSVar1 = this;
  }
  return pSVar1;
}

