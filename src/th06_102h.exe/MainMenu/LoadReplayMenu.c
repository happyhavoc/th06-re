
ZunResult th06::MainMenu::LoadReplayMenu(MainMenu *menu)

{
  ZunResult ZResult;
  AnmVm *local_c;
  int file_idx;
  
  for (file_idx = 0x15; file_idx < 0x1b; file_idx = file_idx + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,file_idx);
  }
  ZResult = AnmManager::LoadSurface(g_AnmManager,0,"data/title/select00.jpg");
  if (ZResult == ZUN_SUCCESS) {
    ZResult = AnmManager::LoadAnm(g_AnmManager,0x24,"data/replay00.anm",0x160);
    if (ZResult == ZUN_SUCCESS) {
      local_c = menu->vmList + 0x60;
      for (file_idx = 0x160; file_idx < 0x17a; file_idx = file_idx + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,file_idx);
        local_c->flags = local_c->flags & ~AnmVmFlags_1;
        local_c->flags = local_c->flags | AnmVmFlags_3;
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (local_c->color).color = 0xff000000;
        }
        else {
          (local_c->color).color = 0xffffffff;
        }
        (local_c->offset).x = 0.0;
        (local_c->offset).y = 0.0;
        (local_c->offset).z = 0.0;
        local_c->baseSpriteIndex = local_c->activeSpriteIndex;
        local_c->flags = local_c->flags | AnmVmFlags_12;
        local_c = local_c + 1;
      }
      ZResult = ZUN_SUCCESS;
    }
    else {
      ZResult = ZUN_ERROR;
    }
  }
  else {
    ZResult = ZUN_ERROR;
  }
  return ZResult;
}

