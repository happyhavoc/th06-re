
undefined4 FUN_00410b10(int param_1)

{
  int iVar1;
  
  g_GameManager.unk_1822 = 1;
  g_Supervisor.field78_0x19c = 1;
  Supervisor::LoadPBG3(&g_Supervisor,5,(byte *)"紅魔郷ED.dat");
  AnmManager::LoadAnm(g_AnmManager,0x2c,"data/staff01.anm",0x600);
  AnmManager::LoadAnm(g_AnmManager,0x2d,"data/staff02.anm",0x607);
  AnmManager::LoadAnm(g_AnmManager,0x2e,"data/staff03.anm",0x60e);
  g_AnmManager->currentTexture = (IDirect3DTexture8 *)0x0;
  g_AnmManager->currentSprite = (AnmLoadedSprite *)0x0;
  g_AnmManager->currentBlendMode = 0xff;
  g_AnmManager->currentVertexShader = 0xff;
  iVar1 = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
  *(undefined4 *)(param_1 + 0x1118) = 0;
  if (g_GameManager.num_retries == 0) {
    if (*(char *)(iVar1 * 0x18 + 0x69ccdc + g_GameManager.difficulty) == 'c') {
      *(undefined4 *)(param_1 + 0x1118) = 1;
    }
    *(undefined *)(iVar1 * 0x18 + 0x69ccdc + g_GameManager.difficulty) = 'c';
  }
  else if (*(char *)(iVar1 * 0x18 + 0x69cce1 + g_GameManager.difficulty) == 'c') {
    *(undefined4 *)(param_1 + 0x1118) = 1;
  }
  *(undefined *)(iVar1 * 0x18 + 0x69cce1 + g_GameManager.difficulty) = 'c';
  if ((g_GameManager.difficulty == 0) || (g_GameManager.num_retries != 0)) {
    if (g_GameManager.character == 0) {
      iVar1 = FUN_004106d0(param_1,"data/end00b.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else if ((g_GameManager.character == 1) &&
            (iVar1 = FUN_004106d0(param_1,"data/end10b.end"), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  else if (g_GameManager.character == 0) {
    if (g_GameManager.shottype == 0) {
      iVar1 = FUN_004106d0(param_1,"data/end00.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar1 = FUN_004106d0(param_1,"data/end01.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  else if (g_GameManager.character == 1) {
    if (g_GameManager.shottype == 0) {
      iVar1 = FUN_004106d0(param_1,"data/end10.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar1 = FUN_004106d0(param_1,"data/end11.end");
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

