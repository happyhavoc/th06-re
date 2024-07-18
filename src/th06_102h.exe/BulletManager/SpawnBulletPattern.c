
ZunResult __thiscall
BulletManager::SpawnBulletPattern(BulletManager *this,EnemyBulletShooter *bulletProps)

{
  int iVar1;
  float angle;
  int local_10;
  uint local_8;
  
  angle = Player::AngleToPlayer(&g_Player,&bulletProps->position);
  for (local_10 = 0; local_10 < (short)bulletProps->count2; local_10 = local_10 + 1) {
    for (local_8 = 0; (int)local_8 < (int)(short)bulletProps->count1; local_8 = local_8 + 1) {
      iVar1 = SpawnSingleBullet(this,bulletProps,local_8,local_10,angle);
      if (iVar1 != 0) goto LAB_0041463b;
    }
  }
LAB_0041463b:
  if ((bulletProps->flags & 0x200) != 0) {
    SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,bulletProps->sfx,0);
  }
  return ZUN_SUCCESS;
}

