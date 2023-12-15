
bool __thiscall
MidiDevice::SendShortMsg
          (MidiDevice *this,undefined firstByte,undefined secondByte,undefined thirdByte)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  bool bVar3;
  undefined4 local_8;
  
  uVar1 = local_8;
  if (this->handle == (HMIDIOUT)0x0) {
    bVar3 = false;
  }
  else {
    MVar2 = midiOutShortMsg(this->handle,local_8);
    bVar3 = MVar2 != 0;
  }
  return bVar3;
}

