
undefined4 FUN_0043a1ec(int param_1)

{
  ZunResult ZVar1;
  undefined4 uVar2;
  AnmVm *local_c;
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1b; local_8 = local_8 + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,local_8);
  }
  ZVar1 = AnmManager::LoadSurface(g_AnmManager,0,"data/title/select00.jpg");
  if (ZVar1 == ZUN_SUCCESS) {
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0x24,"data/replay00.anm",0x160);
    if (ZVar1 == ZUN_SUCCESS) {
      local_c = (AnmVm *)(param_1 + 0x6600);
      for (local_8 = 0x160; local_8 < 0x17a; local_8 = local_8 + 1) {
        AnmManager::FUN_004051b0(g_AnmManager,local_c,local_8);
        local_c->flags = local_c->flags & 0xfffffffe;
        local_c->flags = local_c->flags | 8;
        if ((g_Supervisor.cfg.opts & 1) == 0) {
          local_c->color = 0xff000000;
        }
        else {
          local_c->color = 0xffffffff;
        }
        (local_c->pos2).x = 0.0;
        (local_c->pos2).y = 0.0;
        (local_c->pos2).z = 0.0;
        local_c->anotherSpriteNumber = local_c->spriteNumber;
        local_c->flags = local_c->flags | 0x1000;
        local_c = local_c + 1;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
