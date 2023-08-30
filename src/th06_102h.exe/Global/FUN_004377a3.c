
void FUN_004377a3(Unknown *param_1,int param_2,int param_3,uint param_4,uint param_5,short param_6)

{
  if (param_2 == param_3) {
    if (((uint)g_GameContext.cfg.render_opts >> 8 & 1 | g_GameContext.cfg.render_opts & 1U) == 0) {
      param_1->field14_0x7c = param_4;
    }
    else {
      FUN_004323a0(VERY_BIG_STRUCT,param_1,*(short *)&param_1->field_0xb2 + param_6);
      param_1->field14_0x7c = param_4 & 0xff000000 | 0xffffff;
    }
    param_1[1].field8_0x20 = 0xc0800000;
    param_1[1].field9_0x24 = 0xc0800000;
    param_1[1].field10_0x28 = 0;
  }
  else {
    if (((uint)g_GameContext.cfg.render_opts >> 8 & 1 | g_GameContext.cfg.render_opts & 1U) == 0) {
      param_1->field14_0x7c = param_5;
    }
    else {
      FUN_004323a0(VERY_BIG_STRUCT,param_1,*(short *)&param_1->field_0xb2);
      param_1->field14_0x7c = param_5 & 0xff000000 | 0xffffff;
    }
    param_1[1].field8_0x20 = 0;
    param_1[1].field9_0x24 = 0;
    param_1[1].field10_0x28 = 0;
  }
  return;
}

