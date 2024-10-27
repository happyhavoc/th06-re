
ZunResult __thiscall th06::MidiOutput::UnprepareHeader(MidiOutput *this,LPMIDIHDR pmh)

{
  MMRESULT res;
  int i;
  
  if (pmh == (LPMIDIHDR)0x0) {
    utils::DebugPrint2("error :\n");
  }
  if ((this->midiOutDev).handle == (HMIDIOUT)0x0) {
    utils::DebugPrint2("error :\n");
  }
  i = 0;
  while( true ) {
    if (0x1f < i) {
      return ZUN_ERROR;
    }
    if (this->midiHeaders[i] == pmh) break;
    i = i + 1;
  }
  this->midiHeaders[i] = (MIDIHDR *)0x0;
  res = midiOutUnprepareHeader((this->midiOutDev).handle,pmh,0x40);
  if (res != 0) {
    utils::DebugPrint2("error :\n");
  }
  _free(pmh->lpData);
  _free(pmh);
  return ZUN_SUCCESS;
}

