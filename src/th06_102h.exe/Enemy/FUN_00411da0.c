
undefined4 __thiscall Enemy::FUN_00411da0(Enemy *this)

{
  undefined4 uVar1;
  int local_c;
  Enemy *local_8;
  
  if (this->life < this->life_callback_threshold) {
    this->life = this->life_callback_threshold;
    EclManager::FUN_00407440
              (&g_EclManager,&this->current_context,*(short *)&this->life_callback_sub);
    this->life_callback_threshold = -1;
    this->timer_callback_sub = this->death_callback_sub;
    this->bullet_rank_speed_low = -0.5;
    this->bullet_rank_speed_high = 0.5;
    this->bullet_rank_amount1_low = 0;
    this->bullet_rank_amount1_high = 0;
    this->bullet_rank_amount2_low = 0;
    this->bullet_rank_amount2_high = 0;
    this->stack_depth = 0;
    local_8 = Enemy_ARRAY_004b8898;
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      if (((((char)local_8->flags1 < '\0') && ((local_8->flags2 >> 3 & 1) == 0)) &&
          (local_8->life = 0, (local_8->flags2 & 1) == 0)) && (-1 < local_8->death_callback_sub)) {
        EclManager::FUN_00407440
                  (&g_EclManager,&local_8->current_context,*(short *)&local_8->death_callback_sub);
        local_8->death_callback_sub = -1;
      }
      local_8 = local_8 + 1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

