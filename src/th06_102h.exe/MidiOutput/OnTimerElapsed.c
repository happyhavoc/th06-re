
void __thiscall th06::MidiOutput::OnTimerElapsed(MidiOutput *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_14;
  int trackIndex;
  bool trackLoaded;
  
  trackLoaded = false;
  lVar4 = __allmul((longlong)this->volume,(longlong)this->divisons);
  uVar5 = __allmul(lVar4,1000);
  uVar5 = __aulldiv(uVar5,(longlong)this->tempo);
  local_14._0_4_ = *(uint *)&this->unk130 + (uint)uVar5;
  local_14._4_4_ =
       *(int *)((int)&this->unk130 + 4) + (int)(uVar5 >> 0x20) +
       (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar5);
  if (this->fadeOutFlag != 0) {
    if (this->fadeOutInterval <= this->fadeOutElapsedMS) {
      this->fadeOutVolumeMultiplier = 0.0;
      return;
    }
    this->fadeOutVolumeMultiplier =
         1.0 - (float)this->fadeOutElapsedMS / (float)this->fadeOutInterval;
    uVar2 = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    if (uVar2 != this->fadeOutLastSetVolume) {
      FadeOutSetVolume(this,0);
    }
    uVar2 = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    this->fadeOutLastSetVolume = uVar2;
    this->fadeOutElapsedMS = this->fadeOutElapsedMS + 1;
  }
  trackIndex = 0;
  do {
    if (this->num_tracks <= trackIndex) {
      uVar2 = *(uint *)&this->volume;
      iVar1 = *(int *)((int)&this->volume + 4);
      *(uint *)&this->volume = uVar2 + 1;
      *(uint *)((int)&this->volume + 4) = iVar1 + (uint)(0xfffffffe < uVar2);
      if (!trackLoaded) {
        LoadTracks(this);
      }
      return;
    }
    if (this->tracks[trackIndex].trackPlaying != 0) {
      trackLoaded = true;
      while (this->tracks[trackIndex].trackPlaying != 0) {
        uVar2 = this->tracks[trackIndex].trackLengthOther;
        uVar3 = (int)uVar2 >> 0x1f;
        if ((local_14._4_4_ < uVar3) || ((local_14._4_4_ <= uVar3 && ((uint)local_14 < uVar2))))
        break;
        ProcessMsg(this,this->tracks + trackIndex);
        lVar4 = __allmul((longlong)this->volume,(longlong)this->divisons);
        uVar5 = __allmul(lVar4,1000);
        uVar5 = __aulldiv(uVar5,(longlong)this->tempo);
        local_14._0_4_ = *(uint *)&this->unk130 + (uint)uVar5;
        local_14._4_4_ =
             *(int *)((int)&this->unk130 + 4) + (int)(uVar5 >> 0x20) +
             (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar5);
      }
    }
    trackIndex = trackIndex + 1;
  } while( true );
}

