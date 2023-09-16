
undefined4 __thiscall MidiOutput::UnprepareHeader(MidiOutput *this,LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  int local_c;
  
  if (param_1 == (LPMIDIHDR)0x0) {
    DebugPrint2("error :\n");
  }
  if (this->midiOutDev == (HMIDIOUT)0x0) {
    DebugPrint2("error :\n");
  }
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return 0xffffffff;
    }
    if ((&this->midiHeaders)[local_c] == param_1) break;
    local_c = local_c + 1;
  }
  (&this->midiHeaders)[local_c] = (MIDIHDR *)0x0;
  MVar1 = midiOutUnprepareHeader(this->midiOutDev,param_1,0x40);
  if (MVar1 != 0) {
    DebugPrint2("error :\n");
  }
  _free(param_1->lpData);
  _free(param_1);
  return 0;
}
