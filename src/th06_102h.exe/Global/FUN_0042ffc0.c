
/* WARNING: Removing unreachable block (ram,0x004300e2) */
/* WARNING: Removing unreachable block (ram,0x00430173) */

undefined4 FUN_0042ffc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (g_GameManager.field6_0x18[20] == '\0') {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    Supervisor::FUN_00424285(&g_Supervisor,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14)) {
      fVar1 = (((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) *
              (float)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18))) /
              (float)*(int *)(param_1 + 0x14) + (float)*(int *)(param_1 + 0x18);
      uVar3 = GetRandomU32(&g_Rng.seed);
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        g_GameManager.arcade_region_top_left_pos.x = 32.0;
        g_GameManager.arcade_region_size.x = 384.0;
      }
      else if (uVar3 == 1) {
        g_GameManager.arcade_region_top_left_pos.x = fVar1 + 32.0;
        g_GameManager.arcade_region_size.x = 384.0 - fVar1;
      }
      else if (uVar3 == 2) {
        g_GameManager.arcade_region_top_left_pos.x = 32.0;
        g_GameManager.arcade_region_size.x = 384.0 - fVar1;
      }
      uVar3 = GetRandomU32(&g_Rng.seed);
      uVar3 = uVar3 % 3;
      if (uVar3 == 0) {
        g_GameManager.arcade_region_top_left_pos.y = 16.0;
        g_GameManager.arcade_region_size.y = 448.0;
      }
      else if (uVar3 == 1) {
        g_GameManager.arcade_region_top_left_pos.y = fVar1 + 16.0;
        g_GameManager.arcade_region_size.y = 448.0 - fVar1;
      }
      else if (uVar3 == 2) {
        g_GameManager.arcade_region_top_left_pos.y = 16.0;
        g_GameManager.arcade_region_size.y = 448.0 - fVar1;
      }
      uVar2 = 1;
    }
    else {
      g_GameManager.arcade_region_top_left_pos.x = 32.0;
      g_GameManager.arcade_region_top_left_pos.y = 16.0;
      g_GameManager.arcade_region_size.x = 384.0;
      g_GameManager.arcade_region_size.y = 448.0;
      uVar2 = 0;
    }
  }
  else {
    g_GameManager.arcade_region_top_left_pos.x = 32.0;
    g_GameManager.arcade_region_top_left_pos.y = 16.0;
    g_GameManager.arcade_region_size.x = 384.0;
    g_GameManager.arcade_region_size.y = 448.0;
    uVar2 = 1;
  }
  return uVar2;
}

