
BOOL __thiscall th06::MidiDevice::FUN_00421b90(MidiDevice *this,LPMIDIHDR param_1)

{
  BOOL uVar1;
  MMRESULT MVar1;
  
  if (this->handle == (HMIDIOUT)0x0) {
    uVar1 = 0;
  }
  else {
    MVar1 = midiOutPrepareHeader(this->handle,param_1,0x40);
    if (MVar1 == 0) {
      MVar1 = midiOutLongMsg(this->handle,param_1,0x40);
      uVar1 = (BOOL)(MVar1 != 0);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

