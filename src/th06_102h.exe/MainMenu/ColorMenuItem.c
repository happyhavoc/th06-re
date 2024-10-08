
void __thiscall
th06::MainMenu::ColorMenuItem(MainMenu *this,AnmVm *vm,int idx,int idx_2,int itmToCompare)

{
  if (idx_2 == itmToCompare) {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = 0x800000ff;
    }
    else if (vm->baseSpriteIndex < 0x122) {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->baseSpriteIndex + 0x7a);
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->baseSpriteIndex + 0x73);
    }
    (vm->offset).x = -2.0;
    (vm->offset).y = -2.0;
    (vm->offset).z = 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts >> 8 & 1 | g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = 0x80202050;
    }
    else {
      AnmManager::SetActiveSprite(g_AnmManager,vm,(int)vm->baseSpriteIndex);
    }
    vm->scaleX = 1.0;
    vm->scaleY = 1.0;
    (vm->offset).x = 0.0;
    (vm->offset).y = 0.0;
    (vm->offset).z = 0.0;
  }
  if (idx == this->cursor) {
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = (vm->color).color & 0xffffff | 0xff000000;
    }
    else {
      (vm->color).color = (vm->color).color & 0xffffff | 0xff000000;
    }
    (vm->offset).x = (vm->offset).x + -4.0;
    (vm->offset).y = (vm->offset).y + -4.0;
    (vm->offset).z = (vm->offset).z + 0.0;
  }
  else {
    if ((g_Supervisor.cfg.opts & 1) == 0) {
      (vm->color).color = (vm->color).color & 0xffffff | 0x80000000;
    }
    else {
      (vm->color).color = (vm->color).color & 0xffffff | 0x80000000;
    }
    (vm->offset).x = (vm->offset).x + 0.0;
    (vm->offset).y = (vm->offset).y + 0.0;
    (vm->offset).z = (vm->offset).z + 0.0;
  }
  return;
}

