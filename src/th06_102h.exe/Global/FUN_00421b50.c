
undefined4 FUN_00421b50(void)

{
  undefined4 uVar1;
  HMIDIOUT *in_ECX;
  
  if (*in_ECX == (HMIDIOUT)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    midiOutReset(*in_ECX);
    midiOutClose(*in_ECX);
    *in_ECX = (HMIDIOUT)0x0;
    uVar1 = 0;
  }
  return uVar1;
}

