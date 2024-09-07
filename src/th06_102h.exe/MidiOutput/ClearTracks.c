
void __thiscall th06::MidiOutput::ClearTracks(MidiOutput *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < this->num_tracks; local_8 = local_8 + 1) {
    _free(this->tracks[local_8].trackData);
  }
  _free(this->tracks);
  this->tracks = (MidiTrack *)0x0;
  this->num_tracks = 0;
  return;
}

