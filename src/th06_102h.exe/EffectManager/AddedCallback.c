
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ZunResult EffectManager::AddedCallback(EffectManager *param_1)

{
  ZunResult ZVar1;
  
  Reset(param_1);
  switch(g_GameManager.current_stage) {
  case 0:
  case 1:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff01.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 2:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff02.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 3:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff03.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 4:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff04.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 5:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff05.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 6:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff05.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    break;
  case 7:
    ZVar1 = AnmManager::LoadAnm(g_AnmManager,0xb,"data/eff04.anm",0x2b3);
    if (ZVar1 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  return ZUN_SUCCESS;
}

