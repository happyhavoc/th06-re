
ChainCallbackResult Player::OnDrawHighPrio(Player *this)

{
  D3DXVECTOR3 *pDVar1;
  float *pfVar2;
  
  DrawBullets(this);
  if (((this->bombInfo).isUsingBomb != 0) && ((this->bombInfo).bombDraw != (void *)0x0)) {
    (*(code *)(this->bombInfo).bombDraw)(this);
  }
  (this->playerVm).pos.x = g_GameManager.arcade_region_top_left_pos.x + (this->positionCenter).x;
  (this->playerVm).pos.y = g_GameManager.arcade_region_top_left_pos.y + (this->positionCenter).y;
  (this->playerVm).pos.z = 0.49;
  if (g_GameManager.is_in_retry_menu == 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->playerVm);
    if ((this->orbState != ORB_HIDDEN) &&
       ((this->playerState == PLAYER_STATE_ALIVE || (this->playerState == PLAYER_STATE_INVULNERABLE)
        ))) {
      this->orbsVm[0].pos.x = this->orbsPosition[0].x;
      this->orbsVm[0].pos.y = this->orbsPosition[0].y;
      this->orbsVm[0].pos.z = this->orbsPosition[0].z;
      this->orbsVm[1].pos.x = this->orbsPosition[1].x;
      this->orbsVm[1].pos.y = this->orbsPosition[1].y;
      this->orbsVm[1].pos.z = this->orbsPosition[1].z;
      pDVar1 = &this->orbsVm[0].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &this->orbsVm[0].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      pDVar1 = &this->orbsVm[1].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &this->orbsVm[1].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      this->orbsVm[0].pos.z = 0.491;
      this->orbsVm[1].pos.z = 0.491;
      AnmManager::Draw(g_AnmManager,this->orbsVm);
      AnmManager::Draw(g_AnmManager,this->orbsVm + 1);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

