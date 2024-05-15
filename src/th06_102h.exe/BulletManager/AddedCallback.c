
/* WARNING: Type propagation algorithm not settling */

ZunResult BulletManager::AddedCallback(BulletManager *arg)

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
  
  if (g_Supervisor.curState != 3) {
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
    iVar5 = INT_ARRAY_0046a6e8[local_8 * 5];
    local_c = (short)iVar5;
    arg->bullet_type_templates[local_8].vm0.anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript
              (anmManager,&arg->bullet_type_templates[local_8].vm0,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = INT_ARRAY_0046a6e8[local_8 * 5 + 1];
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_short;
    local_18 = (short)iVar5;
    pAVar1->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = INT_ARRAY_0046a6e8[local_8 * 5 + 2];
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_medium;
    local_24 = (short)iVar5;
    pAVar1->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = INT_ARRAY_0046a6e8[local_8 * 5 + 3];
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_long;
    local_30 = (short)iVar5;
    pAVar1->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    anmManager = g_AnmManager;
    iVar5 = INT_ARRAY_0046a6e8[local_8 * 5 + 4];
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_short_with_memset;
    local_3c = (short)iVar5;
    pAVar1->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript(anmManager,pAVar1,anmManager->scripts[iVar5]);
    arg->bullet_type_templates[local_8].vm0.anotherSpriteNumber =
         arg->bullet_type_templates[local_8].vm0.spriteNumber;
    lVar4 = __ftol2((arg->bullet_type_templates[local_8].vm0.sprite)->heightPx);
    arg->bullet_type_templates[local_8].field12_0x55d = (byte)lVar4;
    fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
    if (fVar2 < 8.0 == (fVar2 == 8.0)) {
      fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          arg->bullet_type_templates[local_8].field5_0x550 = 32.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 32.0;
        }
        else if (INT_ARRAY_0046a6e8[local_8 * 5] == 0x207) {
          arg->bullet_type_templates[local_8].field5_0x550 = 11.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 11.0;
        }
        else if (INT_ARRAY_0046a6e8[local_8 * 5] == 0x208) {
          arg->bullet_type_templates[local_8].field5_0x550 = 9.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 9.0;
        }
        else {
          arg->bullet_type_templates[local_8].field5_0x550 = 16.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 16.0;
        }
      }
      else {
        iVar5 = INT_ARRAY_0046a6e8[local_8 * 5];
        if (iVar5 == 0x202) {
          arg->bullet_type_templates[local_8].field5_0x550 = 4.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 4.0;
        }
        else if (iVar5 == 0x204) {
          arg->bullet_type_templates[local_8].field5_0x550 = 5.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 5.0;
        }
        else if (iVar5 == 0x205) {
          arg->bullet_type_templates[local_8].field5_0x550 = 4.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 4.0;
        }
        else {
          arg->bullet_type_templates[local_8].field5_0x550 = 6.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 6.0;
        }
      }
    }
    else {
      arg->bullet_type_templates[local_8].field5_0x550 = 4.0;
      arg->bullet_type_templates[local_8].field6_0x554 = 4.0;
    }
  }
  pIVar6 = &g_ItemManager;
  for (iVar5 = 0xa253; iVar5 != 0; iVar5 = iVar5 + -1) {
    pIVar6->items[0].vm.rotation.x = 0.0;
    pIVar6 = (ItemManager *)&pIVar6->items[0].vm.rotation.y;
  }
  return ZUN_SUCCESS;
}

