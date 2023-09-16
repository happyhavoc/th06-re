
void __thiscall MidiOutput::FUN_004220b0(MidiOutput *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < this->field130_0x114; local_8 = local_8 + 1) {
    _free(*(void **)&this->unk[local_8].field_0x10);
  }
  _free(this->unk);
  this->unk = (MidiSample *)0x0;
  this->field130_0x114 = 0;
  return;
}

