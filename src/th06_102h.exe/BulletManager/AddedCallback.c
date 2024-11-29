
/* WARNING: Type propagation algorithm not settling */

ZunResult th06::BulletManager::AddedCallback(BulletManager *arg)

{
  AnmVm *pAVar1;
  float fVar2;
  ZunResult ZVar3;
  long lVar4;
  int iVar5;
  ItemManager *pIVar6;
  short local_3c;
  short local_30;
  short local_24;
  short local_18;
  short local_c;
  uint local_8;
  AnmManager *anmManager;
  
  if (g_Supervisor.curState != SUPERVISOR_STATE_GAMEMANAGER_REINIT) {
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,6,"data/etama3.anm",0x200);
    if (ZVar3 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    ZVar3 = AnmManager::LoadAnm(g_AnmManager,7,"data/etama4.anm",0x29a);
    if (ZVar3 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  for (local_8 = 0; anmManager = g_AnmManager, local_8 < 10; local_8 = local_8 + 1) {
    iVar5 = *(int *)(&g_BulletTypeInfos + local_8 * 0x14);
    local_c = (short)iVar5;
    arg->bullet_type_templates[local_8].spriteBullet.anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript
              (anmManager,&arg->bullet_type_templates[local_8].spriteBullet,
               anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6ec + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectFast;
    local_18 = (short)iVar5;
    pAVar1->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f0 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectNormal;
    local_24 = (short)iVar5;
    pAVar1->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f4 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectSlow;
    local_30 = (short)iVar5;
    pAVar1->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = *(int *)(&DAT_0046a6f8 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spriteSpawnEffectDonut;
    local_3c = (short)iVar5;
    pAVar1->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    arg->bullet_type_templates[local_8].spriteBullet.baseSpriteIndex =
         arg->bullet_type_templates[local_8].spriteBullet.activeSpriteIndex;
    lVar4 = __ftol2((arg->bullet_type_templates[local_8].spriteBullet.sprite)->heightPx);
    arg->bullet_type_templates[local_8].bulletHeight = (byte)lVar4;
    fVar2 = (arg->bullet_type_templates[local_8].spriteBullet.sprite)->heightPx;
    if (fVar2 < 8.0 == (fVar2 == 8.0)) {
      fVar2 = (arg->bullet_type_templates[local_8].spriteBullet.sprite)->heightPx;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = (arg->bullet_type_templates[local_8].spriteBullet.sprite)->heightPx;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          arg->bullet_type_templates[local_8].grazeSize.x = 32.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 32.0;
        }
        else if (*(int *)(&g_BulletTypeInfos + local_8 * 0x14) == 0x207) {
          arg->bullet_type_templates[local_8].grazeSize.x = 11.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 11.0;
        }
        else if (*(int *)(&g_BulletTypeInfos + local_8 * 0x14) == 0x208) {
          arg->bullet_type_templates[local_8].grazeSize.x = 9.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 9.0;
        }
        else {
          arg->bullet_type_templates[local_8].grazeSize.x = 16.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 16.0;
        }
      }
      else {
        iVar5 = *(int *)(&g_BulletTypeInfos + local_8 * 0x14);
        if (iVar5 == 0x202) {
          arg->bullet_type_templates[local_8].grazeSize.x = 4.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 4.0;
        }
        else if (iVar5 == 0x204) {
          arg->bullet_type_templates[local_8].grazeSize.x = 5.0;
          arg->bullet_type_templates[local_8].grazeSize.y = 5.0;
        }
        else if (iVar5 == 0x205) {
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
  pIVar6 = &g_ItemManager;
  for (iVar5 = 0xa253; iVar5 != 0; iVar5 = iVar5 + -1) {
    pIVar6->items[0].sprite.rotation.x = 0.0;
    pIVar6 = (ItemManager *)&pIVar6->items[0].sprite.rotation.y;
  }
  return ZUN_SUCCESS;
}

