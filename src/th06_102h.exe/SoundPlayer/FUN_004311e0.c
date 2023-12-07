
undefined * __thiscall SoundPlayer::FUN_004311e0(SoundPlayer *this,int soundIdx)

{
  short sVar1;
  SoundPlayer *pSVar2;
  SoundPlayer *local_8;
  
  sVar1 = *(short *)&SOUND_BUFFER_IDX_VOL[soundIdx].field_0x6;
  pSVar2 = (SoundPlayer *)soundIdx;
  for (local_8 = (SoundPlayer *)0x0;
      ((int)local_8 < 3 && (pSVar2 = local_8, -1 < this->soundBuffersToPlay[(int)local_8]));
      local_8 = (SoundPlayer *)((int)&(local_8->directsound).directsound8 + 1)) {
    if (this->soundBuffersToPlay[(int)local_8] == soundIdx) {
      return (undefined *)this;
    }
    pSVar2 = this;
  }
  if ((int)local_8 < 3) {
    this->soundBuffersToPlay[(int)local_8] = soundIdx;
    *(int *)(&this->field_0x408 + soundIdx * 4) = (int)sVar1;
    pSVar2 = this;
  }
  return (undefined *)pSVar2;
}

