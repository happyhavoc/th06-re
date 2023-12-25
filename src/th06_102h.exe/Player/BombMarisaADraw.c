
void Player::BombMarisaADraw(Player *param_1)

{
  PlayerUnknown *pPVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (param_1->inner).field10_0x11c;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    pPVar1 = (param_1->inner).field6_0x5c + local_c;
    (local_8->pos).x = pPVar1->field0_0x0;
    (local_8->pos).y = pPVar1->field1_0x4;
    (local_8->pos).z = pPVar1->field2_0x8;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 3.2;
    local_8->scaleY = 3.2;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    piVar2 = (param_1->inner).field8_0xbc + local_c * 3;
    fVar3 = (float)piVar2[2];
    fVar4 = (float)piVar2[1];
    (local_8->pos).x = (local_8->pos).x - (float)*piVar2 * 6.0;
    (local_8->pos).y = (local_8->pos).y - fVar4 * 6.0;
    (local_8->pos).z = (local_8->pos).z - fVar3 * 6.0;
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 2.2;
    local_8->scaleY = 2.2;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    piVar2 = (param_1->inner).field8_0xbc + local_c * 3;
    fVar3 = (float)piVar2[2];
    fVar4 = (float)piVar2[1];
    (local_8->pos).x = (local_8->pos).x - ((float)*piVar2 + (float)*piVar2);
    (local_8->pos).y = (local_8->pos).y - (fVar4 + fVar4);
    (local_8->pos).z = (local_8->pos).z - (fVar3 + fVar3);
    (local_8->pos).x = (local_8->pos).x + 64.0;
    (local_8->pos).y = (local_8->pos).y + 64.0;
    (local_8->pos).z = 0.0;
    piVar2 = (param_1->inner).field8_0xbc + local_c * 3;
    fVar3 = (float)piVar2[2];
    fVar4 = (float)piVar2[1];
    (local_8->pos).x = (local_8->pos).x - ((float)*piVar2 + (float)*piVar2);
    (local_8->pos).y = (local_8->pos).y - (fVar4 + fVar4);
    (local_8->pos).z = (local_8->pos).z - (fVar3 + fVar3);
    (local_8->pos).x = (local_8->pos).x + -32.0;
    (local_8->pos).y = (local_8->pos).y + -32.0;
    (local_8->pos).z = 0.0;
    local_8->scaleX = 1.0;
    local_8->scaleY = 1.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

