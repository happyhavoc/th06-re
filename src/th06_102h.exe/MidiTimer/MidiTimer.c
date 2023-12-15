
undefined4 * __thiscall MidiTimer::MidiTimer(MidiTimer *this)

{
  this->vtbl = (MidiOutputVtbl *)&PTR__AnmManager_0046b564;
  timeGetDevCaps(&this->timeCaps,8);
  this->timerId = 0;
  return &this->vtbl;
}

