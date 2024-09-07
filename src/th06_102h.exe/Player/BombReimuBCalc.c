
void th06::Player::BombReimuBCalc(Player *this)

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
  int i;
  
  if ((this->bombInfo).bombTimer.current < (this->bombInfo).bombDuration) {
    if (((this->bombInfo).bombTimer.current == (this->bombInfo).bombTimer.previous) ||
       ((this->bombInfo).bombTimer.current != 0)) {
      if ((this->bombInfo).bombTimer.current == 60) {
        ScreenEffect::RegisterChain(1,0x50,0x14,0,0);
      }
      this->bomb_projectiles[0].size.x = 62.0;
      this->bomb_projectiles[0].size.y = 448.0;
      this->bomb_projectiles[1].size.x = 384.0;
      this->bomb_projectiles[1].size.y = 62.0;
      this->bomb_projectiles[2].size.x = 62.0;
      this->bomb_projectiles[2].size.y = 448.0;
      this->bomb_projectiles[3].size.x = 384.0;
      this->bomb_projectiles[3].size.y = 62.0;
      for (i = 0; i < 4; i = i + 1) {
        AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0] + i);
        if ((this->bombInfo).bombTimer.current != (this->bombInfo).bombTimer.previous) {
          uVar8 = (this->bombInfo).bombTimer.current & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 != 0) {
            this->bomb_projectiles[i].pos.x =
                 (this->bombInfo).bomb_region_positions[i].x + (this->bombInfo).vms[0][i].offset.x;
            this->bomb_projectiles[i].pos.y =
                 (this->bombInfo).bomb_region_positions[i].y + (this->bombInfo).vms[0][i].offset.y;
            this->bomb_region_sizes[i].x = this->bomb_projectiles[i].size.x;
            this->bomb_region_sizes[i].y = this->bomb_projectiles[i].size.y;
            pDVar1 = &(this->bombInfo).vms[0][i].offset;
            pDVar2 = (this->bombInfo).bomb_region_positions + i;
            fVar4 = pDVar2->z;
            fVar5 = pDVar1->z;
            fVar6 = pDVar2->y;
            fVar7 = pDVar1->y;
            pDVar3 = this->bomb_region_positions + i;
            pDVar3->x = pDVar2->x + pDVar1->x;
            pDVar3->y = fVar6 + fVar7;
            pDVar3->z = fVar4 + fVar5;
            this->bomb_region_damages[i] = 8;
          }
        }
      }
    }
    else {
      ItemManager::RemoveAllItems(&g_ItemManager);
      Gui::ShowBombNamePortrait(&g_Gui,0x4a3,"夢符「封魔陣」");
      (this->bombInfo).bombDuration = 140;
      (this->invulnerabilityTimer).current = 200;
      (this->invulnerabilityTimer).subFrame = 0.0;
      (this->invulnerabilityTimer).previous = -999;
      local_c = (this->bombInfo).vms[0];
      for (i = 0; i < 4; i = i + 1) {
        AnmManager::ExecuteAnmIdx((AnmManager *)g_AnmManager,local_c,i + 0x489);
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_REIMARI,0);
      (this->bombInfo).bomb_region_positions[0].x = (this->positionCenter).x;
      (this->bombInfo).bomb_region_positions[0].y = 224.0;
      (this->bombInfo).bomb_region_positions[0].z = 0.42;
      (this->bombInfo).bomb_region_positions[1].x = 192.0;
      (this->bombInfo).bomb_region_positions[1].y = (this->positionCenter).y;
      (this->bombInfo).bomb_region_positions[1].z = 0.415;
      (this->bombInfo).bomb_region_positions[2].x = (this->positionCenter).x;
      (this->bombInfo).bomb_region_positions[2].y = 224.0;
      (this->bombInfo).bomb_region_positions[2].z = 0.41;
      (this->bombInfo).bomb_region_positions[3].x = 192.0;
      (this->bombInfo).bomb_region_positions[3].y = (this->positionCenter).y;
      (this->bombInfo).bomb_region_positions[3].z = 0.405;
      ScreenEffect::RegisterChain(1,0x3c,2,6,0);
    }
    this->playerState = PLAYER_STATE_INVULNERABLE;
    (this->bombInfo).bombTimer.previous = (this->bombInfo).bombTimer.current;
    Supervisor::TickTimer
              (&g_Supervisor,&(this->bombInfo).bombTimer.current,
               &(this->bombInfo).bombTimer.subFrame);
  }
  else {
    Gui::ImplVm5SetInterruptToOne(&g_Gui);
    (this->bombInfo).isInUse = 0;
  }
  return;
}

