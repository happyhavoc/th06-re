
void FUN_00416c50(Bullet *param_1)

{
  AnmVm *anmVm;
  
  switch(param_1->state) {
  case 2:
    anmVm = &(param_1->sprites).spriteSpawnEffectFast;
    break;
  case 3:
    anmVm = &(param_1->sprites).spriteSpawnEffectNormal;
    break;
  case 4:
    anmVm = &(param_1->sprites).spriteSpawnEffectSlow;
    break;
  case 5:
    anmVm = &(param_1->sprites).spriteSpawnEffectDonut;
    break;
  default:
    anmVm = (AnmVm *)param_1;
  }
  (anmVm->pos).x = g_GameManager.arcade_region_top_left_pos.x + (param_1->pos).x;
  (anmVm->pos).y = g_GameManager.arcade_region_top_left_pos.y + (param_1->pos).y;
  (anmVm->pos).z = 0.0;
  (anmVm->color).color = (anmVm->color).color & 0xff000000 | 0xffffff;
  if (anmVm->autoRotate != 0) {
    (anmVm->rotation).z = 1.570796 - param_1->angle;
  }
  AnmManager::Draw(g_AnmManager,anmVm);
  return;
}

