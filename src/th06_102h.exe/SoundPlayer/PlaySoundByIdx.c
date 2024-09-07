
void __thiscall th06::SoundPlayer::PlaySoundByIdx(SoundPlayer *this,SoundIdx soundIdx,int unused)

{
  int local_8;
  short SFXToPlay;
  
  SFXToPlay = SOUND_BUFFER_IDX_VOL[soundIdx].unk;
  for (local_8 = 0; (local_8 < 3 && (-1 < this->soundBuffersToPlay[local_8])); local_8 = local_8 + 1
      ) {
    if (this->soundBuffersToPlay[local_8] == soundIdx) {
      return;
    }
  }
  if (local_8 < 3) {
    this->soundBuffersToPlay[local_8] = soundIdx;
    this->unk_408[soundIdx] = (int)SFXToPlay;
  }
  return;
}

