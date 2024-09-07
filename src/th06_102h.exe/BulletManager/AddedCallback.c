
/* WARNING: Type propagation algorithm not settling */

ZunResult th06::BulletManager::AddedCallback(BulletManager *arg)

{
  AnmVm *pAVar1;
  float fVar2;
  uint uVar3;
  ZunResult ZVar4;
  long lVar5;
  int iVar6;
  ItemManager *pIVar7;
  short local_3c;
  short local_30;
  short local_24;
  short local_18;
  short local_c;
  uint local_8;
  AnmManager *anmManager;
  
  if (g_Supervisor.curState != SUPERVISOR_STATE_GAMEMANAGER_REINIT) {
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,6,"data/etama3.anm",0x200);
    if (ZVar4 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,7,"data/etama4.anm",0x29a);
    if (ZVar4 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  for (local_8 = 0; anmManager = g_AnmManager, local_8 < 10; local_8 = local_8 + 1) {
    uVar3 = g_BulletTypeInfos[local_8].bulletAnmFileIdx;
    local_c = (short)uVar3;
    arg->bullet_type_templates[local_8].bulletSprite.anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript
              ((AnmManager *)anmManager,&arg->bullet_type_templates[local_8].bulletSprite,
               anmManager->scripts[uVar3]);
    anmManager = g_AnmManager;
    uVar3 = g_BulletTypeInfos[local_8].bulletSpawnEffectFastAnmFileIdx;
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectFast;
    local_18 = (short)uVar3;
    pAVar1->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript((AnmManager *)anmManager,pAVar1,anmManager->scripts[uVar3]);
    anmManager = g_AnmManager;
    uVar3 = g_BulletTypeInfos[local_8].bulletSpawnEffectNormalAnmFileIdx;
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectNormal;
    local_24 = (short)uVar3;
    pAVar1->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript((AnmManager *)anmManager,pAVar1,anmManager->scripts[uVar3]);
    anmManager = g_AnmManager;
    uVar3 = g_BulletTypeInfos[local_8].bulletSpawnEffectSlowAnmFileIdx;
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectSlow;
    local_30 = (short)uVar3;
    pAVar1->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript((AnmManager *)anmManager,pAVar1,anmManager->scripts[uVar3]);
    anmManager = g_AnmManager;
    uVar3 = g_BulletTypeInfos[local_8].bulletSpawnEffectDonutAnmFileIdx;
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectDonut;
    local_3c = (short)uVar3;
    pAVar1->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript((AnmManager *)anmManager,pAVar1,anmManager->scripts[uVar3]);
    arg->bullet_type_templates[local_8].bulletSprite.baseSpriteIndex =
         arg->bullet_type_templates[local_8].bulletSprite.activeSpriteIndex;
    lVar5 = __ftol2((arg->bullet_type_templates[local_8].bulletSprite.sprite)->heightPx);
    arg->bullet_type_templates[local_8].height = (byte)lVar5;
    fVar2 = (arg->bullet_type_templates[local_8].bulletSprite.sprite)->heightPx;
    if (fVar2 < 8.0 == (fVar2 == 8.0)) {
      fVar2 = (arg->bullet_type_templates[local_8].bulletSprite.sprite)->heightPx;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = (arg->bullet_type_templates[local_8].bulletSprite.sprite)->heightPx;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          arg->bullet_type_templates[local_8].grazeSize.x = 32.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 32.0;
        }
        else if (g_BulletTypeInfos[local_8].bulletAnmFileIdx == 0x207) {
          arg->bullet_type_templates[local_8].grazeSize.x = 11.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 11.0;
        }
        else if (g_BulletTypeInfos[local_8].bulletAnmFileIdx == 0x208) {
          arg->bullet_type_templates[local_8].grazeSize.x = 9.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 9.0;
        }
        else {
          arg->bullet_type_templates[local_8].grazeSize.x = 16.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 16.0;
        }
      }
      else {
        uVar3 = g_BulletTypeInfos[local_8].bulletAnmFileIdx;
        if (uVar3 == 0x202) {
          arg->bullet_type_templates[local_8].grazeSize.x = 4.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 4.0;
        }
        else if (uVar3 == 0x204) {
          arg->bullet_type_templates[local_8].grazeSize.x = 5.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 5.0;
        }
        else if (uVar3 == 0x205) {
          arg->bullet_type_templates[local_8].grazeSize.x = 4.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 4.0;
        }
        else {
          arg->bullet_type_templates[local_8].grazeSize.x = 6.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 6.0;
        }
      }
    }
    else {
      arg->bullet_type_templates[local_8].grazeSize.x = 4.0;
      arg->bullet_type_templates[local_8].grazeSize.y = 4.0;
    }
  }
  pIVar7 = &g_ItemManager;
  for (iVar6 = 0xa253; iVar6 != 0; iVar6 = iVar6 + -1) {
    pIVar7->items[0].sprite.rotation.x = 0.0;
    pIVar7 = (ItemManager *)&pIVar7->items[0].sprite.rotation.y;
  }
  return ZUN_SUCCESS;
}

