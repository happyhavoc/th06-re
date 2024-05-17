
void Player::BombMarisaACalc(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  AnmVm *local_c;
  int local_8;
  
  if ((param_1->inner).unk8.current < (param_1->inner).unk4) {
    if (((param_1->inner).unk8.current == (param_1->inner).unk8.previous) ||
       ((param_1->inner).unk8.current != 0)) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        pDVar1 = (param_1->inner).unkbc + local_8;
        fVar3 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->z;
        fVar4 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->y;
        pDVar2 = (param_1->inner).unk5c + local_8;
        pDVar2->x = g_Supervisor.effectiveFramerateMultiplier * pDVar1->x + pDVar2->x;
        pDVar2->y = fVar4 + pDVar2->y;
        pDVar2->z = fVar3 + pDVar2->z;
        if (((param_1->inner).unk8.current != (param_1->inner).unk8.previous) &&
           ((param_1->inner).unk8.current % 3 != 0)) {
          param_1->unk_8b8[local_8].position1.x = (param_1->inner).unk5c[local_8].x;
          param_1->unk_8b8[local_8].position1.y = (param_1->inner).unk5c[local_8].y;
          param_1->unk_8b8[local_8].size1.x = 128.0;
          param_1->unk_8b8[local_8].size1.y = 128.0;
          param_1->unk_638[local_8].x = 128.0;
          param_1->unk_638[local_8].y = 128.0;
          pDVar1 = (param_1->inner).unk5c + local_8;
          pDVar2 = param_1->unk_4b8 + local_8;
          pDVar2->x = pDVar1->x;
          pDVar2->y = pDVar1->y;
          pDVar2->z = pDVar1->z;
          param_1->unk_7b8[local_8] = 8;
        }
        AnmManager::ExecuteScript(g_AnmManager,(param_1->inner).vms[0] + local_8);
      }
    }
    else {
      ItemManager::FUN_00420130(&g_ItemManager);
      Gui::string_related(&g_Gui,0x4a3,"魔符「スターダストレヴァリエ」");
      (param_1->inner).unk4 = 0xfa;
      (param_1->blinkingPlayerTimer).current = 300;
      (param_1->blinkingPlayerTimer).subFrame = 0.0;
      (param_1->blinkingPlayerTimer).previous = -999;
      local_c = (param_1->inner).vms[0];
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 % 3 + 0x405);
        pDVar1 = (param_1->inner).unk5c + local_8;
        pDVar1->x = (param_1->positionCenter).x;
        pDVar1->y = (param_1->positionCenter).y;
        pDVar1->z = (param_1->positionCenter).z;
        fVar3 = ((float)local_8 * 6.283185) / 8.0;
        dVar5 = cos((double)fVar3);
        (param_1->inner).unkbc[local_8].x = (float)dVar5 + (float)dVar5;
        dVar5 = sin((double)fVar3);
        (param_1->inner).unkbc[local_8].y = (float)dVar5 + (float)dVar5;
        (param_1->inner).unkbc[local_8].z = 0.0;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      ScreenEffect::RegisterChain(1,0x78,4,1,0);
    }
    param_1->playerState = PLAYER_STATE_USING_BOMB;
    (param_1->inner).unk8.previous = (param_1->inner).unk8.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->inner).unk8.current,&(param_1->inner).unk8.subFrame);
  }
  else {
    Gui::ImplVm5SetInterruptToOne(&g_Gui);
    (param_1->inner).isUsingBomb = 0;
  }
  return;
}

