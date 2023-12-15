
UINT __thiscall MidiTimer::FUN_00421c90(MidiTimer *this,UINT delay,LPTIMECALLBACK cb,DWORD_PTR data)

{
  MMRESULT MVar1;
  
  StopTimer(this);
  timeBeginPeriod((this->timeCaps).wPeriodMin);
  if (cb == (LPTIMECALLBACK)0x0) {
    MVar1 = timeSetEvent(delay,(this->timeCaps).wPeriodMin,DefaultTimerCallback,(DWORD_PTR)this,
                         TIME_PERIODIC);
    this->timerId = MVar1;
  }
  else {
    MVar1 = timeSetEvent(delay,(this->timeCaps).wPeriodMin,cb,data,TIME_PERIODIC);
    this->timerId = MVar1;
  }
  return this->timerId;
}

