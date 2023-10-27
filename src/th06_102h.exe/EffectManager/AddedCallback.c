
undefined4 EffectManager::AddedCallback(undefined4 *param_1)

{
  int iVar1;
  
  Reset(param_1);
  switch(g_GameManager.current_stage) {
  case 0:
  case 1:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff01.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 2:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff02.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 3:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff03.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 4:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff04.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 5:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff05.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 6:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff05.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    break;
  case 7:
    iVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff04.anm",0x2b3);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

