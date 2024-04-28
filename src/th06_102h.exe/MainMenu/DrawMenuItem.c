
void MainMenu::DrawMenuItem
               (AnmVm *vm,int itemNumber,int cursor,D3DCOLOR currentItemColor,
               D3DCOLOR otherItemColor,int vm_amount)

{
  if (itemNumber == cursor) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = currentItemColor;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,vm->anotherSpriteNumber + vm_amount);
      (vm->color).color = currentItemColor & 0xff000000 | 0xffffff;
    }
    (vm->offset).x = -4.0;
    (vm->offset).y = -4.0;
    (vm->offset).z = 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = otherItemColor;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->anotherSpriteNumber);
      (vm->color).color = otherItemColor & 0xff000000 | 0xffffff;
    }
    (vm->offset).x = 0.0;
    (vm->offset).y = 0.0;
    (vm->offset).z = 0.0;
  }
  return;
}

