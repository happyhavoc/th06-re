
void th06::Player::BombMarisaBCalc(Player *this)

{
  D3DXVECTOR3 *pDVar1;
  uint uVar2;
  AnmVm *local_c;
  int local_8;
  
  if ((this->bombInfo).bombTimer.current < (this->bombInfo).bombDuration) {
    if (((this->bombInfo).bombTimer.current == (this->bombInfo).bombTimer.previous) ||
       ((this->bombInfo).bombTimer.current != 0)) {
      if ((this->bombInfo).bombTimer.current == 0x3c) {
        ScreenEffect::RegisterChain(1,0x3c,1,7,0);
      }
      else if ((this->bombInfo).bombTimer.current == 0x78) {
        ScreenEffect::RegisterChain(1,200,0x18,0,0);
      }
      if ((this->bombInfo).bombTimer.current != (this->bombInfo).bombTimer.previous) {
        uVar2 = (this->bombInfo).bombTimer.current & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        if (uVar2 != 0) {
          this->bomb_projectiles[0].pos.x = 192.0;
          this->bomb_projectiles[0].pos.y = (this->positionCenter).y / 2.0;
          this->bomb_projectiles[0].size.x = 384.0;
          this->bomb_projectiles[0].size.y = (this->positionCenter).y;
          this->bomb_region_sizes[0].x = 384.0;
          this->bomb_region_sizes[0].y = (this->positionCenter).y;
          this->bomb_region_positions[0].x = this->bomb_projectiles[0].pos.x;
          this->bomb_region_positions[0].y = this->bomb_projectiles[0].pos.y;
          this->bomb_region_damages[0] = 0xc;
        }
      }
      AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0]);
      AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0] + 1);
      AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0] + 2);
      AnmManager::ExecuteScript(g_AnmManager,(this->bombInfo).vms[0] + 3);
    }
    else {
      ItemManager::RemoveAllItems(&g_ItemManager);
      Gui::ShowBombNamePortrait(&g_Gui,0x4a1,"恋符「マスタースパーク」");
      (this->bombInfo).bombDuration = 300;
      (this->invulnerabilityTimer).current = 0x168;
      (this->invulnerabilityTimer).subFrame = 0.0;
      (this->invulnerabilityTimer).previous = -999;
      local_c = (this->bombInfo).vms[0];
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        AnmManager::ExecuteAnmIdx(g_AnmManager,local_c,local_8 + 0x408);
        pDVar1 = (this->bombInfo).bomb_region_positions + local_8;
        pDVar1->x = (this->positionCenter).x;
        pDVar1->y = (this->positionCenter).y;
        pDVar1->z = (this->positionCenter).z;
        local_c = local_c + 1;
      }
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BOMB_MARISA_B,0);
      this->verticalMovementSpeedMultiplierDuringBomb = 0.3;
      this->horizontalMovementSpeedMultiplierDuringBomb = 0.3;
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
    this->verticalMovementSpeedMultiplierDuringBomb = 1.0;
    this->horizontalMovementSpeedMultiplierDuringBomb = 1.0;
  }
  return;
}

