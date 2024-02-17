
void __thiscall EnemyManager::Initialize(EnemyManager *this)

{
  int iVar1;
  EnemyManager *pEVar2;
  Enemy *pEVar3;
  int local_8;
  
  pEVar2 = this;
                    /* memset(this, 0, sizeof(EnemyManager)); */
  for (iVar1 = 0x3b97b; iVar1 != 0; iVar1 = iVar1 + -1) {
    pEVar2->stg_enm_anm_filename = (char *)0x0;
    pEVar2 = (EnemyManager *)&pEVar2->stg_enm2_anm_filename;
  }
  pEVar3 = &this->template;
                    /* memset(&this->template, 0, sizeof(Enemy)); */
  for (iVar1 = 0x3b2; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pEVar3->primary_vm).rotation.x = 0.0;
    pEVar3 = (Enemy *)&(pEVar3->primary_vm).rotation.y;
  }
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    (this->template).vms[local_8].anmFileIndex = -1;
  }
  (this->template).flags1 = (this->template).flags1 | 0x80;
  (this->template).boss_timer.current = 0;
  (this->template).boss_timer.subFrame = 0.0;
  (this->template).boss_timer.previous = -999;
  (this->template).flags2 = (this->template).flags2 | 1;
  (this->template).flags2 = (this->template).flags2 | 2;
  (this->template).flags2 = (this->template).flags2 & 0xfb;
  (this->template).hitbox_dimensions.x = 12.0;
  (this->template).hitbox_dimensions.y = 12.0;
  (this->template).hitbox_dimensions.z = 12.0;
  (this->template).axis_speed.x = 0.0;
  (this->template).axis_speed.y = 0.0;
  (this->template).axis_speed.z = 0.0;
  (this->template).angular_velocity = 0.0;
  (this->template).angle = 0.0;
  (this->template).acceleration = 0.0;
  (this->template).speed = 0.0;
  (this->template).flags1 = (this->template).flags1 & 0xfc;
  (this->template).flags1 = (this->template).flags1 & 0xdf;
  (this->template).flags1 = (this->template).flags1 & 0xbf;
  (this->template).flags2 = (this->template).flags2 & 0xf7;
  (this->template).stack_depth = 0;
  (this->template).life = 1;
  (this->template).score = 100;
  (this->template).death_anm1 = 0;
  (this->template).death_anm2 = 0;
  (this->template).death_anm3 = 0;
  (this->template).shoot_interval = 0;
  (this->template).shoot_interval_timer.current = 0;
  (this->template).shoot_interval_timer.subFrame = 0.0;
  (this->template).shoot_interval_timer.previous = -999;
  (this->template).shoot_offset.x = 0.0;
  (this->template).shoot_offset.y = 0.0;
  (this->template).shoot_offset.z = 0.0;
  (this->template).anm_ex_left = -1;
  (this->template).anm_ex_right = -1;
  (this->template).anm_ex_defaults = -1;
  (this->template).flags2 = (this->template).flags2 | 0x10;
  (this->template).flags2 = (this->template).flags2 & 0x1f;
  (this->template).death_callback_sub = -1;
  (this->template).interrupts[0] = -1;
  (this->template).flags3 = (this->template).flags3 & 0xfe;
  (this->template).effect_idx = 0;
  (this->template).run_interrupt = -1;
  (this->template).life_callback_threshold = -1;
  (this->template).timer_callback_threshold = -1;
  (this->template).laser_store = 0;
  (this->template).field43_0xe41 = 0;
  (this->template).flags3 = (this->template).flags3 & 0xfd;
  (this->template).bullet_rank_speed_low = -0.5;
  (this->template).bullet_rank_speed_high = 0.5;
  return;
}

