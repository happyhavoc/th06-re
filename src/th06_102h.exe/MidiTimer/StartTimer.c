
UINT __thiscall
th06::MidiTimer::StartTimer(MidiTimer *this,UINT delay,LPTIMECALLBACK cb,DWORD_PTR data)

{
  MMRESULT timer_id;
  
  StopTimer(this);
  timeBeginPeriod((this->timeCaps).wPeriodMin);
  if (cb == (LPTIMECALLBACK)0x0) {
    timer_id = timeSetEvent(delay,(this->timeCaps).wPeriodMin,DefaultTimerCallback,(DWORD_PTR)this,
                            TIME_PERIODIC);
    this->timerId = timer_id;
  }
  else {
    timer_id = timeSetEvent(delay,(this->timeCaps).wPeriodMin,cb,data,TIME_PERIODIC);
    this->timerId = timer_id;
  }
  return this->timerId;
}

