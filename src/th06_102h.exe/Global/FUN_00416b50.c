
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00416b50(Bullet *param_1)

{
  AnmVm *local_8;
  
  switch(param_1->state) {
  case 2:
    local_8 = &(param_1->vms).spawn_effect_short;
    break;
  case 3:
    local_8 = &(param_1->vms).spawn_effect_medium;
    break;
  case 4:
    local_8 = &(param_1->vms).spawn_effect_long;
    break;
  case 5:
    local_8 = &(param_1->vms).spawn_effect_short_with_memset;
    break;
  default:
    local_8 = (AnmVm *)param_1;
  }
  (local_8->pos).x = (param_1->pos).x;
  (local_8->pos).y = (param_1->pos).y;
  (local_8->pos).z = 0.0;
  (local_8->color).color = (local_8->color).color & 0xff000000 | 0xffffff;
  if (local_8->autoRotate != 0) {
    (local_8->rotation).z = 1.570796 - param_1->angle;
  }
  AnmManager::FUN_00433590(g_AnmManager,local_8);
  return;
}

