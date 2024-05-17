
void Player::BombMarisaACalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->bombInfo).bombTimer.current < (param_1->bombInfo).bombDuration) {
    if (((param_1->bombInfo).bombTimer.current == (param_1->bombInfo).bombTimer.previous) ||
       ((param_1->bombInfo).bombTimer.current != 0)) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        pDVar1 = (param_1->bombInfo).unkbc + local_8;
        fVar3 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->z;
        fVar4 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->y;
        pDVar2 = (param_1->bombInfo).unk5c + local_8;
        pDVar2->x = g_Supervisor.effectiveFramerateMultiplier * pDVar1->x + pDVar2->x;
        pDVar2->y = fVar4 + pDVar2->y;
        pDVar2->z = fVar3 + pDVar2->z;
        if (((param_1->bombInfo).bombTimer.current != (param_1->bombInfo).bombTimer.previous) &&
           ((param_1->bombInfo).bombTimer.current % 3 != 0)) {
          param_1->unk_8b8[local_8].position1.x = (param_1->bombInfo).unk5c[local_8].x;
          param_1->unk_8b8[local_8].position1.y = (param_1->bombInfo).unk5c[local_8].y;
          param_1->unk_8b8[local_8].size1.x = 128.0;
          param_1->unk_8b8[local_8].size1.y = 128.0;
          param_1->unk_638[local_8].x = 128.0;
          param_1->unk_638[local_8].y = 128.0;
          pDVar1 = (param_1->bombInfo).unk5c + local_8;
          pDVar2 = param_1->unk_4b8 + local_8;
          pDVar2->x = pDVar1->x;
          pDVar2->y = pDVar1->y;
          pDVar2->z = pDVar1->z;
          param_1->unk_7b8[local_8] = 8;
        }
        AnmManager::ExecuteScript(g_AnmManager,(param_1->bombInfo).vms[0] + local_8);
      }
    }
    else {
      ItemManager::RemoveAllItems(&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a3,"魔符「スターダストレヴァリエ」");
      (param_1->bombInfo).bombDuration = 0xfa;
      (param_1->invulnerabilityTimer).current = 300;
      (param_1->invulnerabilityTimer).subFrame = 0.0;
      (param_1->invulnerabilityTimer).previous = -999;
      local_c = (param_1->bombInfo).vms[0];
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 % 3 + 0x405);
        pDVar1 = (param_1->bombInfo).unk5c + local_8;
        pDVar1->x = (param_1->positionCenter).x;
        pDVar1->y = (param_1->positionCenter).y;
        pDVar1->z = (param_1->positionCenter).z;
        fVar3 = ((float)local_8 * 6.283185) / 8.0;
        dVar5 = cos((double)fVar3);
        (param_1->bombInfo).unkbc[local_8].x = (float)dVar5 + (float)dVar5;
        dVar5 = sin((double)fVar3);
        (param_1->bombInfo).unkbc[local_8].y = (float)dVar5 + (float)dVar5;
        (param_1->bombInfo).unkbc[local_8].z = 0.0;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      ScreenEffect::RegisterChain(1,0x78,4,1,0);
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

