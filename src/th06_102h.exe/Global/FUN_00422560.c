
undefined4 __thiscall FUN_00422560(int param_1_00,LPMIDIHDR param_2)

{
  MMRESULT MVar1;
  int local_c;
  
  if (param_2 == (LPMIDIHDR)0x0) {
    DebugPrint2("error :\n");
  }
  if (*(int *)(param_1_00 + 0x13c) == 0) {
    DebugPrint2("error :\n");
  }
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return 0xffffffff;
    }
    if (*(LPMIDIHDR *)(param_1_00 + 0x10 + local_c * 4) == param_2) break;
    local_c = local_c + 1;
  }
  *(undefined4 *)(param_1_00 + 0x10 + local_c * 4) = 0;
  MVar1 = midiOutUnprepareHeader(*(HMIDIOUT *)(param_1_00 + 0x13c),param_2,0x40);
  if (MVar1 != 0) {
    DebugPrint2("error :\n");
  }
  _free(param_2->lpData);
  _free(param_2);
  return 0;
}

