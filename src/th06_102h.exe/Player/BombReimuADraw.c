
void Player::BombReimuADraw(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (param_1->bombInfo).vms[0];
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if ((param_1->bombInfo).reimuABombProjectilesState[local_c] != 0) {
      pDVar1 = (param_1->bombInfo).unk5c + local_c;
      fVar2 = pDVar1->z;
      fVar3 = (local_8->offset).z;
      fVar4 = pDVar1->y;
      fVar5 = (local_8->offset).y;
      (local_8->pos).x = pDVar1->x + (local_8->offset).x;
      (local_8->pos).y = fVar4 + fVar5;
      (local_8->pos).z = fVar2 + fVar3;
      (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
      pfVar6 = &(local_8->pos).y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      (local_8->pos).z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,local_8);
      pDVar1 = (param_1->bombInfo).unk5c + local_c;
      fVar2 = pDVar1->z;
      fVar3 = local_8[1].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = local_8[1].offset.y;
      local_8[1].pos.x = pDVar1->x + local_8[1].offset.x;
      local_8[1].pos.y = fVar4 + fVar5;
      local_8[1].pos.z = fVar2 + fVar3;
      local_8[1].pos.x = g_GameManager.arcade_region_top_left_pos.x + local_8[1].pos.x;
      pfVar6 = &local_8[1].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      local_8[1].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,local_8 + 1);
      pDVar1 = (param_1->bombInfo).unk5c + local_c;
      fVar2 = pDVar1->z;
      fVar3 = local_8[2].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = local_8[2].offset.y;
      local_8[2].pos.x = pDVar1->x + local_8[2].offset.x;
      local_8[2].pos.y = fVar4 + fVar5;
      local_8[2].pos.z = fVar2 + fVar3;
      local_8[2].pos.x = g_GameManager.arcade_region_top_left_pos.x + local_8[2].pos.x;
      pfVar6 = &local_8[2].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      local_8[2].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,local_8 + 2);
      pDVar1 = (param_1->bombInfo).unk5c + local_c;
      fVar2 = pDVar1->z;
      fVar3 = local_8[3].offset.z;
      fVar4 = pDVar1->y;
      fVar5 = local_8[3].offset.y;
      local_8[3].pos.x = pDVar1->x + local_8[3].offset.x;
      local_8[3].pos.y = fVar4 + fVar5;
      local_8[3].pos.z = fVar2 + fVar3;
      local_8[3].pos.x = g_GameManager.arcade_region_top_left_pos.x + local_8[3].pos.x;
      pfVar6 = &local_8[3].pos.y;
      *pfVar6 = g_GameManager.arcade_region_top_left_pos.y + *pfVar6;
      local_8[3].pos.z = 0.0;
      AnmManager::DrawNoRotation(g_AnmManager,local_8 + 3);
    }
    local_8 = local_8 + 4;
  }
  return;
}

