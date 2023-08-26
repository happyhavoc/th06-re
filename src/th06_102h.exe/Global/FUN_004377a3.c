
void FUN_004377a3(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  if (param_2 == param_3) {
    if (((uint)g_GameContext.cfg.render_opts >> 8 & 1 | g_GameContext.cfg.render_opts & 1U) == 0) {
      *(uint *)(param_1 + 0x7c) = param_4;
    }
    else {
      FUN_004323a0(param_1,*(short *)(param_1 + 0xb2) + param_6);
      *(uint *)(param_1 + 0x7c) = param_4 & 0xff000000 | 0xffffff;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0xc0800000;
    *(undefined4 *)(param_1 + 0xe8) = 0xc0800000;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    if (((uint)g_GameContext.cfg.render_opts >> 8 & 1 | g_GameContext.cfg.render_opts & 1U) == 0) {
      *(uint *)(param_1 + 0x7c) = param_5;
    }
    else {
      FUN_004323a0(param_1,(int)*(short *)(param_1 + 0xb2));
      *(uint *)(param_1 + 0x7c) = param_5 & 0xff000000 | 0xffffff;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}

