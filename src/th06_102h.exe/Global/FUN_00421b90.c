
bool FUN_00421b90(LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  HMIDIOUT *in_ECX;
  bool bVar2;
  
  if (*in_ECX == (HMIDIOUT)0x0) {
    bVar2 = false;
  }
  else {
    MVar1 = midiOutPrepareHeader(*in_ECX,param_1,0x40);
    if (MVar1 == 0) {
      MVar1 = midiOutLongMsg(*in_ECX,param_1,0x40);
      bVar2 = MVar1 != 0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}

