
void Player::BombMarisaADraw(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float fVar2;
  float fVar3;
  int local_c;
  AnmVm *local_8;
  
  DarkenViewport(param_1);
  local_8 = (param_1->bombInfo).vms[0];
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    pDVar1 = (param_1->bombInfo).bomb_region_positions + local_c;
    (local_8->pos).x = pDVar1->x;
    (local_8->pos).y = pDVar1->y;
    (local_8->pos).z = pDVar1->z;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 3.2;
    local_8->scaleY = 3.2;
    AnmManager::Draw(g_AnmManager,local_8);
    pDVar1 = (param_1->bombInfo).bomb_region_velocities + local_c;
    fVar2 = pDVar1->z;
    fVar3 = pDVar1->y;
    (local_8->pos).x = (local_8->pos).x - pDVar1->x * 6.0;
    (local_8->pos).y = (local_8->pos).y - fVar3 * 6.0;
    (local_8->pos).z = (local_8->pos).z - fVar2 * 6.0;
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 2.2;
    local_8->scaleY = 2.2;
    AnmManager::Draw(g_AnmManager,local_8);
    pDVar1 = (param_1->bombInfo).bomb_region_velocities + local_c;
    fVar2 = pDVar1->z;
    fVar3 = pDVar1->y;
    (local_8->pos).x = (local_8->pos).x - (pDVar1->x + pDVar1->x);
    (local_8->pos).y = (local_8->pos).y - (fVar3 + fVar3);
    (local_8->pos).z = (local_8->pos).z - (fVar2 + fVar2);
    (local_8->pos).x = (local_8->pos).x + 64.0;
    (local_8->pos).y = (local_8->pos).y + 64.0;
    (local_8->pos).z = 0.0;
    pDVar1 = (param_1->bombInfo).bomb_region_velocities + local_c;
    fVar2 = pDVar1->z;
    fVar3 = pDVar1->y;
    (local_8->pos).x = (local_8->pos).x - (pDVar1->x + pDVar1->x);
    (local_8->pos).y = (local_8->pos).y - (fVar3 + fVar3);
    (local_8->pos).z = (local_8->pos).z - (fVar2 + fVar2);
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 1.0;
    local_8->scaleY = 1.0;
    AnmManager::Draw(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

