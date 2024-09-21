
void th06::Player::BombMarisaACalc(Player *this)

{
  D3DXVECTOR3 *pDVar1;
  D3DXVECTOR3 *pDVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  AnmVm *local_c;
  int i;
  
  if ((this->bombInfo).bombTimer.current < (this->bombInfo).bombDuration) {
    if (((this->bombInfo).bombTimer.current == (this->bombInfo).bombTimer.previous) ||
       ((this->bombInfo).bombTimer.current != 0)) {
      for (i = 0; i < 8; i = i + 1) {
        pDVar1 = (this->bombInfo).bomb_region_velocities + i;
        fVar3 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->z;
        fVar4 = g_Supervisor.effectiveFramerateMultiplier * pDVar1->y;
        pDVar2 = (this->bombInfo).bomb_region_positions + i;
        pDVar2->x = g_Supervisor.effectiveFramerateMultiplier * pDVar1->x + pDVar2->x;
        pDVar2->y = fVar4 + pDVar2->y;
        pDVar2->z = fVar3 + pDVar2->z;
        if (((this->bombInfo).bombTimer.current != (this->bombInfo).bombTimer.previous) &&
           ((this->bombInfo).bombTimer.current % 3 != 0)) {
          this->bomb_projectiles[i].pos.x = (this->bombInfo).bomb_region_positions[i].x;
          this->bomb_projectiles[i].pos.y = (this->bombInfo).bomb_region_positions[i].y;
          this->bomb_projectiles[i].size.x = 128.0;
          this->bomb_projectiles[i].size.y = 128.0;
          this->bomb_region_sizes[i].x = 128.0;
          this->bomb_region_sizes[i].y = 128.0;
          pDVar1 = (this->bombInfo).bomb_region_positions + i;
          pDVar2 = this->bomb_region_positions + i;
          pDVar2->x = pDVar1->x;
          pDVar2->y = pDVar1->y;
          pDVar2->z = pDVar1->z;
          this->bomb_region_damages[i] = 8;
        }
        AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0] + i);
      }
    }
    else {
      ItemManager::RemoveAllItems(&g_ItemManager);
      Gui::ShowBombNamePortrait(&g_Gui,0x4a3,"魔符「スターダストレヴァリエ」");
      (this->bombInfo).bombDuration = 250;
      (this->invulnerabilityTimer).current = 300;
      (this->invulnerabilityTimer).subFrame = 0.0;
      (this->invulnerabilityTimer).previous = -999;
      local_c = (this->bombInfo).vms[0];
      for (i = 0; i < 8; i = i + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,i % 3 + 0x405);
        pDVar1 = (this->bombInfo).bomb_region_positions + i;
        pDVar1->x = (this->positionCenter).x;
        pDVar1->y = (this->positionCenter).y;
        pDVar1->z = (this->positionCenter).z;
        fVar3 = ((float)i * 6.283185) / 8.0;
        dVar5 = cos((double)fVar3);
        (this->bombInfo).bomb_region_velocities[i].x = (float)dVar5 + (float)dVar5;
        dVar5 = sin((double)fVar3);
        (this->bombInfo).bomb_region_velocities[i].y = (float)dVar5 + (float)dVar5;
        (this->bombInfo).bomb_region_velocities[i].z = 0.0;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      ScreenEffect::RegisterChain(1,0x78,4,1,0);
    }
    this->playerState = PLAYER_STATE_INVULNERABLE;
    (this->bombInfo).bombTimer.previous = (this->bombInfo).bombTimer.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(this->bombInfo).bombTimer.current,
               &(this->bombInfo).bombTimer.subFrame);
  }
  else {
    Gui::EndPlayerSpellcard(&g_Gui);
    (this->bombInfo).isInUse = 0;
  }
  return;
}

