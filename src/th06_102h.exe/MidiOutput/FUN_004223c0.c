
void __thiscall MidiOutput::FUN_004223c0(MidiOutput *this)

{
  uint uVar1;
  MidiTrack *tracksPtr;
  int local_8;
  
  tracksPtr = this->tracks;
  this->unk2c8 = 1.0;
  this->unk2dc = 0;
  this->unk2e0 = 0;
  this->unk128 = 0;
  this->unk12c = 0;
  this->unk130 = 0;
  this->unk134 = 0;
  for (local_8 = 0; local_8 < this->num_tracks; local_8 = local_8 + 1) {
    tracksPtr->curTrackDataCursor = tracksPtr->trackData;
    tracksPtr->unk18 = tracksPtr->curTrackDataCursor;
    tracksPtr->track_playing = 1;
    uVar1 = FUN_00421d90(&tracksPtr->curTrackDataCursor);
    tracksPtr->unk4 = uVar1;
    tracksPtr = tracksPtr + 1;
  }
  return;
}

