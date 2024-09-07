
undefined4 * __thiscall th06::MidiOutput::MidiOutput(MidiOutput *this)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004691c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  MidiTimer::MidiTimer(&this->timer);
  local_8 = 0;
  (this->timer).vtbl = (MidiOutputVtbl *)&PTR_OnTimerElapsed_0046b568;
  MidiDevice::MidiDevice(&this->midiOutDev);
  this->tracks = (MidiTrack *)0x0;
  this->divisons = 0;
  this->unk120 = 0;
  this->num_tracks = 0;
  this->unk2c4 = 0;
  this->unk2c8 = 0.0;
  this->unk2cc = 0;
  this->unk2d0 = 0;
  this->unk2d4 = 0;
  this->unk2d8 = 0;
  this->unk2dc = 0;
  this->unk2e0 = 0;
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    this->midiFileData[local_14] = (byte *)0x0;
  }
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    this->midiHeaders[local_18] = (MIDIHDR *)0x0;
  }
  this->midiHeadersCursor = 0;
  ExceptionList = local_10;
  return (undefined4 *)this;
}

