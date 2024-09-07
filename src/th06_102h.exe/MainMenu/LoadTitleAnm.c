
ZunResult th06::MainMenu::LoadTitleAnm(MainMenu *menu)

{
  ZunResult loadAnm;
  ZunResult result;
  ZunResult titleImg;
  int i;
  
  Supervisor::LoadPbg3(&g_Supervisor,3,"紅魔郷TL.dat");
  for (i = 0x1b; i < 0x25; i = i + 1) {
    AnmManager::ReleaseAnm((AnmManager *)g_AnmManager,i);
  }
  loadAnm = AnmManager::LoadAnm(g_AnmManager,0x15,"data/title01.anm",0x100);
  if (loadAnm == ZUN_SUCCESS) {
    loadAnm = AnmManager::LoadAnm(g_AnmManager,0x18,"data/title02.anm",0x11b);
    if (loadAnm == ZUN_SUCCESS) {
      loadAnm = AnmManager::LoadAnm(g_AnmManager,0x19,"data/title03.anm",0x11f);
      if (loadAnm == ZUN_SUCCESS) {
        loadAnm = AnmManager::LoadAnm(g_AnmManager,0x1a,"data/title04.anm",0x122);
        if (loadAnm == ZUN_SUCCESS) {
          loadAnm = AnmManager::LoadAnm(g_AnmManager,0x16,"data/title01s.anm",0x17a);
          if (loadAnm == ZUN_SUCCESS) {
            loadAnm = AnmManager::LoadAnm(g_AnmManager,0x17,"data/title04s.anm",0x195);
            if (loadAnm == ZUN_SUCCESS) {
                    /* Possibly the first 80 vms are reserved for menu stuff? What about the other
                       42 though? */
              for (i = 0; i < 80; i = i + 1) {
                AnmManager::ExecuteAnmIdx((AnmManager *)g_AnmManager,menu->vmList + i,i + 0x100);
                menu->vmList[i].flags = menu->vmList[i].flags & ~AnmVmFlags_1;
                menu->vmList[i].baseSpriteIndex = menu->vmList[i].activeSpriteIndex;
                menu->vmList[i].flags = menu->vmList[i].flags | AnmVmFlags_12;
              }
              titleImg = AnmManager::LoadSurface(g_AnmManager,0,"data/title/title00.jpg");
              if (titleImg == ZUN_SUCCESS) {
                result = ZUN_SUCCESS;
              }
              else {
                result = ZUN_ERROR;
              }
            }
            else {
              result = ZUN_ERROR;
            }
          }
          else {
            result = ZUN_ERROR;
          }
        }
        else {
          result = ZUN_ERROR;
        }
      }
      else {
        result = ZUN_ERROR;
      }
    }
    else {
      result = ZUN_ERROR;
    }
  }
  else {
    result = ZUN_ERROR;
  }
  return result;
}

