
void __thiscall th06::MidiOutput::OnTimerElapsed(MidiOutput *this)

{
  int iVar1;
  uint fadeOutVol;
  uint uVar2;
  undefined8 uVar3;
  uint local_14;
  uint local_10;
  int trackIndex;
  bool trackLoaded;
  
  trackLoaded = false;
  uVar3 = __allmul(*(undefined4 *)&this->volume,*(undefined4 *)((int)&this->volume + 4),
                   this->divisons,this->divisons >> 0x1f);
  uVar3 = __allmul(uVar3,1000,0);
  uVar3 = __aulldiv(uVar3,this->tempo,this->tempo >> 0x1f);
  local_14 = *(uint *)&this->unk130 + (uint)uVar3;
  local_10 = *(int *)((int)&this->unk130 + 4) + (int)((ulonglong)uVar3 >> 0x20) +
             (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar3);
  if (this->fadeOutFlag != 0) {
    if (this->fadeOutInterval <= this->fadeOutElapsedMS) {
      this->fadeOutVolumeMultiplier = 0.0;
      return;
    }
    this->fadeOutVolumeMultiplier =
         1.0 - (float)this->fadeOutElapsedMS / (float)this->fadeOutInterval;
    fadeOutVol = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    if (fadeOutVol != this->fadeOutLastSetVolume) {
      FadeOutSetVolume(this,0);
    }
    fadeOutVol = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    this->fadeOutLastSetVolume = fadeOutVol;
    this->fadeOutElapsedMS = this->fadeOutElapsedMS + 1;
  }
  trackIndex = 0;
  do {
    if (this->num_tracks <= trackIndex) {
      fadeOutVol = *(uint *)&this->volume;
      iVar1 = *(int *)((int)&this->volume + 4);
      *(uint *)&this->volume = fadeOutVol + 1;
      *(uint *)((int)&this->volume + 4) = iVar1 + (uint)(0xfffffffe < fadeOutVol);
      if (!trackLoaded) {
        LoadTracks(this);
      }
      return;
    }
    if (this->tracks[trackIndex].trackPlaying != 0) {
      trackLoaded = true;
      while (this->tracks[trackIndex].trackPlaying != 0) {
        fadeOutVol = this->tracks[trackIndex].trackLengthOther;
        uVar2 = (int)fadeOutVol >> 0x1f;
        if ((local_10 < uVar2) || ((local_10 <= uVar2 && (local_14 < fadeOutVol)))) break;
        ProcessMsg(this,this->tracks + trackIndex);
        uVar3 = __allmul(*(undefined4 *)&this->volume,*(undefined4 *)((int)&this->volume + 4),
                         this->divisons,this->divisons >> 0x1f);
        uVar3 = __allmul(uVar3,1000,0);
        uVar3 = __aulldiv(uVar3,this->tempo,this->tempo >> 0x1f);
        local_14 = *(uint *)&this->unk130 + (uint)uVar3;
        local_10 = *(int *)((int)&this->unk130 + 4) + (int)((ulonglong)uVar3 >> 0x20) +
                   (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar3);
      }
    }
    trackIndex = trackIndex + 1;
  } while( true );
}

