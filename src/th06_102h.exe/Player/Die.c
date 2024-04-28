
void __thiscall Player::Die(Player *this)

{
  ZunTimer *pZVar1;
  int local_8;
  
  BOOL_005a5f8c = 0;
  EffectManager::SpawnEffect(&g_EffectManager,0xc,&this->position,1,0xff4040ff);
  EffectManager::SpawnEffect(&g_EffectManager,6,&this->position,0x10,0xffffffff);
  this->field21_0x9e0 = 2;
  (this->field35_0x75b4).current = 0;
  (this->field35_0x75b4).subFrame = 0.0;
  (this->field35_0x75b4).previous = -999;
  SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_PICHUN,0);
  g_GameManager.deaths = g_GameManager.deaths + 1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    pZVar1 = this->field16_0x9b8 + local_8;
    pZVar1->current = 2;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
  }
  return;
}

