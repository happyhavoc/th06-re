
undefined4 * __thiscall MidiOutput::FUN_00421c30(MidiOutput *this)

{
  this->vtbl = (MidiOutputVtbl *)&PTR__AnmManager_0046b564;
  timeGetDevCaps(&this->timeCaps,8);
  this->timerId = 0;
  return &this->vtbl;
}

