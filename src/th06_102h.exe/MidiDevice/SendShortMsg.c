
bool __thiscall
th06::MidiDevice::SendShortMsg(MidiDevice *this,byte midiStatus,byte firstByte,byte secondByte)

{
  BYTE aBVar1 [4];
  MMRESULT res;
  bool hasError;
  BYTE dwMsg [4];
  
  aBVar1 = dwMsg;
  if (this->handle == (HMIDIOUT)0x0) {
    hasError = false;
  }
  else {
    dwMsg[1] = firstByte;
    dwMsg[0] = midiStatus;
                    /* Ghidra is drunk here:
                       - Order is wrong (should be 0, 1, 2)
                       - dwMsg[3] is never set. */
    dwMsg[3] = aBVar1[3];
    dwMsg[2] = secondByte;
    res = midiOutShortMsg(this->handle,(DWORD)dwMsg);
    hasError = res != 0;
  }
  return hasError;
}

