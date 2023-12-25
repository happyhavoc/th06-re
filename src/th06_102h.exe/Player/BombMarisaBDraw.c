
void Player::BombMarisaBDraw(Player *param_1)

{
  float10 fVar1;
  float fVar2;
  int local_c;
  AnmVm *local_8;
  
  FUN_00406020(param_1);
  local_8 = (param_1->inner).field10_0x11c;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    fVar2 = (((float)local_c * 0.6283185) / 3.0 - 3.141593) + 1.256637;
    (local_8->pos).x = (param_1->position).x;
    (local_8->pos).y = (param_1->position).y;
    (local_8->pos).z = (param_1->position).z;
    fVar1 = (float10)FUN_0045bda4((double)fVar2);
    (local_8->pos).x =
         ((float)fVar1 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).x;
    fVar1 = (float10)FUN_0045bcf4((double)fVar2);
    (local_8->pos).y =
         ((float)fVar1 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).y;
    fVar2 = FUN_0041e850(1.570796 - fVar2,3.141593);
    (local_8->rotation).z = fVar2;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::FUN_00432cc0(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

