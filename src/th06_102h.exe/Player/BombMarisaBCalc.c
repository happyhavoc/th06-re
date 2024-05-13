
void Player::BombMarisaBCalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  uint uVar2;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->inner).unk8.current < (param_1->inner).unk4) {
    if (((param_1->inner).unk8.current == (param_1->inner).unk8.previous) ||
       ((param_1->inner).unk8.current != 0)) {
      if ((param_1->inner).unk8.current == 0x3c) {
        ScreenEffect::RegisterChain(1,0x3c,1,7,0);
      }
      else if ((param_1->inner).unk8.current == 0x78) {
        ScreenEffect::RegisterChain(1,200,0x18,0,0);
      }
      if ((param_1->inner).unk8.current != (param_1->inner).unk8.previous) {
        uVar2 = (param_1->inner).unk8.current & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          param_1->unk_8b8[0].position1.x = 192.0;
          param_1->unk_8b8[0].position1.y = (param_1->positionCenter).y / 2.0;
          param_1->unk_8b8[0].size1.x = 384.0;
          param_1->unk_8b8[0].size1.y = (param_1->positionCenter).y;
          param_1->unk_638[0].x = 384.0;
          param_1->unk_638[0].y = (param_1->positionCenter).y;
          param_1->unk_4b8[0].x = param_1->unk_8b8[0].position1.x;
          param_1->unk_4b8[0].y = param_1->unk_8b8[0].position1.y;
          param_1->unk_7b8[0] = 0xc;
        }
      }
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[0]);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[0] + 1);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[0] + 2);
      AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[0] + 3);
    }
    else {
      ItemManager::FUN_00420130(&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a1,"恋符「マスタースパーク」");
      (param_1->inner).unk4 = 300;
      (param_1->blinkingPlayerTimer).current = 0x168;
      (param_1->blinkingPlayerTimer).subFrame = 0.0;
      (param_1->blinkingPlayerTimer).previous = -999;
      local_c = (param_1->inner).vms[0];
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 + 0x408);
        pDVar1 = (param_1->inner).unk5c + local_8;
        pDVar1->x = (param_1->positionCenter).x;
        pDVar1->y = (param_1->positionCenter).y;
        pDVar1->z = (param_1->positionCenter).z;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_MARISA_B,0);
      param_1->verticalMovementSpeedMultiplierDuringBomb = 0.3;
      param_1->horizontalMovementSpeedMultiplierDuringBomb = 0.3;
    }
    param_1->playerState = PLAYER_STATE_USING_BOMB;
    (param_1->inner).unk8.previous = (param_1->inner).unk8.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->inner).unk8.current,&(param_1->inner).unk8.subFrame);
  }
  else {
    Gui::ImplVm5SetInterruptToOne(&g_Gui);
    (param_1->inner).isUsingBomb = 0;
    param_1->verticalMovementSpeedMultiplierDuringBomb = 1.0;
    param_1->horizontalMovementSpeedMultiplierDuringBomb = 1.0;
  }
  return;
}

