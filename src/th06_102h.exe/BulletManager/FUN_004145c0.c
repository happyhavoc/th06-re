
undefined4 __thiscall BulletManager::FUN_004145c0(BulletManager *this,EnemyBulletShooter *param_1)

{
  int iVar1;
  float fVar2;
  int local_10;
  uint local_8;
  
  fVar2 = Player::FUN_00428700(&g_Player,&(param_1->position).x);
  for (local_10 = 0; local_10 < (short)param_1->count2; local_10 = local_10 + 1) {
    for (local_8 = 0; (int)local_8 < (int)(short)param_1->count1; local_8 = local_8 + 1) {
      iVar1 = FUN_004135b0(this,param_1,local_8,local_10,fVar2);
      if (iVar1 != 0) goto LAB_0041463b;
    }
  }
LAB_0041463b:
  if ((param_1->flags & 0x200) != 0) {
    SoundPlayer::possibly_play_sound_by_idx(&g_SoundPlayer,param_1->sfx);
  }
  return 0;
}

