
undefined4 * __thiscall MidiDevice::MidiDevice(MidiDevice *this)

{
  this->handle = (HMIDIOUT)0x0;
  this->deviceID = 0;
  return &this->handle;
}

