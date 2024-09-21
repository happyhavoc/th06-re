
void th06::Player::BombMarisaBDraw(Player *param_1)

{
  float fVar1;
  double dVar2;
  int local_c;
  AnmVm *local_8;
  
  DarkenViewport(param_1);
  local_8 = (param_1->bombInfo).vms[0];
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    fVar1 = (((float)local_c * 0.6283185) / 3.0 - 3.141593) + 1.256637;
    (local_8->pos).x = (param_1->positionCenter).x;
    (local_8->pos).y = (param_1->positionCenter).y;
    (local_8->pos).z = (param_1->positionCenter).z;
    dVar2 = cos((double)fVar1);
    (local_8->pos).x =
         ((float)dVar2 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).x;
    dVar2 = sin((double)fVar1);
    (local_8->pos).y =
         ((float)dVar2 * local_8->sprite->heightPx * local_8->scaleY) / 2.0 + (local_8->pos).y;
    fVar1 = utils::AddNormalizeAngle(3.141593,3.141593);
    (local_8->rotation).z = fVar1;
    (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + (local_8->pos).x;
    (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + (local_8->pos).y;
    (local_8->pos).z = 0.0;
    AnmManager::Draw(g_AnmManager,local_8);
    local_8 = local_8 + 1;
  }
  return;
}

