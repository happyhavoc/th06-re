
ZunResult __thiscall th06::MidiDevice::Close(MidiDevice *this)

{
  ZunResult ZVar1;
  
  if (this->handle == (HMIDIOUT)0x0) {
    ZVar1 = ZUN_ERROR;
  }
  else {
    midiOutReset(this->handle);
    midiOutClose(this->handle);
    this->handle = (HMIDIOUT)0x0;
    ZVar1 = ZUN_SUCCESS;
  }
  return ZVar1;
}

