
void FUN_00416c50(AnmVm *param_1)

{
  AnmVm *local_8;
  
  switch(*(undefined2 *)((int)param_1[5].matrix.m[3] + 2)) {
  case 2:
    local_8 = param_1 + 1;
    break;
  case 3:
    local_8 = param_1 + 2;
    break;
  case 4:
    local_8 = param_1 + 3;
    break;
  case 5:
    local_8 = param_1 + 4;
    break;
  default:
    local_8 = param_1;
  }
  (local_8->pos).x = g_GameManager.arcade_region_top_left_pos.x + param_1[5].angleVel.y;
  (local_8->pos).y = g_GameManager.arcade_region_top_left_pos.y + param_1[5].angleVel.z;
  (local_8->pos).z = 0.0;
  (local_8->color).color = (local_8->color).color & 0xff000000 | 0xffffff;
  if (local_8->autoRotate != 0) {
    (local_8->rotation).z = 1.570796 - param_1[5].matrix.m[0][1];
  }
  AnmManager::FUN_00432cc0(g_AnmManager,local_8);
  return;
}

