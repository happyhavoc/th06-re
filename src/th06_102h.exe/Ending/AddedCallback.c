
ZunResult th06::Ending::AddedCallback(Ending *ending)

{
  ZunResult load_ending;
  int shottypeAndCharacter;
  
  g_GameManager.is_game_completed = 1;
  g_Supervisor.isInEnding = 1;
  Supervisor::LoadPbg3(&g_Supervisor,5,"紅魔郷ED.dat");
  AnmManager::LoadAnm(g_AnmManager,0x2c,"data/staff01.anm",0x600);
  AnmManager::LoadAnm(g_AnmManager,0x2d,"data/staff02.anm",0x607);
  AnmManager::LoadAnm(g_AnmManager,0x2e,"data/staff03.anm",0x60e);
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  g_AnmManager->currentSprite = (AnmLoadedSprite *)0x0;
  g_AnmManager->currentBlendMode = 0xff;
  g_AnmManager->currentVertexShader = 0xff;
  shottypeAndCharacter = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
  ending->hasSeenEnding = 0;
  if (g_GameManager.num_retries == 0) {
                    /* That huge number is actually an address, ghidra just isn't picking up on the
                       fact that it's supposed to be Clrd->difficulty_cleared_with_retries */
    if (*(char *)(shottypeAndCharacter * 0x18 + 0x69ccdc + g_GameManager.difficulty) == 99) {
      ending->hasSeenEnding = 1;
    }
    *(undefined *)(shottypeAndCharacter * 0x18 + 0x69ccdc + g_GameManager.difficulty) = 99;
  }
  else {
                    /* Same here, but with Clrd->difficulty_cleared_without_retries */
    if (*(char *)(shottypeAndCharacter * 0x18 + 0x69cce1 + g_GameManager.difficulty) == 99) {
      ending->hasSeenEnding = 1;
    }
  }
  *(undefined *)(shottypeAndCharacter * 0x18 + 0x69cce1 + g_GameManager.difficulty) = 'c';
  if ((g_GameManager.difficulty == EASY) || (g_GameManager.num_retries != 0)) {
    if (g_GameManager.character == 0) {
      load_ending = LoadEnding(ending,"data/end00b.end");
      if (load_ending != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
    else if ((g_GameManager.character == 1) &&
            (load_ending = LoadEnding(ending,"data/end10b.end"), load_ending != ZUN_SUCCESS)) {
      return ZUN_ERROR;
    }
  }
  else if (g_GameManager.character == 0) {
    if (g_GameManager.shottype == 0) {
      load_ending = LoadEnding(ending,"data/end00.end");
      if (load_ending != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
    else {
      load_ending = LoadEnding(ending,"data/end01.end");
      if (load_ending != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
  }
  else if (g_GameManager.character == 1) {
    if (g_GameManager.shottype == 0) {
      load_ending = LoadEnding(ending,"data/end10.end");
      if (load_ending != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
    else {
      load_ending = LoadEnding(ending,"data/end11.end");
      if (load_ending != ZUN_SUCCESS) {
        return ZUN_ERROR;
      }
    }
  }
  return ZUN_SUCCESS;
}

