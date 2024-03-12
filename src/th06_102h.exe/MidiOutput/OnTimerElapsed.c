
void __thiscall MidiOutput::OnTimerElapsed(MidiOutput *this)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar1 = false;
  uVar4 = __allmul(this->unk128,this->unk12c,this->divisons,this->divisons >> 0x1f);
  uVar4 = __allmul(uVar4,1000,0);
  uVar4 = __aulldiv(uVar4,this->unk120,this->unk120 >> 0x1f);
  local_14 = this->unk130 + (uint)uVar4;
  local_10 = this->unk134 + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(this->unk130,(uint)uVar4)
  ;
  if (this->unk2e0 != 0) {
    if ((int)this->unk2e4 <= (int)this->unk2e8) {
      this->unk2c8 = 0.0;
      return;
    }
    this->unk2c8 = 1.0 - (float)this->unk2e8 / (float)this->unk2e4;
    uVar2 = __ftol2(this->unk2c8 * 128.0);
    if (uVar2 != this->unk2cc) {
      FUN_00423260(this,0);
    }
    uVar2 = __ftol2(this->unk2c8 * 128.0);
    this->unk2cc = uVar2;
    this->unk2e8 = this->unk2e8 + 1;
  }
  local_8 = 0;
  do {
    if (this->num_tracks <= local_8) {
      uVar2 = this->unk128;
      this->unk128 = uVar2 + 1;
      this->unk12c = this->unk12c + (uint)(0xfffffffe < uVar2);
      if (!bVar1) {
        FUN_004223c0(this);
      }
      return;
    }
    if (this->tracks[local_8].track_playing != 0) {
      bVar1 = true;
      while (this->tracks[local_8].track_playing != 0) {
        uVar2 = this->tracks[local_8].unk4;
        uVar3 = (int)uVar2 >> 0x1f;
        if ((local_10 < uVar3) || ((local_10 <= uVar3 && (local_14 < uVar2)))) break;
        FUN_00422900(this,this->tracks + local_8);
        uVar4 = __allmul(this->unk128,this->unk12c,this->divisons,this->divisons >> 0x1f);
        uVar4 = __allmul(uVar4,1000,0);
        uVar4 = __aulldiv(uVar4,this->unk120,this->unk120 >> 0x1f);
        local_14 = this->unk130 + (uint)uVar4;
        local_10 = this->unk134 + (int)((ulonglong)uVar4 >> 0x20) +
                   (uint)CARRY4(this->unk130,(uint)uVar4);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

