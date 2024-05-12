
void Player::BombReimuBDraw(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (param_1->inner).vms[0];
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    pDVar1 = (param_1->inner).unk5c + local_c;
    fVar2 = pDVar1->z;
    fVar3 = (local_8->offset).z;
    fVar4 = pDVar1->y;
    fVar5 = (local_8->offset).y;
    (local_8->pos).x = pDVar1->x + (local_8->offset).x;
    (local_8->pos).y = fVar4 + fVar5;
    (local_8->pos).z = fVar2 + fVar3;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::Draw(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

