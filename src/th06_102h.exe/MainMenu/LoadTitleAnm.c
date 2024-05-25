
ZunResult MainMenu::LoadTitleAnm(MainMenu *menu)

{
  AnmVm *pAVar1;
  ZunResult loadAnm;
  ZunResult result;
  uint uVar2;
  uint uVar3;
  ZunResult titleImg;
  int i;
  
  Supervisor::LoadPbg3(&g_Supervisor,3,"紅魔郷TL.dat");
  for (i = 0x1b; i < 0x25; i = i + 1) {
    AnmManager::ReleaseAnm(g_AnmManager,i);
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
                AnmManager::ExecuteAnmIdx(g_AnmManager,menu->vmList + i,i + 0x100);
                pAVar1 = menu->vmList + i;
                uVar2._0_2_ = pAVar1->flags;
                uVar2._2_1_ = pAVar1->unk_82[0];
                uVar2._3_1_ = pAVar1->unk_82[1];
                uVar2 = uVar2 & 0xfffffffe;
                pAVar1 = menu->vmList + i;
                pAVar1->flags = (short)uVar2;
                pAVar1->unk_82[0] = (char)(uVar2 >> 0x10);
                pAVar1->unk_82[1] = (char)(uVar2 >> 0x18);
                menu->vmList[i].baseSpriteIndex = menu->vmList[i].activeSpriteIndex;
                pAVar1 = menu->vmList + i;
                uVar3._0_2_ = pAVar1->flags;
                uVar3._2_1_ = pAVar1->unk_82[0];
                uVar3._3_1_ = pAVar1->unk_82[1];
                uVar3 = uVar3 | 0x1000;
                pAVar1 = menu->vmList + i;
                pAVar1->flags = (short)uVar3;
                pAVar1->unk_82[0] = (char)(uVar3 >> 0x10);
                pAVar1->unk_82[1] = (char)(uVar3 >> 0x18);
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

