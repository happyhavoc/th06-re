
void Player::DrawBullets(Player *this)

{
  float fVar1;
  PlayerBullet *bullets;
  int bullet_idx;
  
  bullets = this->bullets;
  for (bullet_idx = 0; bullet_idx < 0x50; bullet_idx = bullet_idx + 1) {
    if (bullets->bulletState == BULLET_STATE_FIRED) {
      if ((bullets->vm).autoRotate != 0) {
        fVar1 = AddNormalizeAngle((bullets->unk_134).z,3.141593);
        (bullets->vm).rotation.z = 1.570796 - fVar1;
      }
      AnmManager::FUN_00433590(g_AnmManager,&bullets->vm);
    }
    bullets = bullets + 1;
  }
  return;
}

