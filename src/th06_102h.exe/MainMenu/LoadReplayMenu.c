
ZunResult MainMenu::LoadReplayMenu(MainMenu *menu)

{
  ZunResult ZResult;
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
        uVar1._0_2_ = local_c->flags;
        uVar1._2_1_ = local_c->unk_82[0];
        uVar1._3_1_ = local_c->unk_82[1];
        uVar1 = uVar1 & 0xfffffffe;
        local_c->flags = (short)uVar1;
        local_c->unk_82[0] = (char)(uVar1 >> 0x10);
        local_c->unk_82[1] = (char)(uVar1 >> 0x18);
        uVar2._0_2_ = local_c->flags;
        uVar2._2_1_ = local_c->unk_82[0];
        uVar2._3_1_ = local_c->unk_82[1];
        uVar2 = uVar2 | 8;
        local_c->flags = (short)uVar2;
        local_c->unk_82[0] = (char)(uVar2 >> 0x10);
        local_c->unk_82[1] = (char)(uVar2 >> 0x18);
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
        uVar3._0_2_ = local_c->flags;
        uVar3._2_1_ = local_c->unk_82[0];
        uVar3._3_1_ = local_c->unk_82[1];
        uVar3 = uVar3 | 0x1000;
        local_c->flags = (short)uVar3;
        local_c->unk_82[0] = (char)(uVar3 >> 0x10);
        local_c->unk_82[1] = (char)(uVar3 >> 0x18);
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

