
ChainCallbackResult Player::OnDrawHighPrio(Player *this)

{
  D3DXVECTOR3 *pDVar1;
  float *pfVar2;
  
  UpdateBullets(this);
  if (((this->inner).isUsingBomb != 0) && ((this->inner).bombDraw != (void *)0x0)) {
    (*(code *)(this->inner).bombDraw)(this);
  }
  (this->vm0).pos.x = g_GameManager.arcade_region_top_left_pos.x + (this->positionCenter).x;
  (this->vm0).pos.y = g_GameManager.arcade_region_top_left_pos.y + (this->positionCenter).y;
  (this->vm0).pos.z = 0.49;
  if (g_GameManager.is_in_retry_menu == 0) {
    AnmManager::DrawNoRotation(g_AnmManager,&this->vm0);
    if ((this->extraBulletSpawnState != EXTRA_BULLET_NONE) &&
       ((this->playerState == PLAYER_STATE_ALIVE || (this->playerState == PLAYER_STATE_USING_BOMB)))
       ) {
      this->vm1[0].pos.x = this->bulletSpawnPositions[0].x;
      this->vm1[0].pos.y = this->bulletSpawnPositions[0].y;
      this->vm1[0].pos.z = this->bulletSpawnPositions[0].z;
      this->vm1[1].pos.x = this->bulletSpawnPositions[1].x;
      this->vm1[1].pos.y = this->bulletSpawnPositions[1].y;
      this->vm1[1].pos.z = this->bulletSpawnPositions[1].z;
      pDVar1 = &this->vm1[0].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &this->vm1[0].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      pDVar1 = &this->vm1[1].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &this->vm1[1].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      this->vm1[0].pos.z = 0.491;
      this->vm1[1].pos.z = 0.491;
      AnmManager::Draw(g_AnmManager,this->vm1);
      AnmManager::Draw(g_AnmManager,this->vm1 + 1);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

