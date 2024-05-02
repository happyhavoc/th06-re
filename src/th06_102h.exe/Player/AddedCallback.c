
undefined4 Player::AddedCallback(Player *this)

{
  ZunTimer *pZVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  int iVar4;
  ShottypeData *pSVar5;
  ShottypeData *pSVar6;
  float fVar7;
  PlayerBullet *bullets;
  int bullet_idx;
  
  if (g_GameManager.character == 0) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player00.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    (this->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&this->vm0,pAVar2->scripts[0x400]);
  }
  else if (g_GameManager.character == 1) {
    if ((g_Supervisor.curState != 3) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player01.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return 0xffffffff;
    }
    pAVar2 = g_AnmManager;
    (this->vm0).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&this->vm0,pAVar2->scripts[0x400]);
  }
  (this->position).x = g_GameManager.arcade_region_size.x / 2.0;
  (this->position).y = g_GameManager.arcade_region_size.y - 64.0;
  (this->position).z = 0.49;
  this->field10_0x4a0[0].z = 0.49;
  this->field10_0x4a0[1].z = 0.49;
  for (bullet_idx = 0; bullet_idx < 0x20; bullet_idx = bullet_idx + 1) {
    this->field12_0x638[bullet_idx].x = 0.0;
  }
  (this->field8_0x488).x = 1.25;
  (this->field8_0x488).y = 1.25;
  (this->field8_0x488).z = 5.0;
  (this->field9_0x494).x = 12.0;
  (this->field9_0x494).y = 12.0;
  (this->field9_0x494).z = 5.0;
  this->field28_0xa0c = 0;
  pSVar5 = SHOT_TYPES + (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
  pSVar6 = &this->field27_0x9f4;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar6->field0_0x0 = pSVar5->field0_0x0;
    pSVar5 = (ShottypeData *)&pSVar5->field1_0x4;
    pSVar6 = (ShottypeData *)&pSVar6->field1_0x4;
  }
  fVar7 = FUN_0045bc34((double *)0x0);
  (this->field27_0x9f4).field2_0x8 = (this->field27_0x9f4).field0_0x0 / fVar7;
  fVar7 = FUN_0045bc34((double *)0x0);
  (this->field27_0x9f4).field3_0xc = (this->field27_0x9f4).field1_0x4 / fVar7;
  this->field36_0x75c0 = (this->field27_0x9f4).field4_0x10;
  this->field37_0x75c4 = (this->field27_0x9f4).field5_0x14;
  this->field21_0x9e0 = 1;
  (this->field35_0x75b4).current = 0x78;
  (this->field35_0x75b4).subFrame = 0.0;
  (this->field35_0x75b4).previous = -999;
  this->field23_0x9e2 = 0;
  pAVar2 = g_AnmManager;
  this->vm1[0].anmFileIndex = 0x480;
  AnmManager::SetAndExecuteScript(pAVar2,this->vm1,pAVar2->scripts[0x480]);
  pAVar2 = g_AnmManager;
  this->vm1[1].anmFileIndex = 0x481;
  AnmManager::SetAndExecuteScript(pAVar2,this->vm1 + 1,pAVar2->scripts[0x481]);
  bullets = this->bullets;
  for (bullet_idx = 0; bullet_idx < 0x50; bullet_idx = bullet_idx + 1) {
    bullets->field11_0x14e = 0;
    bullets = bullets + 1;
  }
  (this->field34_0x75a8).current = -1;
  (this->field34_0x75a8).subFrame = 0.0;
  (this->field34_0x75a8).previous = -999;
  (this->inner).bombCalc =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].calc;
  (this->inner).bombDraw =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].draw;
  (this->inner).field0_0x0 = 0;
  for (bullet_idx = 0; bullet_idx < 2; bullet_idx = bullet_idx + 1) {
    pZVar1 = this->field16_0x9b8 + bullet_idx;
    pZVar1->current = 0;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
  }
  this->field18_0x9d4 = 1.0;
  this->field17_0x9d0 = 1.0;
  this->field19_0x9d8 = 8;
  return 0;
}

