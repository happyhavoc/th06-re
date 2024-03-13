
void __thiscall
MainMenu::setSavedCursorPosition(MainMenu *this,AnmVm *vm,int idx,int idx_2,int itmToCompare)

{
  if (idx_2 == itmToCompare) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = 0x800000ff;
    }
    else if (vm->anotherSpriteNumber < 0x122) {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->anotherSpriteNumber + 0x7a);
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->anotherSpriteNumber + 0x73);
    }
    (vm->pos2).x = -2.0;
    (vm->pos2).y = -2.0;
    (vm->pos2).z = 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = 0x80202050;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->anotherSpriteNumber);
    }
    vm->scaleX = 1.0;
    vm->scaleY = 1.0;
    (vm->pos2).x = 0.0;
    (vm->pos2).y = 0.0;
    (vm->pos2).z = 0.0;
  }
  if (idx == this->cursor) {
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = (vm->color).color & 0xffffff | 0xff000000;
    }
    else {
      (vm->color).color = (vm->color).color & 0xffffff | 0xff000000;
    }
    (vm->pos2).x = (vm->pos2).x + -4.0;
    (vm->pos2).y = (vm->pos2).y + -4.0;
    (vm->pos2).z = (vm->pos2).z + 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = (vm->color).color & 0xffffff | 0x80000000;
    }
    else {
      (vm->color).color = (vm->color).color & 0xffffff | 0x80000000;
    }
    (vm->pos2).x = (vm->pos2).x + 0.0;
    (vm->pos2).y = (vm->pos2).y + 0.0;
    (vm->pos2).z = (vm->pos2).z + 0.0;
  }
  return;
}

