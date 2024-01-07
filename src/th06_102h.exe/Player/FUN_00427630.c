
void __thiscall Player::FUN_00427630(Player *this,float *param_1)

{
  float local_10;
  float local_c;
  float local_8;
  
  if (g_Player.inner.field0_0x0 == 0) {
    if ((int)g_GameManager.graze_in_stage < 9999) {
      g_GameManager.graze_in_stage = g_GameManager.graze_in_stage + 1;
    }
    if ((int)g_GameManager.field6_0x18 < 999999) {
      g_GameManager.field6_0x18 = g_GameManager.field6_0x18 + 1;
    }
  }
  local_8 = ((this->position).z + param_1[2]) * 0.5;
  local_c = ((this->position).y + param_1[1]) * 0.5;
  local_10 = ((this->position).x + *param_1) * 0.5;
  EffectManager::FUN_0040ef50((int *)&g_EffectManager,8,&local_10,1,0xffffffff);
  g_GameManager.score = g_GameManager.score + 500;
  GameManager::FUN_0041c57e(&g_GameManager,6);
  g_Gui.flags = g_Gui.flags & 0xffffff3f | 0x80;
  SoundPlayer::FUN_004311e0(&g_SoundPlayer,0x1e);
  return;
}

