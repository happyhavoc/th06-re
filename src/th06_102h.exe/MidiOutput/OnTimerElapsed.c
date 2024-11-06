
void __thiscall th06::MidiOutput::OnTimerElapsed(MidiOutput *this)

{
  int iVar1;
  uint fadeOutVol;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_14;
  uint local_10;
  int trackIndex;
  bool trackLoaded;
  
  trackLoaded = false;
  lVar3 = __allmul((longlong)this->volume,(longlong)this->divisons);
  uVar4 = __allmul(lVar3,1000);
  uVar4 = __aulldiv(uVar4,(longlong)this->tempo);
  local_14 = *(uint *)&this->unk130 + (uint)uVar4;
  local_10 = *(int *)((int)&this->unk130 + 4) + (int)(uVar4 >> 0x20) +
             (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar4);
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
        lVar3 = __allmul((longlong)this->volume,(longlong)this->divisons);
        uVar4 = __allmul(lVar3,1000);
        uVar4 = __aulldiv(uVar4,(longlong)this->tempo);
        local_14 = *(uint *)&this->unk130 + (uint)uVar4;
        local_10 = *(int *)((int)&this->unk130 + 4) + (int)(uVar4 >> 0x20) +
                   (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar4);
      }
    }
    trackIndex = trackIndex + 1;
  } while( true );
}

