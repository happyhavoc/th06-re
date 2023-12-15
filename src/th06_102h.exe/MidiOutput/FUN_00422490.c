
ZunResult __thiscall MidiOutput::FUN_00422490(MidiOutput *this)

{
  ZunResult ZVar1;
  
  if (this->tracks == (MidiTrack *)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else {
    FUN_004223c0(this);
    MidiDevice::OpenDevice(&this->midiOutDev,0xffffffff);
    MidiTimer::FUN_00421c90(&this->timer,1,(LPTIMECALLBACK)0x0,0);
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

