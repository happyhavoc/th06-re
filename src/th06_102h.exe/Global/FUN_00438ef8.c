
void FUN_00438ef8(int param_1,int param_2,int param_3,int param_4)

{
  int in_ECX;
  
  if (param_3 == param_4) {
    if (((uint)g_GameContext.cfg._52_4_ >> 8 & 1 | g_GameContext.cfg._52_4_ & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0x800000ff;
    }
    else if (*(short *)(param_1 + 0xb2) < 0x122) {
      FUN_004323a0(param_1,*(short *)(param_1 + 0xb2) + 0x7a);
    }
    else {
      FUN_004323a0(param_1,*(short *)(param_1 + 0xb2) + 0x73);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0xc0000000;
    *(undefined4 *)(param_1 + 0xe8) = 0xc0000000;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    if (((uint)g_GameContext.cfg._52_4_ >> 8 & 1 | g_GameContext.cfg._52_4_ & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0x80202050;
    }
    else {
      FUN_004323a0(param_1,(int)*(short *)(param_1 + 0xb2));
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (param_2 == *(int *)(in_ECX + 0x81a0)) {
    if ((g_GameContext.cfg._52_4_ & 1) == 0) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffff | 0xff000000;
    }
    else {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffff | 0xff000000;
    }
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + -4.0;
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) + -4.0;
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) + 0.0;
  }
  else {
    if ((g_GameContext.cfg._52_4_ & 1) == 0) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffff | 0x80000000;
    }
    else {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffff | 0x80000000;
    }
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 0.0;
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) + 0.0;
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) + 0.0;
  }
  return;
}

