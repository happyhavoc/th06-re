
undefined4 __thiscall MidiDevice::Close(MidiDevice *this)

{
  undefined4 uVar1;
  
  if (this->midiOutDev == (HMIDIOUT)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    midiOutReset(this->midiOutDev);
    midiOutClose(this->midiOutDev);
    this->midiOutDev = (HMIDIOUT)0x0;
    uVar1 = 0;
  }
  return uVar1;
}

