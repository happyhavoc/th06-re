
/* WARNING: Removing unreachable block (ram,0x004300e2) */
/* WARNING: Removing unreachable block (ram,0x00430173) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 FUN_0042ffc0(ScreenEffect *param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((char)g_GameManager.field23_0x2c == '\0') {
    (param_1->timer).previous = (param_1->timer).current;
    Supervisor::TickTimer(&g_Supervisor,&(param_1->timer).current,&(param_1->timer).subFrame);
    if ((param_1->timer).current < param_1->field5_0x14) {
      fVar1 = (((float)(param_1->timer).current + (param_1->timer).subFrame) *
              (float)(param_1->field7_0x1c - param_1->field6_0x18)) / (float)param_1->field5_0x14 +
              (float)param_1->field6_0x18;
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

