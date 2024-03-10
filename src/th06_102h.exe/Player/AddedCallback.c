
undefined4 Player::AddedCallback(Player *param_1)

{
  ZunTimer *pZVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  int iVar4;
  float *pfVar5;
  ShottypeData *pSVar6;
  float10 fVar7;
  PlayerBullet *local_c;
  int local_8;
  
  if (g_GameManager.character == 0) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player00.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    (param_1->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&param_1->vm0,pAVar2->scripts[0x400]);
  }
  else if (g_GameManager.character == 1) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player01.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    (param_1->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&param_1->vm0,pAVar2->scripts[0x400]);
  }
  (param_1->position).x = g_GameManager.arcade_region_size.x / 2.0;
  (param_1->position).y = g_GameManager.arcade_region_size.y - 64.0;
  (param_1->position).z = 0.49;
  param_1->field10_0x4a0[0].z = 0.49;
  param_1->field10_0x4a0[1].z = 0.49;
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    param_1->field12_0x638[local_8].x = 0.0;
  }
  (param_1->field8_0x488).x = 1.25;
  (param_1->field8_0x488).y = 1.25;
  (param_1->field8_0x488).z = 5.0;
  (param_1->field9_0x494).x = 12.0;
  (param_1->field9_0x494).y = 12.0;
  (param_1->field9_0x494).z = 5.0;
  param_1->field28_0xa0c = 0;
  pfVar5 = (float *)(&DAT_00476728 +
                    ((uint)g_GameManager.shottype + (uint)g_GameManager.character * 2) * 0x18);
  pSVar6 = &param_1->field27_0x9f4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar6->field0_0x0 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pSVar6 = (ShottypeData *)&pSVar6->field1_0x4;
  }
  fVar7 = (float10)FUN_0045bc34(0x4000000000000000);
  (param_1->field27_0x9f4).field2_0x8 = (param_1->field27_0x9f4).field0_0x0 / (float)fVar7;
  fVar7 = (float10)FUN_0045bc34(0x4000000000000000);
  (param_1->field27_0x9f4).field3_0xc = (param_1->field27_0x9f4).field1_0x4 / (float)fVar7;
  param_1->field36_0x75c0 = (param_1->field27_0x9f4).field4_0x10;
  param_1->field37_0x75c4 = (param_1->field27_0x9f4).field5_0x14;
  param_1->field21_0x9e0 = 1;
  (param_1->field35_0x75b4).current = 0x78;
  (param_1->field35_0x75b4).subFrame = 0.0;
  (param_1->field35_0x75b4).previous = -999;
  param_1->field23_0x9e2 = 0;
  pAVar2 = g_AnmManager;
  param_1->vm1[0].anmFileIndex = 0x480;
  AnmManager::SetAndExecuteScript(pAVar2,param_1->vm1,pAVar2->scripts[0x480]);
  pAVar2 = g_AnmManager;
  param_1->vm1[1].anmFileIndex = 0x481;
  AnmManager::SetAndExecuteScript(pAVar2,param_1->vm1 + 1,pAVar2->scripts[0x481]);
  local_c = param_1->bullets;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    local_c->field11_0x14e = 0;
    local_c = local_c + 1;
  }
  (param_1->field34_0x75a8).current = -1;
  (param_1->field34_0x75a8).subFrame = 0.0;
  (param_1->field34_0x75a8).previous = -999;
  (param_1->inner).bombCalc =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].calc;
  (param_1->inner).bombDraw =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].draw;
  (param_1->inner).field0_0x0 = 0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    pZVar1 = param_1->field16_0x9b8 + local_8;
    pZVar1->current = 0;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
  }
  param_1->field18_0x9d4 = 1.0;
  param_1->field17_0x9d0 = 1.0;
  param_1->field19_0x9d8 = 8;
  return 0;
}

