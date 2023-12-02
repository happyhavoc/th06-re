
undefined4 __thiscall MidiOutput::StopPlayback(MidiOutput *this)

{
  undefined4 uVar1;
  int local_8;
  
  if (this->unk == (MidiSample *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
      if ((&this->midiHeaders)[this->field128_0x90] != (MIDIHDR *)0x0) {
        UnprepareHeader(this,(&this->midiHeaders)[this->field128_0x90]);
      }
    }
    StopTimer(this);
    MidiDevice::Close((MidiDevice *)&this->midiOutDev);
    uVar1 = 0;
  }
  return uVar1;
}

