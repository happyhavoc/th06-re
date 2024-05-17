
void __thiscall Player::Die(Player *this)

{
  ZunTimer *pZVar1;
  int local_8;
  
  g_RunningSpellcardInfo.capture_spellcard = 0;
  EffectManager::SpawnEffect(&g_EffectManager,0xc,&this->positionCenter,1,0xff4040ff);
  EffectManager::SpawnEffect(&g_EffectManager,6,&this->positionCenter,0x10,0xffffffff);
  this->playerState = PLAYER_STATE_DEAD;
  (this->invulnerabilityTimer).current = 0;
  (this->invulnerabilityTimer).subFrame = 0.0;
  (this->invulnerabilityTimer).previous = -999;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_PICHUN,0);
  g_GameManager.deaths = g_GameManager.deaths + 1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    pZVar1 = this->laserTimer + local_8;
    pZVar1->current = 2;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
  }
  return;
}

