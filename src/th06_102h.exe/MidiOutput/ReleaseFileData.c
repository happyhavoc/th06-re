
void __thiscall th06::MidiOutput::ReleaseFileData(MidiOutput *this,uint idx)

{
  _free(this->midiFileData[idx]);
  this->midiFileData[idx] = (byte *)0x0;
  return;
}

