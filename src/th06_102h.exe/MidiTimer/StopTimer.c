
int __thiscall th06::MidiTimer::StopTimer(MidiTimer *this)

{
  if (this->timerId != 0) {
    timeKillEvent(this->timerId);
  }
  timeEndPeriod((this->timeCaps).wPeriodMin);
  this->timerId = 0;
  return 1;
}

