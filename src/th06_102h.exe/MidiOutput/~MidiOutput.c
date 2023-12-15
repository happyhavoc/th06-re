
void __thiscall MidiOutput::~MidiOutput(MidiOutput *this)

{
  int local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_004691f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (this->timer).vtbl = (MidiOutputVtbl *)&PTR_FUN_0046b568;
  local_8 = 1;
  StopPlayback(this);
  ClearTracks(this);
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    UnloadFile(this,local_14);
  }
  local_8 = local_8 & 0xffffff00;
  MidiDevice::~MidiDevice(&this->midiOutDev);
  local_8 = 0xffffffff;
  MidiTimer::~MidiTimer(&this->timer);
  ExceptionList = local_10;
  return;
}

