
void __thiscall Player::FUN_00427630(Player *this,float *param_1)

{
  D3DXVECTOR3 local_10;
  
  if (g_Player.inner.field0_0x0 == 0) {
    if ((int)g_GameManager.graze_in_stage < 9999) {
      g_GameManager.graze_in_stage = g_GameManager.graze_in_stage + 1;
    }
    if ((int)g_GameManager.unk_0x18 < 999999) {
      g_GameManager.unk_0x18 = g_GameManager.unk_0x18 + 1;
    }
  }
  local_10.z = ((this->position).z + param_1[2]) * 0.5;
  local_10.y = ((this->position).y + param_1[1]) * 0.5;
  local_10.x = ((this->position).x + *param_1) * 0.5;
  EffectManager::FUN_0040ef50(&g_EffectManager,8,&local_10,1,0xffffffff);
  g_GameManager.score = g_GameManager.score + 500;
  GameManager::IncreaseSubrank(&g_GameManager,6);
  g_Gui.flags = g_Gui.flags & 0xffffff3f | 0x80;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0x1e,0);
  return;
}

