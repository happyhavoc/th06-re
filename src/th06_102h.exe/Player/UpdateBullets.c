
void Player::UpdateBullets(Player *this)

{
  float fVar1;
  PlayerBullet *bullets;
  int bullet_idx;
  
  bullets = this->bullets;
  for (bullet_idx = 0; bullet_idx < 0x50; bullet_idx = bullet_idx + 1) {
    if (bullets->field11_0x14e == 1) {
      if ((bullets->vm).autoRotate != 0) {
        fVar1 = add_normalize_angle(bullets->field8_0x13c,3.141593);
        (bullets->vm).rotation.z = 1.570796 - fVar1;
      }
      AnmManager::FUN_00433590(g_AnmManager,&bullets->vm);
    }
    bullets = bullets + 1;
  }
  return;
}

