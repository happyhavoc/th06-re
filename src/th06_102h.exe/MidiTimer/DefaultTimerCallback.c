
void th06::MidiTimer::DefaultTimerCallback
               (uint uTimerID,uint uMsg,DWORD_PTR dwUser,DWORD_PTR dw1,DWORD_PTR dw2)

{
  (***(code ***)dwUser)();
  return;
}

