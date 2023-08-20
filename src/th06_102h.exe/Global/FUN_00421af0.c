
bool FUN_00421af0(HMIDIOUT param_1)

{
  MMRESULT MVar1;
  LPHMIDIOUT in_ECX;
  
  if (*in_ECX != (HMIDIOUT)0x0) {
    if (in_ECX[1] == param_1) {
      return false;
    }
    FUN_00421b50();
  }
  in_ECX[1] = param_1;
  MVar1 = midiOutOpen(in_ECX,(UINT)param_1,g_GameContext._68_4_,0,0x10000);
  return MVar1 != 0;
}

