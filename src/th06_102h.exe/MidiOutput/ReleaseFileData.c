
void __thiscall MidiOutput::ReleaseFileData(MidiOutput *this,uint param_1)

{
  _free(this->midiFileData[param_1]);
  this->midiFileData[param_1] = (byte *)0x0;
  return;
}

