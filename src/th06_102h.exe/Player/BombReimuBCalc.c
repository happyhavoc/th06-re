
void Player::BombReimuBCalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  PlayerUnknown *pPVar2;
  D3DXVECTOR3 *pDVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4) {
    if (((param_1->inner).field2_0x8.current == (param_1->inner).field2_0x8.previous) ||
       ((param_1->inner).field2_0x8.current != 0)) {
      if ((param_1->inner).field2_0x8.current == 0x3c) {
        ScreenEffect::RegisterChain(1,0x50,0x14,0,0);
      }
      param_1->field15_0x8b8[0].size1.x = 62.0;
      param_1->field15_0x8b8[0].size1.y = 448.0;
      param_1->field15_0x8b8[1].size1.x = 384.0;
      param_1->field15_0x8b8[1].size1.y = 62.0;
      param_1->field15_0x8b8[2].size1.x = 62.0;
      param_1->field15_0x8b8[2].size1.y = 448.0;
      param_1->field15_0x8b8[3].size1.x = 384.0;
      param_1->field15_0x8b8[3].size1.y = 62.0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + local_8);
        if ((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) {
          uVar8 = (param_1->inner).field2_0x8.current & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 != 0) {
            param_1->field15_0x8b8[local_8].position1.x =
                 (param_1->inner).field6_0x5c[local_8].field0_0x0 +
                 (param_1->inner).field10_0x11c[local_8].pos2.x;
            param_1->field15_0x8b8[local_8].position1.y =
                 (param_1->inner).field6_0x5c[local_8].field1_0x4 +
                 (param_1->inner).field10_0x11c[local_8].pos2.y;
            param_1->field12_0x638[local_8].x = param_1->field15_0x8b8[local_8].size1.x;
            param_1->field12_0x638[local_8].y = param_1->field15_0x8b8[local_8].size1.y;
            pDVar1 = &(param_1->inner).field10_0x11c[local_8].pos2;
            pPVar2 = (param_1->inner).field6_0x5c + local_8;
            fVar4 = pPVar2->field2_0x8;
            fVar5 = pDVar1->z;
            fVar6 = pPVar2->field1_0x4;
            fVar7 = pDVar1->y;
            pDVar3 = param_1->field11_0x4b8 + local_8;
            pDVar3->x = pPVar2->field0_0x0 + pDVar1->x;
            pDVar3->y = fVar6 + fVar7;
            pDVar3->z = fVar4 + fVar5;
            param_1->field13_0x7b8[local_8] = 8;
          }
        }
      }
    }
    else {
      ItemManager::FUN_00420130(g_ItemManager);
      Gui::FUN_00417acd(&g_Gui,0x4a3,&DAT_0046a410);
      (param_1->inner).field1_0x4 = 0x8c;
      (param_1->field35_0x75b4).current = 200;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      local_c = (param_1->inner).field10_0x11c;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::FUN_004051b0(g_AnmManager,local_c,local_8 + 0x489);
        local_c = local_c + 1;
      }
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,6);
      (param_1->inner).field6_0x5c[0].field0_0x0 = (param_1->position).x;
      (param_1->inner).field6_0x5c[0].field1_0x4 = 224.0;
      (param_1->inner).field6_0x5c[0].field2_0x8 = 0.42;
      (param_1->inner).field6_0x5c[1].field0_0x0 = 192.0;
      (param_1->inner).field6_0x5c[1].field1_0x4 = (param_1->position).y;
      (param_1->inner).field6_0x5c[1].field2_0x8 = 0.415;
      (param_1->inner).field6_0x5c[2].field0_0x0 = (param_1->position).x;
      (param_1->inner).field6_0x5c[2].field1_0x4 = 224.0;
      (param_1->inner).field6_0x5c[2].field2_0x8 = 0.41;
      (param_1->inner).field6_0x5c[3].field0_0x0 = 192.0;
      (param_1->inner).field6_0x5c[3].field1_0x4 = (param_1->position).y;
      (param_1->inner).field6_0x5c[3].field2_0x8 = 0.405;
      ScreenEffect::RegisterChain(1,0x3c,2,6,0);
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

