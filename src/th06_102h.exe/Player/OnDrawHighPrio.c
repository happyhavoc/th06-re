
ChainCallbackResult Player::OnDrawHighPrio(Player *this)

{
  D3DXVECTOR3 *pDVar1;
  float *pfVar2;
  
  update_bullets(this);
  if (((this->inner).field0_0x0 != 0) && ((this->inner).bombDraw != (void *)0x0)) {
    (*(code *)(this->inner).bombDraw)(this);
  }
  (this->vm0).pos.x = g_GameManager.arcade_region_top_left_pos.x + (this->position).x;
  (this->vm0).pos.y = g_GameManager.arcade_region_top_left_pos.y + (this->position).y;
  (this->vm0).pos.z = 0.49;
  if (g_GameManager.is_in_retry_menu == 0) {
    AnmManager::FUN_00432ad0(g_AnmManager,&this->vm0);
    if ((this->field23_0x9e2 != 0) && ((this->field21_0x9e0 == 0 || (this->field21_0x9e0 == 3)))) {
      this->vm1[0].pos.x = this->field10_0x4a0[0].x;
      this->vm1[0].pos.y = this->field10_0x4a0[0].y;
      this->vm1[0].pos.z = this->field10_0x4a0[0].z;
      this->vm1[1].pos.x = this->field10_0x4a0[1].x;
      this->vm1[1].pos.y = this->field10_0x4a0[1].y;
      this->vm1[1].pos.z = this->field10_0x4a0[1].z;
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

