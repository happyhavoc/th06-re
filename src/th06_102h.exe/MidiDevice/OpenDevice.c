
bool __thiscall th06::MidiDevice::OpenDevice(MidiDevice *this,uint uDeviceID)

{
  MMRESULT MVar1;
  
  if (this->handle != (HMIDIOUT)0x0) {
    if (this->deviceID == uDeviceID) {
      return false;
    }
    Close(this);
  }
  this->deviceID = uDeviceID;
  MVar1 = midiOutOpen(&this->handle,uDeviceID,(DWORD_PTR)g_Supervisor.hwndGameWindow,0,
                      CALLBACK_WINDOW);
  return MVar1 != 0;
}

