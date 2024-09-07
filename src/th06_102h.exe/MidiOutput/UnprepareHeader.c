
ZunResult __thiscall th06::MidiOutput::UnprepareHeader(MidiOutput *this,LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  int local_c;
  
  if (param_1 == (LPMIDIHDR)0x0) {
    DebugPrint2("error :\n");
  }
  if ((this->midiOutDev).handle == (HMIDIOUT)0x0) {
    DebugPrint2("error :\n");
  }
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return ZUN_ERROR;
    }
    if (this->midiHeaders[local_c] == param_1) break;
    local_c = local_c + 1;
  }
  this->midiHeaders[local_c] = (MIDIHDR *)0x0;
  MVar1 = midiOutUnprepareHeader((this->midiOutDev).handle,param_1,0x40);
  if (MVar1 != 0) {
    DebugPrint2("error :\n");
  }
  _free(param_1->lpData);
  _free(param_1);
  return ZUN_SUCCESS;
}

