
undefined4 __fastcall FUN_00421b50(HMIDIOUT *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == (HMIDIOUT)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    midiOutReset(*param_1);
    midiOutClose(*param_1);
    *param_1 = (HMIDIOUT)0x0;
    uVar1 = 0;
  }
  return uVar1;
}

