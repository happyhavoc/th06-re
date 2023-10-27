
undefined4 Player::OnDrawHighPrio(AnmVm *param_1)

{
  float *pfVar1;
  
  FUN_00429b00(param_1);
  if ((param_1[0x6e].pos2.y != 0.0) && (param_1[0x6e].alphaInterpTime.previous != 0)) {
    (*(code *)param_1[0x6e].alphaInterpTime.previous)(param_1);
  }
  (param_1->pos).x = g_GameManager.arcade_region_top_left_pos.x + param_1[4].rotation.x;
  (param_1->pos).y = g_GameManager.arcade_region_top_left_pos.y + param_1[4].rotation.y;
  (param_1->pos).z = 0.49;
  if ((char)g_GameManager.field22_0x1820 == '\0') {
    AnmManager::FUN_00432ad0(g_AnmManager,param_1);
    if ((*(char *)((int)param_1[9].matrix.m[1] + 6) != '\0') &&
       ((*(char *)(param_1[9].matrix.m[1] + 1) == '\0' ||
        (*(char *)(param_1[9].matrix.m[1] + 1) == '\x03')))) {
      param_1[1].pos.x = param_1[4].matrix.m[2][1];
      param_1[1].pos.y = param_1[4].matrix.m[2][2];
      param_1[1].pos.z = param_1[4].matrix.m[2][3];
      param_1[2].pos.x = param_1[4].matrix.m[3][0];
      param_1[2].pos.y = param_1[4].matrix.m[3][1];
      param_1[2].pos.z = param_1[4].matrix.m[3][2];
      param_1[1].pos.x = g_GameManager.arcade_region_top_left_pos.x + param_1[1].pos.x;
      pfVar1 = &param_1[1].pos.y;
      *pfVar1 = g_GameManager.arcade_region_top_left_pos.y + *pfVar1;
      param_1[2].pos.x = g_GameManager.arcade_region_top_left_pos.x + param_1[2].pos.x;
      pfVar1 = &param_1[2].pos.y;
      *pfVar1 = g_GameManager.arcade_region_top_left_pos.y + *pfVar1;
      param_1[1].pos.z = 0.491;
      param_1[2].pos.z = 0.491;
      AnmManager::FUN_00432cc0(g_AnmManager,param_1 + 1);
      AnmManager::FUN_00432cc0(g_AnmManager,param_1 + 2);
    }
  }
  return 1;
}

