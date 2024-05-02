
void Player::BombMarisaACalc(Player *param_1)

{
  PlayerUnknown *pPVar1;
  int *piVar2;
  D3DXVECTOR3 *pDVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4) {
    if (((param_1->inner).field2_0x8.current == (param_1->inner).field2_0x8.previous) ||
       ((param_1->inner).field2_0x8.current != 0)) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        piVar2 = (param_1->inner).field8_0xbc + local_8 * 3;
        fVar4 = g_Supervisor.effectiveFramerateMultiplier * (float)piVar2[2];
        fVar5 = g_Supervisor.effectiveFramerateMultiplier * (float)piVar2[1];
        pPVar1 = (param_1->inner).field6_0x5c + local_8;
        pPVar1->field0_0x0 =
             g_Supervisor.effectiveFramerateMultiplier * (float)*piVar2 + pPVar1->field0_0x0;
        pPVar1->field1_0x4 = fVar5 + pPVar1->field1_0x4;
        pPVar1->field2_0x8 = fVar4 + pPVar1->field2_0x8;
        if (((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) &&
           ((param_1->inner).field2_0x8.current % 3 != 0)) {
          param_1->field15_0x8b8[local_8].position1.x =
               (param_1->inner).field6_0x5c[local_8].field0_0x0;
          param_1->field15_0x8b8[local_8].position1.y =
               (param_1->inner).field6_0x5c[local_8].field1_0x4;
          param_1->field15_0x8b8[local_8].size1.x = 128.0;
          param_1->field15_0x8b8[local_8].size1.y = 128.0;
          param_1->field12_0x638[local_8].x = 128.0;
          param_1->field12_0x638[local_8].y = 128.0;
          pPVar1 = (param_1->inner).field6_0x5c + local_8;
          pDVar3 = param_1->field11_0x4b8 + local_8;
          pDVar3->x = pPVar1->field0_0x0;
          pDVar3->y = pPVar1->field1_0x4;
          pDVar3->z = pPVar1->field2_0x8;
          param_1->field13_0x7b8[local_8] = 8;
        }
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_8);
      }
    }
    else {
      ItemManager::FUN_00420130(&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a3,"魔符「スターダストレヴァリエ」");
      (param_1->inner).field1_0x4 = 0xfa;
      (param_1->field35_0x75b4).current = 300;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      local_c = (param_1->inner).field10_0x11c;
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 % 3 + 0x405);
        pPVar1 = (param_1->inner).field6_0x5c + local_8;
        pPVar1->field0_0x0 = (param_1->position).x;
        pPVar1->field1_0x4 = (param_1->position).y;
        pPVar1->field2_0x8 = (param_1->position).z;
        fVar4 = ((float)local_8 * 6.283185) / 8.0;
        dVar6 = cos((double)fVar4);
        (param_1->inner).field8_0xbc[local_8 * 3] = (int)((float)dVar6 + (float)dVar6);
        dVar6 = sin((double)fVar4);
        (param_1->inner).field8_0xbc[local_8 * 3 + 1] = (int)((float)dVar6 + (float)dVar6);
        (param_1->inner).field8_0xbc[local_8 * 3 + 2] = 0;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      ScreenEffect::RegisterChain(1,0x78,4,1);
    }
    param_1->field21_0x9e0 = 3;
    (param_1->inner).field2_0x8.previous = (param_1->inner).field2_0x8.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->inner).field2_0x8.current,
               &(param_1->inner).field2_0x8.subFrame);
  }
  else {
    Gui::FUN_00417314(&g_Gui);
    (param_1->inner).field0_0x0 = 0;
  }
  return;
}

