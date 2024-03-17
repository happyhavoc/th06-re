
void DrawMenuItem(MainMenu *menu,int itemNumber,int cursor,uint currentItemColor,uint otherItemColor
                 ,int vm_amount)

{
  if (itemNumber == cursor) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (menu->vm1).color.color = currentItemColor;
    }
    else {
      AnmManager::SetActiveSprite
                (g_AnmManager,&menu->vm1,(menu->vm1).anotherSpriteNumber + vm_amount);
      (menu->vm1).color.color = currentItemColor & 0xff000000 | 0xffffff;
    }
    (menu->vm1).pos2.x = -4.0;
    (menu->vm1).pos2.y = -4.0;
    (menu->vm1).pos2.z = 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (menu->vm1).color.color = otherItemColor;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,&menu->vm1,(int)(menu->vm1).anotherSpriteNumber);
      (menu->vm1).color.color = otherItemColor & 0xff000000 | 0xffffff;
    }
    (menu->vm1).pos2.x = 0.0;
    (menu->vm1).pos2.y = 0.0;
    (menu->vm1).pos2.z = 0.0;
  }
  return;
}

