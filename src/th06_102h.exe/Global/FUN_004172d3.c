
undefined4 __fastcall FUN_004172d3(int param_1)

{
  undefined4 local_c;
  
  if ((*(short *)(*(int *)(param_1 + 4) + 0x24d4) < 0) ||
     ((*(uint *)(*(int *)(param_1 + 4) + 0x24a4) >> 0xd & 1) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}
