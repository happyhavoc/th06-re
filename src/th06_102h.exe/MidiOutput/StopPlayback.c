
ZunResult __thiscall th06::MidiOutput::StopPlayback(MidiOutput *this)

{
  ZunResult ZVar1;
  int local_8;
  
  if (this->tracks == (MidiTrack *)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else {
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      if (this->midiHeaders[this->midiHeadersCursor] != (MIDIHDR *)0x0) {
        UnprepareHeader(this,this->midiHeaders[this->midiHeadersCursor]);
      }
    }
    MidiTimer::StopTimer(&this->timer);
    MidiDevice::Close(&this->midiOutDev);
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

