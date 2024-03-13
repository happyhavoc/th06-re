
void FUN_004377a3(MainMenu *menu,int param_2,int param_3,uint param_4,uint param_5,int vm_amount)

{
  if (param_2 == param_3) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (menu->vm1).color.color = param_4;
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&menu->vm1,(menu->vm1).anotherSpriteNumber + vm_amount);
      (menu->vm1).color.color = param_4 & 0xff000000 | 0xffffff;
    }
    (menu->vm1).pos2.x = -4.0;
    (menu->vm1).pos2.y = -4.0;
    (menu->vm1).pos2.z = 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (menu->vm1).color.color = param_5;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,&menu->vm1,(int)(menu->vm1).anotherSpriteNumber);
      (menu->vm1).color.color = param_5 & 0xff000000 | 0xffffff;
    }
    (menu->vm1).pos2.x = 0.0;
    (menu->vm1).pos2.y = 0.0;
    (menu->vm1).pos2.z = 0.0;
  }
  return;
}

