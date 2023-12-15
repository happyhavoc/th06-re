
void MidiOutput::FUN_00422680(void)

{
  bool bVar1;
  uint uVar2;
  MidiOutput *in_ECX;
  uint uVar3;
  undefined8 uVar4;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar1 = false;
  uVar4 = __allmul(in_ECX->unk128,in_ECX->unk12c,in_ECX->divisons,in_ECX->divisons >> 0x1f);
  uVar4 = __allmul(uVar4,1000,0);
  uVar4 = __aulldiv(uVar4,in_ECX->unk120,in_ECX->unk120 >> 0x1f);
  local_14 = in_ECX->unk130 + (uint)uVar4;
  local_10 = in_ECX->unk134 + (int)((ulonglong)uVar4 >> 0x20) +
             (uint)CARRY4(in_ECX->unk130,(uint)uVar4);
  if (in_ECX->unk2e0 != 0) {
    if ((int)in_ECX->unk2e4 <= (int)in_ECX->unk2e8) {
      in_ECX->unk2c8 = 0.0;
      return;
    }
    in_ECX->unk2c8 = 1.0 - (float)in_ECX->unk2e8 / (float)in_ECX->unk2e4;
    uVar2 = __ftol2((double)(in_ECX->unk2c8 * 128.0));
    if (uVar2 != in_ECX->unk2cc) {
      FUN_00423260(in_ECX,0);
    }
    uVar2 = __ftol2((double)(in_ECX->unk2c8 * 128.0));
    in_ECX->unk2cc = uVar2;
    in_ECX->unk2e8 = in_ECX->unk2e8 + 1;
  }
  local_8 = 0;
  do {
    if (in_ECX->num_tracks <= local_8) {
      uVar2 = in_ECX->unk128;
      in_ECX->unk128 = uVar2 + 1;
      in_ECX->unk12c = in_ECX->unk12c + (uint)(0xfffffffe < uVar2);
      if (!bVar1) {
        FUN_004223c0(in_ECX);
      }
      return;
    }
    if (in_ECX->tracks[local_8].track_playing != 0) {
      bVar1 = true;
      while (in_ECX->tracks[local_8].track_playing != 0) {
        uVar2 = in_ECX->tracks[local_8].unk4;
        uVar3 = (int)uVar2 >> 0x1f;
        if ((local_10 < uVar3) || ((local_10 <= uVar3 && (local_14 < uVar2)))) break;
        FUN_00422900(in_ECX,in_ECX->tracks + local_8);
        uVar4 = __allmul(in_ECX->unk128,in_ECX->unk12c,in_ECX->divisons,in_ECX->divisons >> 0x1f);
        uVar4 = __allmul(uVar4,1000,0);
        uVar4 = __aulldiv(uVar4,in_ECX->unk120,in_ECX->unk120 >> 0x1f);
        local_14 = in_ECX->unk130 + (uint)uVar4;
        local_10 = in_ECX->unk134 + (int)((ulonglong)uVar4 >> 0x20) +
                   (uint)CARRY4(in_ECX->unk130,(uint)uVar4);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

