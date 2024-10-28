
void __thiscall th06::MidiOutput::OnTimerElapsed(MidiOutput *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar2 = false;
  uVar5 = __allmul(*(undefined4 *)&this->unk128,*(undefined4 *)((int)&this->unk128 + 4),
                   this->divisons,this->divisons >> 0x1f);
  uVar5 = __allmul(uVar5,1000,0);
  uVar5 = __aulldiv(uVar5,this->unk120,this->unk120 >> 0x1f);
  local_14 = *(uint *)&this->unk130 + (uint)uVar5;
  local_10 = *(int *)((int)&this->unk130 + 4) + (int)((ulonglong)uVar5 >> 0x20) +
             (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar5);
  if (this->fadeOutFlag != 0) {
    if (this->fadeOutInterval <= this->fadeOutElapsedMS) {
      this->fadeOutVolumeMultiplier = 0.0;
      return;
    }
    this->fadeOutVolumeMultiplier =
         1.0 - (float)this->fadeOutElapsedMS / (float)this->fadeOutInterval;
    uVar3 = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    if (uVar3 != this->fadeOutLastSetVolume) {
      FadeOutSetVolume(this,0);
    }
    uVar3 = __ftol2(this->fadeOutVolumeMultiplier * 128.0);
    this->fadeOutLastSetVolume = uVar3;
    this->fadeOutElapsedMS = this->fadeOutElapsedMS + 1;
  }
  local_8 = 0;
  do {
    if (this->num_tracks <= local_8) {
      uVar3 = *(uint *)&this->unk128;
      iVar1 = *(int *)((int)&this->unk128 + 4);
      *(uint *)&this->unk128 = uVar3 + 1;
      *(uint *)((int)&this->unk128 + 4) = iVar1 + (uint)(0xfffffffe < uVar3);
      if (!bVar2) {
        LoadTracks(this);
      }
      return;
    }
    if (this->tracks[local_8].trackPlaying != 0) {
      bVar2 = true;
      while (this->tracks[local_8].trackPlaying != 0) {
        uVar3 = this->tracks[local_8].trackLengthOther;
        uVar4 = (int)uVar3 >> 0x1f;
        if ((local_10 < uVar4) || ((local_10 <= uVar4 && (local_14 < uVar3)))) break;
        ProcessMsg(this,this->tracks + local_8);
        uVar5 = __allmul(*(undefined4 *)&this->unk128,*(undefined4 *)((int)&this->unk128 + 4),
                         this->divisons,this->divisons >> 0x1f);
        uVar5 = __allmul(uVar5,1000,0);
        uVar5 = __aulldiv(uVar5,this->unk120,this->unk120 >> 0x1f);
        local_14 = *(uint *)&this->unk130 + (uint)uVar5;
        local_10 = *(int *)((int)&this->unk130 + 4) + (int)((ulonglong)uVar5 >> 0x20) +
                   (uint)CARRY4(*(uint *)&this->unk130,(uint)uVar5);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

