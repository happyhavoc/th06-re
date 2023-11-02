
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Player::FUN_00427630(float *param_1)

{
  int in_ECX;
  float local_10;
  float local_c;
  float local_8;
  
  if (_DAT_006d1bf0 == 0) {
    if ((int)g_GameManager.graze_in_stage < 9999) {
      g_GameManager.graze_in_stage = g_GameManager.graze_in_stage + 1;
    }
    if ((int)g_GameManager.field6_0x18._0_4_ < 999999) {
      g_GameManager.field6_0x18._0_4_ = g_GameManager.field6_0x18._0_4_ + 1;
    }
  }
  local_8 = (*(float *)(in_ECX + 0x448) + param_1[2]) * 0.5;
  local_c = (*(float *)(in_ECX + 0x444) + param_1[1]) * 0.5;
  local_10 = (*(float *)(in_ECX + 0x440) + *param_1) * 0.5;
  EffectManager::FUN_0040ef50((int *)&g_EffectManager,8,&local_10,1,0xffffffff);
  g_GameManager.score = g_GameManager.score + 500;
  FUN_0041c57e(6);
  DAT_0069bc30 = DAT_0069bc30 & 0xffffff3f | 0x80;
  FUN_004311e0(0x1e);
  return;
}

