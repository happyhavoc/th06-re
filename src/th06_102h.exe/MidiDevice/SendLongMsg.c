
BOOL __thiscall th06::MidiDevice::SendLongMsg(MidiDevice *this,LPMIDIHDR pmh)

{
  BOOL uVar1;
  MMRESULT MVar1;
  
  if (this->handle == (HMIDIOUT)0x0) {
    uVar1 = 0;
  }
  else {
    MVar1 = midiOutPrepareHeader(this->handle,pmh,0x40);
    if (MVar1 == 0) {
      MVar1 = midiOutLongMsg(this->handle,pmh,0x40);
      uVar1 = (BOOL)(MVar1 != 0);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

