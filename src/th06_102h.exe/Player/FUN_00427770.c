
void __thiscall Player::FUN_00427770(Player *this)

{
  AnmTimer *pAVar1;
  int local_8;
  
  BOOL_005a5f8c = 0;
  EffectManager::FUN_0040ef50(&g_EffectManager,0xc,&this->position,1,0xff4040ff);
  EffectManager::FUN_0040ef50(&g_EffectManager,6,&this->position,0x10,0xffffffff);
  this->field21_0x9e0 = 2;
  (this->field35_0x75b4).current = 0;
  (this->field35_0x75b4).subFrame = 0.0;
  (this->field35_0x75b4).previous = -999;
  SoundPlayer::FUN_004311e0(&g_SoundPlayer,4);
  g_GameManager.field8_0x20 = g_GameManager.field8_0x20 + 1;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    pAVar1 = this->field16_0x9b8 + local_8;
    pAVar1->current = 2;
    pAVar1->subFrame = 0.0;
    pAVar1->previous = -999;
  }
  return;
}

