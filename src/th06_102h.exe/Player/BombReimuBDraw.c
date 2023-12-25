
void Player::BombReimuBDraw(Player *param_1)

{
  PlayerUnknown *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (param_1->inner).field10_0x11c;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    pPVar1 = (param_1->inner).field6_0x5c + local_c;
    fVar2 = pPVar1->field2_0x8;
    fVar3 = (local_8->pos2).z;
    fVar4 = pPVar1->field1_0x4;
    fVar5 = (local_8->pos2).y;
    (local_8->pos).x = pPVar1->field0_0x0 + (local_8->pos2).x;
    (local_8->pos).y = fVar4 + fVar5;
    (local_8->pos).z = fVar2 + fVar3;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

