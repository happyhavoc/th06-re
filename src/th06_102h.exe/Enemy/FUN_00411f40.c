
undefined4 __thiscall Enemy::FUN_00411f40(Enemy *this)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  Enemy *local_8;
  
  if ((this->flags2 >> 3 & 1) != 0) {
    g_Gui.spellcard_seconds_remaining =
         (this->timer_callback_threshold - (this->boss_timer).current) / 0x3c;
  }
  if ((this->boss_timer).current < this->timer_callback_threshold) {
    uVar2 = 0;
  }
  else {
    if (0 < this->life_callback_threshold) {
      this->life = this->life_callback_threshold;
      this->life_callback_threshold = -1;
    }
    EclManager::FUN_00407440
              (&g_EclManager,&this->current_context,*(short *)&this->timer_callback_sub);
    this->timer_callback_threshold = -1;
    this->timer_callback_sub = *(int *)&this->death_callback_sub;
    (this->boss_timer).current = 0;
    (this->boss_timer).subFrame = 0.0;
    (this->boss_timer).previous = -999;
    if ((this->flags3 >> 4 & 1) == 0) {
      g_RunningSpellcardInfo.capture_spellcard = 0;
      if (g_RunningSpellcardInfo.is_active != 0) {
        g_RunningSpellcardInfo.is_active = g_RunningSpellcardInfo.is_active + 1;
      }
      BulletManager::RemoveAllBullets(&g_BulletManager,0);
    }
    local_8 = Enemy_ARRAY_004b8898;
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      if (((((char)local_8->flags1 < '\0') && ((local_8->flags2 >> 3 & 1) == 0)) &&
          (local_8->life = 0, (local_8->flags2 & 1) == 0)) &&
         (iVar1._0_2_ = local_8->death_callback_sub, iVar1._2_2_ = local_8->interrupts[0],
         -1 < iVar1)) {
        EclManager::FUN_00407440
                  (&g_EclManager,&local_8->current_context,local_8->death_callback_sub);
        local_8->death_callback_sub = -1;
        local_8->interrupts[0] = -1;
      }
      local_8 = local_8 + 1;
    }
    this->bullet_rank_speed_low = -0.5;
    this->bullet_rank_speed_high = 0.5;
    this->bullet_rank_amount1_low = 0;
    this->bullet_rank_amount1_high = 0;
    this->bullet_rank_amount2_low = 0;
    this->bullet_rank_amount2_high = 0;
    this->stack_depth = 0;
    uVar2 = 1;
  }
  return uVar2;
}

