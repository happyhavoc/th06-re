
ZunResult LoadReplayMenu(MainMenu *param_1)

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
      local_c = param_1->AnmVMArray + 0x60;
      for (file_idx = 0x160; file_idx < 0x17a; file_idx = file_idx + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,file_idx);
        *(uint *)&local_c->flags = *(uint *)&local_c->flags & 0xfffffffe;
        *(uint *)&local_c->flags = *(uint *)&local_c->flags | 8;
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          (local_c->color).color = 0xff000000;
        }
        else {
          (local_c->color).color = 0xffffffff;
        }
        (local_c->pos2).x = 0.0;
        (local_c->pos2).y = 0.0;
        (local_c->pos2).z = 0.0;
        local_c->anotherSpriteNumber = local_c->spriteNumber;
        *(uint *)&local_c->flags = *(uint *)&local_c->flags | 0x1000;
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

