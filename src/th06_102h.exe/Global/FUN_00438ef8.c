
void __thiscall FUN_00438ef8(int param_1_00,int param_2,int param_3,int param_4,int param_5)

{
  if (param_4 == param_5) {
    if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
      *(undefined4 *)(param_2 + 0x7c) = 0x800000ff;
    }
    else if (*(short *)(param_2 + 0xb2) < 0x122) {
      AnmManager::FUN_004323a0(g_AnmManager,(AnmVm *)param_2,*(short *)(param_2 + 0xb2) + 0x7a);
    }
    else {
      AnmManager::FUN_004323a0(g_AnmManager,(AnmVm *)param_2,*(short *)(param_2 + 0xb2) + 0x73);
    }
    *(undefined4 *)(param_2 + 0xe4) = 0xc0000000;
    *(undefined4 *)(param_2 + 0xe8) = 0xc0000000;
    *(undefined4 *)(param_2 + 0xec) = 0;
  }
  else {
    if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
      *(undefined4 *)(param_2 + 0x7c) = 0x80202050;
    }
    else {
      AnmManager::FUN_004323a0(g_AnmManager,(AnmVm *)param_2,(int)*(short *)(param_2 + 0xb2));
    }
    *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x18) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe4) = 0;
    *(undefined4 *)(param_2 + 0xe8) = 0;
    *(undefined4 *)(param_2 + 0xec) = 0;
  }
  if (param_3 == *(int *)(param_1_00 + 0x81a0)) {
    if ((g_GameContext.cfg.opts & 1) == 0) {
      *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xffffff | 0xff000000;
    }
    else {
      *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xffffff | 0xff000000;
    }
    *(float *)(param_2 + 0xe4) = *(float *)(param_2 + 0xe4) + -4.0;
    *(float *)(param_2 + 0xe8) = *(float *)(param_2 + 0xe8) + -4.0;
    *(float *)(param_2 + 0xec) = *(float *)(param_2 + 0xec) + 0.0;
  }
  else {
    if ((g_GameContext.cfg.opts & 1) == 0) {
      *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xffffff | 0x80000000;
    }
    else {
      *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) & 0xffffff | 0x80000000;
    }
    *(float *)(param_2 + 0xe4) = *(float *)(param_2 + 0xe4) + 0.0;
    *(float *)(param_2 + 0xe8) = *(float *)(param_2 + 0xe8) + 0.0;
    *(float *)(param_2 + 0xec) = *(float *)(param_2 + 0xec) + 0.0;
  }
  return;
}

