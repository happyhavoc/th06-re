
bool __thiscall MidiDevice::FUN_00421b90(MidiDevice *this,LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  bool bVar2;
  
  if (this->handle == (HMIDIOUT)0x0) {
    bVar2 = false;
  }
  else {
    MVar1 = midiOutPrepareHeader(this->handle,param_1,0x40);
    if (MVar1 == 0) {
      MVar1 = midiOutLongMsg(this->handle,param_1,0x40);
      bVar2 = MVar1 != 0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}

