
void MidiTimer::DefaultTimerCallback(uint uTimerID,uint uMsg,MidiOutput *dwUser)

{
  (**(code **)(dwUser->timer).vtbl)();
  return;
}

