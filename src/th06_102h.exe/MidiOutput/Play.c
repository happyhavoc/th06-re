
ZunResult __thiscall th06::MidiOutput::Play(MidiOutput *this)

{
  ZunResult ZVar1;
  
  if (this->tracks == (MidiTrack *)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else {
    LoadTracks(this);
    MidiDevice::OpenDevice(&this->midiOutDev,0xffffffff);
    MidiTimer::StartTimer(&this->timer,1,(LPTIMECALLBACK)0x0,0);
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

