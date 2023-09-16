
void __thiscall FUN_00423260(int param_1_00,int param_2)

{
  long lVar1;
  int local_18;
  undefined local_10;
  int local_c;
  
  if (*(int *)(param_1_00 + 0x2d4) == 0) {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      lVar1 = __ftol2((double)((float)(uint)*(byte *)(param_1_00 + 0x169 + local_c * 0x17) *
                              *(float *)(param_1_00 + 0x2c8)));
      local_18 = lVar1 + param_2;
      if (local_18 < 0) {
        local_18 = 0;
      }
      else if (0x7f < local_18) {
        local_18 = 0x7f;
      }
      local_10 = (undefined)local_18;
      FUN_00421be0((HMIDIOUT *)(param_1_00 + 0x13c),(char)local_c + -0x50,7,local_10);
    }
  }
  return;
}

