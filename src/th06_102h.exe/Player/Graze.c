
void __thiscall Player::Graze(Player *this,D3DXVECTOR3 *param_1)

{
  D3DXVECTOR3 local_10;
  
  if (g_Player.inner.isUsingBomb == 0) {
    if ((int)g_GameManager.graze_in_stage < 9999) {
      g_GameManager.graze_in_stage = g_GameManager.graze_in_stage + 1;
    }
    if ((int)g_GameManager.graze_in_total < 999999) {
      g_GameManager.graze_in_total = g_GameManager.graze_in_total + 1;
    }
  }
  local_10.z = ((this->positionCenter).z + param_1->z) * 0.5;
  local_10.y = ((this->positionCenter).y + param_1->y) * 0.5;
  local_10.x = ((this->positionCenter).x + param_1->x) * 0.5;
  EffectManager::SpawnEffect(&g_EffectManager,8,&local_10,1,0xffffffff);
  g_GameManager.score = g_GameManager.score + 500;
  GameManager::IncreaseSubrank(&g_GameManager,6);
  g_Gui.flags = g_Gui.flags & 0xffffff3f | 0x80;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_GRAZE,0);
  return;
}

