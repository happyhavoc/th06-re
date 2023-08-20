
void FUN_0040e1b0(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0xce4);
  if (0x1c1f < *(int *)(param_1 + 0xcf8)) {
    local_8 = 0;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *(float *)(param_1 + 0x9c0) = 2.0 - ((float)local_8 * 1.0) / 6000.0;
    *(int *)(param_1 + 0x9c8) = (local_8 * 0xf0) / 6000 + 0x28;
  }
  else {
    fVar1 = 320.0 - ((float)local_8 * 160.0) / 6000.0;
    fVar2 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0x9bc) = (float)(fVar2 * (float10)fVar1 + (float10)(192.0 - fVar1 / 2.0));
    fVar1 = 128.0 - ((float)local_8 * 64.0) / 6000.0;
    fVar2 = (float10)FUN_0041e820();
    *(float *)(param_1 + 0x9c0) = (float)(fVar2 * (float10)fVar1 + (float10)(96.0 - fVar1 / 2.0));
  }
  return;
}

