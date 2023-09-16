
undefined4 __thiscall MidiOutput::StopTimer(MidiOutput *this)

{
  if (this->timerId != 0) {
    timeKillEvent(this->timerId);
  }
  timeEndPeriod((this->timeCaps).wPeriodMin);
  this->timerId = 0;
  return 1;
}

