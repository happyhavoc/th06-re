
void FUN_004377a3(AnmVm *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  if (param_2 == param_3) {
    if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
      param_1->color = param_4;
    }
    else {
      AnmManager::FUN_004323a0(g_AnmManager,param_1,param_1->anotherSpriteNumber + param_6);
      param_1->color = param_4 & 0xff000000 | 0xffffff;
    }
    (param_1->pos2).x = -4.0;
    (param_1->pos2).y = -4.0;
    (param_1->pos2).z = 0.0;
  }
  else {
    if ((g_GameContext.cfg.opts >> 8 & 1 | g_GameContext.cfg.opts & 1) == 0) {
      param_1->color = param_5;
    }
    else {
      AnmManager::FUN_004323a0(g_AnmManager,param_1,(int)param_1->anotherSpriteNumber);
      param_1->color = param_5 & 0xff000000 | 0xffffff;
    }
    (param_1->pos2).x = 0.0;
    (param_1->pos2).y = 0.0;
    (param_1->pos2).z = 0.0;
  }
  return;
}

