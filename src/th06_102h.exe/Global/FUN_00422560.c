
undefined4 FUN_00422560(LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  int in_ECX;
  int local_c;
  
  if (param_1 == (LPMIDIHDR)0x0) {
    DebugPrint2("error :\n");
  }
  if (*(int *)(in_ECX + 0x13c) == 0) {
    DebugPrint2("error :\n");
  }
  local_c = 0;
  while( true ) {
    if (0x1f < local_c) {
      return 0xffffffff;
    }
    if (*(LPMIDIHDR *)(in_ECX + 0x10 + local_c * 4) == param_1) break;
    local_c = local_c + 1;
  }
  *(undefined4 *)(in_ECX + 0x10 + local_c * 4) = 0;
  MVar1 = midiOutUnprepareHeader(*(HMIDIOUT *)(in_ECX + 0x13c),param_1,0x40);
  if (MVar1 != 0) {
    DebugPrint2("error :\n");
  }
  _free(param_1->lpData);
  _free(param_1);
  return 0;
}

