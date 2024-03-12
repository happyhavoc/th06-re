
ZunResult BulletManager::AddedCallback(BulletManager *arg)

{
  AnmVm *pAVar1;
  float fVar2;
  AnmManager *pAVar3;
  ZunResult ZVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  short local_3c;
  short local_30;
  short local_24;
  short local_18;
  short local_c;
  uint local_8;
  
  if (g_Supervisor.curState != 3) {
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,6,"data/etama3.anm",0x200);
    if (ZVar4 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
    ZVar4 = AnmManager::LoadAnm(g_AnmManager,7,"data/etama4.anm",0x29a);
    if (ZVar4 != ZUN_SUCCESS) {
      return ZUN_ERROR;
    }
  }
  for (local_8 = 0; pAVar3 = g_AnmManager, local_8 < 10; local_8 = local_8 + 1) {
    iVar6 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
    local_c = (short)iVar6;
    arg->bullet_type_templates[local_8].vm0.anmFileIndex = local_c;
    AnmManager::SetAndExecuteScript
              (pAVar3,&arg->bullet_type_templates[local_8].vm0,pAVar3->scripts[iVar6]);
    pAVar3 = g_AnmManager;
    iVar6 = *(int *)(&DAT_0046a6ec + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_short;
    local_18 = (short)iVar6;
    pAVar1->anmFileIndex = local_18;
    AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[iVar6]);
    pAVar3 = g_AnmManager;
    iVar6 = *(int *)(&DAT_0046a6f0 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_medium;
    local_24 = (short)iVar6;
    pAVar1->anmFileIndex = local_24;
    AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[iVar6]);
    pAVar3 = g_AnmManager;
    iVar6 = *(int *)(&DAT_0046a6f4 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].spawn_effect_long;
    local_30 = (short)iVar6;
    pAVar1->anmFileIndex = local_30;
    AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[iVar6]);
    pAVar3 = g_AnmManager;
    iVar6 = *(int *)(&DAT_0046a6f8 + local_8 * 0x14);
    pAVar1 = &arg->bullet_type_templates[local_8].vm5;
    local_3c = (short)iVar6;
    pAVar1->anmFileIndex = local_3c;
    AnmManager::SetAndExecuteScript(pAVar3,pAVar1,pAVar3->scripts[iVar6]);
    arg->bullet_type_templates[local_8].vm0.anotherSpriteNumber =
         arg->bullet_type_templates[local_8].vm0.spriteNumber;
    lVar5 = __ftol2((arg->bullet_type_templates[local_8].vm0.sprite)->heightPx);
    arg->bullet_type_templates[local_8].field12_0x55d = (byte)lVar5;
    fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
    if (fVar2 < 8.0 == (fVar2 == 8.0)) {
      fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
      if (fVar2 < 16.0 == (fVar2 == 16.0)) {
        fVar2 = (arg->bullet_type_templates[local_8].vm0.sprite)->heightPx;
        if (fVar2 < 32.0 == (fVar2 == 32.0)) {
          arg->bullet_type_templates[local_8].field5_0x550 = 32.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 32.0;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x207) {
          arg->bullet_type_templates[local_8].field5_0x550 = 11.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 11.0;
        }
        else if (*(int *)(&DAT_0046a6e8 + local_8 * 0x14) == 0x208) {
          arg->bullet_type_templates[local_8].field5_0x550 = 9.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 9.0;
        }
        else {
          arg->bullet_type_templates[local_8].field5_0x550 = 16.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 16.0;
        }
      }
      else {
        iVar6 = *(int *)(&DAT_0046a6e8 + local_8 * 0x14);
        if (iVar6 == 0x202) {
          arg->bullet_type_templates[local_8].field5_0x550 = 4.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 4.0;
        }
        else if (iVar6 == 0x204) {
          arg->bullet_type_templates[local_8].field5_0x550 = 5.0;
          arg->bullet_type_templates[local_8].field6_0x554 = 5.0;
        }
        else if (iVar6 == 0x205) {
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
  puVar7 = g_ItemManager;
  for (iVar6 = 0xa253; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  return ZUN_SUCCESS;
}

