
void __thiscall MidiTimer::~MidiTimer(MidiTimer *this)

{
  this->vtbl = (MidiOutputVtbl *)&PTR__AnmManager_0046b564;
  StopTimer(this);
  timeEndPeriod((this->timeCaps).wPeriodMin);
  return;
}

