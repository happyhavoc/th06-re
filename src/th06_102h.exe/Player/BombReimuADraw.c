
void th06::Player::BombReimuADraw(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int idx;
  AnmVm *bombInfoVm;
  
  DarkenViewport(param_1);
  bombInfoVm = (param_1->bombInfo).vms[0];
  for (idx = 0; idx < 8; idx = idx + 1) {
    if ((param_1->bombInfo).reimuABombProjectilesState[idx] != 0) {
      pDVar1 = (param_1->bombInfo).bomb_region_positions + idx;
      fVar2 = pDVar1->z;
      fVar3 = (bombInfoVm->offset).z;
      fVar4 = pDVar1->y;
      fVar5 = (bombInfoVm->offset).y;
      (bombInfoVm->pos).x = pDVar1->x + (bombInfoVm->offset).x;
      (bombInfoVm->pos).y = fVar4 + fVar5;
      (bombInfoVm->pos).z = fVar2 + fVar3;
      (bombInfoVm->pos).x = g_GameManager.arcade_region_top_left_pos.x + (bombInfoVm->pos).x;
      pfVar6 = &(bombInfoVm->pos).y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      (bombInfoVm->pos).z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,bombInfoVm);
      pDVar1 = (param_1->bombInfo).bomb_region_positions + idx;
      fVar2 = pDVar1->z;
      fVar3 = bombInfoVm[1].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = bombInfoVm[1].offset.y;
      bombInfoVm[1].pos.x = pDVar1->x + bombInfoVm[1].offset.x;
      bombInfoVm[1].pos.y = fVar4 + fVar5;
      bombInfoVm[1].pos.z = fVar2 + fVar3;
      bombInfoVm[1].pos.x = g_GameManager.arcade_region_top_left_pos.x + bombInfoVm[1].pos.x;
      pfVar6 = &bombInfoVm[1].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      bombInfoVm[1].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,bombInfoVm + 1);
      pDVar1 = (param_1->bombInfo).bomb_region_positions + idx;
      fVar2 = pDVar1->z;
      fVar3 = bombInfoVm[2].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = bombInfoVm[2].offset.y;
      bombInfoVm[2].pos.x = pDVar1->x + bombInfoVm[2].offset.x;
      bombInfoVm[2].pos.y = fVar4 + fVar5;
      bombInfoVm[2].pos.z = fVar2 + fVar3;
      bombInfoVm[2].pos.x = g_GameManager.arcade_region_top_left_pos.x + bombInfoVm[2].pos.x;
      pfVar6 = &bombInfoVm[2].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      bombInfoVm[2].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,bombInfoVm + 2);
      pDVar1 = (param_1->bombInfo).bomb_region_positions + idx;
      fVar2 = pDVar1->z;
      fVar3 = bombInfoVm[3].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = bombInfoVm[3].offset.y;
      bombInfoVm[3].pos.x = pDVar1->x + bombInfoVm[3].offset.x;
      bombInfoVm[3].pos.y = fVar4 + fVar5;
      bombInfoVm[3].pos.z = fVar2 + fVar3;
      bombInfoVm[3].pos.x = g_GameManager.arcade_region_top_left_pos.x + bombInfoVm[3].pos.x;
      pfVar6 = &bombInfoVm[3].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      bombInfoVm[3].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,bombInfoVm + 3);
    }
    bombInfoVm = bombInfoVm + 4;
  }
  return;
}

