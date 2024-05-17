
/* WARNING: Removing unreachable block (ram,0x004300e2) */
/* WARNING: Removing unreachable block (ram,0x00430173) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 OnUpdateEffect1(ScreenEffect *param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((char)g_GameManager.isTimeStopped == '\0') {
    (param_1->timer).previous = (param_1->timer).current;
    Supervisor::TickTimer(&g_Supervisor,&(param_1->timer).current,&(param_1->timer).subFrame);
    if ((param_1->timer).current < param_1->ticks) {
      fVar1 = (((float)(param_1->timer).current + (param_1->timer).subFrame) *
              (float)(param_1->param4 - param_1->param3)) / (float)param_1->ticks +
              (float)param_1->param3;
      uVar3 = Rng::GetRandomU32(&g_Rng);
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
      uVar3 = Rng::GetRandomU32(&g_Rng);
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

