
bool __thiscall FUN_00421af0(HMIDIOUT *param_1_00,HMIDIOUT param_2)

{
  MMRESULT MVar1;
  
  if (*param_1_00 != (HMIDIOUT)0x0) {
    if (param_1_00[1] == param_2) {
      return false;
    }
    MidiDevice::Close((MidiDevice *)param_1_00);
  }
  param_1_00[1] = param_2;
  MVar1 = midiOutOpen(param_1_00,(UINT)param_2,(DWORD_PTR)g_GameContext.hwndGameWindow,0,0x10000);
  return MVar1 != 0;
}

