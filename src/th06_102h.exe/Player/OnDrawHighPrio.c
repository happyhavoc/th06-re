
ChainCallbackResult Player::OnDrawHighPrio(Player *param_1)

{
  D3DXVECTOR3 *pDVar1;
  float *pfVar2;
  
  FUN_00429b00(param_1);
  if (((param_1->inner).field0_0x0 != 0) && ((param_1->inner).bombDraw != (void *)0x0)) {
    (*(code *)(param_1->inner).bombDraw)(param_1);
  }
  (param_1->vm0).pos.x = g_GameManager.arcade_region_top_left_pos.x + (param_1->position).x;
  (param_1->vm0).pos.y = g_GameManager.arcade_region_top_left_pos.y + (param_1->position).y;
  (param_1->vm0).pos.z = 0.49;
  if (g_GameManager.is_in_retry_menu == 0) {
    AnmManager::FUN_00432ad0(g_AnmManager,&param_1->vm0);
    if ((param_1->field23_0x9e2 != 0) &&
       ((param_1->field21_0x9e0 == 0 || (param_1->field21_0x9e0 == 3)))) {
      param_1->vm1[0].pos.x = param_1->field10_0x4a0[0].x;
      param_1->vm1[0].pos.y = param_1->field10_0x4a0[0].y;
      param_1->vm1[0].pos.z = param_1->field10_0x4a0[0].z;
      param_1->vm1[1].pos.x = param_1->field10_0x4a0[1].x;
      param_1->vm1[1].pos.y = param_1->field10_0x4a0[1].y;
      param_1->vm1[1].pos.z = param_1->field10_0x4a0[1].z;
      pDVar1 = &param_1->vm1[0].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &param_1->vm1[0].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      pDVar1 = &param_1->vm1[1].pos;
      pDVar1->x = g_GameManager.arcade_region_top_left_pos.x + pDVar1->x;
      pfVar2 = &param_1->vm1[1].pos.y;
      *pfVar2 = g_GameManager.arcade_region_top_left_pos.y + *pfVar2;
      param_1->vm1[0].pos.z = 0.491;
      param_1->vm1[1].pos.z = 0.491;
      AnmManager::FUN_00432cc0(g_AnmManager,param_1->vm1);
      AnmManager::FUN_00432cc0(g_AnmManager,param_1->vm1 + 1);
    }
  }
  return CHAIN_CALLBACK_RESULT_CONTINUE;
}

