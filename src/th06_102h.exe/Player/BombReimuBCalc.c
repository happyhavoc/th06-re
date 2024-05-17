
void Player::BombReimuBCalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  D3DXVECTOR3 *pDVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->bombInfo).bombTimer.current < (param_1->bombInfo).bombDuration) {
    if (((param_1->bombInfo).bombTimer.current == (param_1->bombInfo).bombTimer.previous) ||
       ((param_1->bombInfo).bombTimer.current != 0)) {
      if ((param_1->bombInfo).bombTimer.current == 0x3c) {
        ScreenEffect::RegisterChain(1,0x50,0x14,0,0);
      }
      param_1->unk_8b8[0].size1.x = 62.0;
      param_1->unk_8b8[0].size1.y = 448.0;
      param_1->unk_8b8[1].size1.x = 384.0;
      param_1->unk_8b8[1].size1.y = 62.0;
      param_1->unk_8b8[2].size1.x = 62.0;
      param_1->unk_8b8[2].size1.y = 448.0;
      param_1->unk_8b8[3].size1.x = 384.0;
      param_1->unk_8b8[3].size1.y = 62.0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[0] + local_8);
        if ((param_1->bombInfo).bombTimer.current != (param_1->bombInfo).bombTimer.previous) {
          uVar8 = (param_1->bombInfo).bombTimer.current & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 != 0) {
            param_1->unk_8b8[local_8].position1.x =
                 (param_1->bombInfo).unk5c[local_8].x + (param_1->bombInfo).vms[0][local_8].offset.x
            ;
            param_1->unk_8b8[local_8].position1.y =
                 (param_1->bombInfo).unk5c[local_8].y + (param_1->bombInfo).vms[0][local_8].offset.y
            ;
            param_1->unk_638[local_8].x = param_1->unk_8b8[local_8].size1.x;
            param_1->unk_638[local_8].y = param_1->unk_8b8[local_8].size1.y;
            pDVar1 = &(param_1->bombInfo).vms[0][local_8].offset;
            pDVar2 = (param_1->bombInfo).unk5c + local_8;
            fVar4 = pDVar2->z;
            fVar5 = pDVar1->z;
            fVar6 = pDVar2->y;
            fVar7 = pDVar1->y;
            pDVar3 = param_1->unk_4b8 + local_8;
            pDVar3->x = pDVar2->x + pDVar1->x;
            pDVar3->y = fVar6 + fVar7;
            pDVar3->z = fVar4 + fVar5;
            param_1->unk_7b8[local_8] = 8;
          }
        }
      }
    }
    else {
      ItemManager::RemoveAllItems(&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a3,"夢符「封魔陣」");
      (param_1->bombInfo).bombDuration = 0x8c;
      (param_1->invulnerabilityTimer).current = 200;
      (param_1->invulnerabilityTimer).subFrame = 0.0;
      (param_1->invulnerabilityTimer).previous = -999;
      local_c = (param_1->bombInfo).vms[0];
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 + 0x489);
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      (param_1->bombInfo).unk5c[0].x = (param_1->positionCenter).x;
      (param_1->bombInfo).unk5c[0].y = 224.0;
      (param_1->bombInfo).unk5c[0].z = 0.42;
      (param_1->bombInfo).unk5c[1].x = 192.0;
      (param_1->bombInfo).unk5c[1].y = (param_1->positionCenter).y;
      (param_1->bombInfo).unk5c[1].z = 0.415;
      (param_1->bombInfo).unk5c[2].x = (param_1->positionCenter).x;
      (param_1->bombInfo).unk5c[2].y = 224.0;
      (param_1->bombInfo).unk5c[2].z = 0.41;
      (param_1->bombInfo).unk5c[3].x = 192.0;
      (param_1->bombInfo).unk5c[3].y = (param_1->positionCenter).y;
      (param_1->bombInfo).unk5c[3].z = 0.405;
      ScreenEffect::RegisterChain(1,0x3c,2,6,0);
    }
    param_1->playerState = PLAYER_STATE_INVULNERABLE;
    (param_1->bombInfo).bombTimer.previous = (param_1->bombInfo).bombTimer.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->bombInfo).bombTimer.current,
               &(param_1->bombInfo).bombTimer.subFrame);
  }
  else {
    Gui::ImplVm5SetInterruptToOne(&g_Gui);
    (param_1->bombInfo).isUsingBomb = 0;
  }
  return;
}

