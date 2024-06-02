
ZunResult MainMenu::LoadDiffCharSelect(MainMenu *menu)

{
  ZunResult loadAnm;
  AnmVm *vm;
  int i;
  
  for (i = 0x15; i < 0x1b; i = i + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,i);
  }
  loadAnm = AnmManager::LoadSurface(g_AnmManager,0,"data/title/select00.jpg");
  if (loadAnm == ZUN_SUCCESS) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1b,"data/select01.anm",0x150);
    if (loadAnm == ZUN_SUCCESS) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1c,"data/select02.anm",0x153);
      if (loadAnm == ZUN_SUCCESS) {
        loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1d,"data/select03.anm",0x15a);
        if (loadAnm == ZUN_SUCCESS) {
          loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1e,"data/select04.anm",0x15c);
          if (loadAnm == ZUN_SUCCESS) {
            loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1f,"data/select05.anm",0x155);
            if (loadAnm == ZUN_SUCCESS) {
              loadAnm = AnmManager::LoadAnm(g_AnmManager,0x20,"data/slpl00a.anm",0x156);
              if (loadAnm == ZUN_SUCCESS) {
                loadAnm = AnmManager::LoadAnm(g_AnmManager,0x21,"data/slpl00b.anm",0x157);
                if (loadAnm == ZUN_SUCCESS) {
                  loadAnm = AnmManager::LoadAnm(g_AnmManager,0x22,"data/slpl01a.anm",0x158);
                  if (loadAnm == ZUN_SUCCESS) {
                    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x23,"data/slpl01b.anm",0x159);
                    if (loadAnm == ZUN_SUCCESS) {
                      vm = menu->vmList + 0x50;
                      for (i = 0x150; i < 0x160; i = i + 1) {
                        AnmManager::ExecuteAnmIdx(g_AnmManager,vm,i);
                        vm->flags = vm->flags & ~AnmVmFlags_1;
                        vm->flags = vm->flags | AnmVmFlags_3;
                        if ((g_Supervisor.cfg.opts & 1) == 0) {
                          (vm->color).color = 0xff000000;
                        }
                        else {
                          (vm->color).color = 0xffffffff;
                        }
                        (vm->offset).x = 0.0;
                        (vm->offset).y = 0.0;
                        (vm->offset).z = 0.0;
                        vm->baseSpriteIndex = vm->activeSpriteIndex;
                        vm->flags = vm->flags | AnmVmFlags_12;
                        vm = vm + 1;
                      }
                      loadAnm = ZUN_SUCCESS;
                    }
                    else {
                      loadAnm = ZUN_ERROR;
                    }
                  }
                  else {
                    loadAnm = ZUN_ERROR;
                  }
                }
                else {
                  loadAnm = ZUN_ERROR;
                }
              }
              else {
                loadAnm = ZUN_ERROR;
              }
            }
            else {
              loadAnm = ZUN_ERROR;
            }
          }
          else {
            loadAnm = ZUN_ERROR;
          }
        }
        else {
          loadAnm = ZUN_ERROR;
        }
      }
      else {
        loadAnm = ZUN_ERROR;
      }
    }
    else {
      loadAnm = ZUN_ERROR;
    }
  }
  else {
    loadAnm = ZUN_ERROR;
  }
  return loadAnm;
}

