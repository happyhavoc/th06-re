
void __thiscall th06::MidiOutput::LoadTracks(MidiOutput *this)

{
  uint length;
  MidiTrack *track;
  int local_8;
  
  track = this->tracks;
  this->fadeOutVolumeMultiplier = 1.0;
  this->unk2dc = 0;
  this->fadeOutFlag = 0;
  *(undefined4 *)&this->volume = 0;
  *(undefined4 *)((int)&this->volume + 4) = 0;
  *(undefined4 *)&this->unk130 = 0;
  *(undefined4 *)((int)&this->unk130 + 4) = 0;
  for (local_8 = 0; local_8 < this->num_tracks; local_8 = local_8 + 1) {
    track->curTrackDataCursor = (byte *)track->trackData;
    track->startTrackDataMaybe = track->curTrackDataCursor;
    track->trackPlaying = 1;
    length = SkipVariableLength(&track->curTrackDataCursor);
    track->trackLengthOther = length;
    track = track + 1;
  }
  return;
}

