
bool __thiscall
th06::MidiDevice::SendShortMsg(MidiDevice *this,byte firstByte,byte secondByte,byte thirdByte)

{
  DWORD DVar1;
  MMRESULT MVar2;
  bool bVar3;
  DWORD local_8;
  
  DVar1 = local_8;
  if (this->handle == (HMIDIOUT)0x0) {
    bVar3 = false;
  }
  else {
    MVar2 = midiOutShortMsg(this->handle,local_8);
    bVar3 = MVar2 != 0;
  }
  return bVar3;
}

