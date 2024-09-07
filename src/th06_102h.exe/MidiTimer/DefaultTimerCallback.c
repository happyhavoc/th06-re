
void th06::MidiTimer::DefaultTimerCallback(uint uTimerID,uint uMsg,MidiOutput *dwUser)

{
  (**(code **)(dwUser->timer).vtbl)();
  return;
}

