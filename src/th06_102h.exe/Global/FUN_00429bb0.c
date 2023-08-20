
void FUN_00429bb0(int param_1)

{
  float10 fVar1;
  int local_c;
  int local_8;
  
  local_c = param_1 + 0xa28;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (*(short *)(local_c + 0x14e) == 2) {
      if (*(short *)(local_c + 0x88) != 0) {
        fVar1 = (float10)FUN_0041e850(*(undefined4 *)(local_c + 0x13c),0x40490fdb);
        *(float *)(local_c + 8) = (float)((float10)1.570796 - fVar1);
      }
      *(undefined4 *)(local_c + 0x98) = 0x3ecccccd;
      FUN_00433590(local_c);
    }
    local_c = local_c + 0x158;
  }
  return;
}

