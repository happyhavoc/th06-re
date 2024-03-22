
void Player::BombMarisaBCalc(Player *param_1)

{
  PlayerUnknown *pPVar1;
  uint uVar2;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->inner).field2_0x8.current < (param_1->inner).field1_0x4) {
    if (((param_1->inner).field2_0x8.current == (param_1->inner).field2_0x8.previous) ||
       ((param_1->inner).field2_0x8.current != 0)) {
      if ((param_1->inner).field2_0x8.current == 0x3c) {
        ScreenEffect::RegisterChain(1,0x3c,1,7,0);
      }
      else if ((param_1->inner).field2_0x8.current == 0x78) {
        ScreenEffect::RegisterChain(1,200,0x18,0,0);
      }
      if ((param_1->inner).field2_0x8.current != (param_1->inner).field2_0x8.previous) {
        uVar2 = (param_1->inner).field2_0x8.current & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          param_1->field15_0x8b8[0].position1.x = 192.0;
          param_1->field15_0x8b8[0].position1.y = (param_1->position).y / 2.0;
          param_1->field15_0x8b8[0].size1.x = 384.0;
          param_1->field15_0x8b8[0].size1.y = (param_1->position).y;
          param_1->field12_0x638[0].x = 384.0;
          param_1->field12_0x638[0].y = (param_1->position).y;
          param_1->field11_0x4b8[0].x = param_1->field15_0x8b8[0].position1.x;
          param_1->field11_0x4b8[0].y = param_1->field15_0x8b8[0].position1.y;
          param_1->field13_0x7b8[0] = 0xc;
        }
      }
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + 1);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + 2);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).field10_0x11c + 3);
    }
    else {
      ItemManager::FUN_00420130((ItemManager *)&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a1,"恋符「マスタースパーク」");
      (param_1->inner).field1_0x4 = 300;
      (param_1->field35_0x75b4).current = 0x168;
      (param_1->field35_0x75b4).subFrame = 0.0;
      (param_1->field35_0x75b4).previous = -999;
      local_c = (param_1->inner).field10_0x11c;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 + 0x408);
        pPVar1 = (param_1->inner).field6_0x5c + local_8;
        pPVar1->field0_0x0 = (param_1->position).x;
        pPVar1->field1_0x4 = (param_1->position).y;
        pPVar1->field2_0x8 = (param_1->position).z;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x13);
      param_1->field18_0x9d4 = 0.3;
      param_1->field17_0x9d0 = 0.3;
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
    param_1->field18_0x9d4 = 1.0;
    param_1->field17_0x9d0 = 1.0;
  }
  return;
}

