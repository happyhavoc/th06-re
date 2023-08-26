
void FUN_004071b0(void *param_1)

{
  float fVar1;
  float10 fVar2;
  int local_c;
  void *local_8;
  
  FUN_00406020();
  local_8 = (void *)((int)param_1 + 0x76e4);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    fVar1 = (((float)local_c * 0.6283185) / 3.0 - 3.141593) + 1.256637;
    *(undefined4 *)((int)local_8 + 0x90) = *(undefined4 *)((int)param_1 + 0x440);
    *(undefined4 *)((int)local_8 + 0x94) = *(undefined4 *)((int)param_1 + 0x444);
    *(undefined4 *)((int)local_8 + 0x98) = *(undefined4 *)((int)param_1 + 0x448);
    fVar2 = (float10)FUN_0045bda4((double)fVar1);
    *(float *)((int)local_8 + 0x90) =
         ((float)fVar2 * *(float *)(*(int *)((int)local_8 + 0xc0) + 0x2c) *
         *(float *)((int)local_8 + 0x18)) / 2.0 + *(float *)((int)local_8 + 0x90);
    fVar2 = (float10)FUN_0045bcf4((double)fVar1);
    *(float *)((int)local_8 + 0x94) =
         ((float)fVar2 * *(float *)(*(int *)((int)local_8 + 0xc0) + 0x2c) *
         *(float *)((int)local_8 + 0x18)) / 2.0 + *(float *)((int)local_8 + 0x94);
    fVar2 = (float10)FUN_0041e850(1.570796 - fVar1);
    *(float *)((int)local_8 + 8) = (float)fVar2;
    *(float *)((int)local_8 + 0x90) = VIEWPORT_X + *(float *)((int)local_8 + 0x90);
    *(float *)((int)local_8 + 0x94) = VIEWPORT_Y + *(float *)((int)local_8 + 0x94);
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    FUN_00432cc0(local_8);
    local_8 = (void *)((int)local_8 + 0x110);
  }
  return;
}

