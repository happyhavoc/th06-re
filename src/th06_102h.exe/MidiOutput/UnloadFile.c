
void __thiscall MidiOutput::UnloadFile(MidiOutput *this,int param_1)

{
  _free((void *)this->midiFileData[param_1]);
  this->midiFileData[param_1] = 0;
  return;
}

