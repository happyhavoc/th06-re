
undefined4 * __thiscall MidiOutput::MidiOutput(MidiOutput *this)

{
  int local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004691c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00421c30(this);
  local_8 = 0;
  this->vtbl = (MidiOutputVtbl *)&PTR_FUN_0046b568;
  MidiUnk::MidiUnk((MidiUnk *)&this->midiOutDev);
  this->unk = (MidiSample *)0x0;
  this->field135_0x11c = 0;
  this->field136_0x120 = 0;
  this->field130_0x114 = 0;
  this->field_0x2c4 = 0;
  this->field551_0x2c8 = 0.0;
  *(undefined4 *)&this->field_0x2cc = 0;
  *(undefined4 *)&this->field_0x2d0 = 0;
  *(undefined4 *)&this->field_0x2d4 = 0;
  *(undefined4 *)&this->field_0x2d8 = 0;
  *(undefined4 *)&this->field_0x2dc = 0;
  *(undefined4 *)&this->field_0x2e0 = 0;
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    this->midiFileData[local_14] = 0;
  }
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    (&this->midiHeaders)[local_18] = (MIDIHDR *)0x0;
  }
  this->field128_0x90 = 0;
  ExceptionList = local_10;
  return &this->vtbl;
}

