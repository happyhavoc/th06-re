
void __thiscall th06::MidiOutput::LoadTracks(MidiOutput *this)

{
  uint uVar1;
  MidiTrack *tracksPtr;
  int local_8;
  
  tracksPtr = this->tracks;
  this->fadeOutVolumeMultiplier = 1.0;
  this->unk2dc = 0;
  this->fadeOutFlag = 0;
  this->unk128 = 0;
  this->unk12c = 0;
  this->unk130 = 0;
  this->unk134 = 0;
  for (local_8 = 0; local_8 < this->num_tracks; local_8 = local_8 + 1) {
    tracksPtr->curTrackDataCursor = tracksPtr->trackData;
    tracksPtr->startTrackDataMaybe = tracksPtr->curTrackDataCursor;
    tracksPtr->trackPlaying = 1;
    uVar1 = SkipLongMsgAndGetSize(&tracksPtr->curTrackDataCursor);
    tracksPtr->trackLengthMaybe = uVar1;
    tracksPtr = tracksPtr + 1;
  }
  return;
}

