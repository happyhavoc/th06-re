
void th06::Player::DrawBulletExplosions(Player *param_1)

{
  float fVar1;
  PlayerBullet *bullets;
  int bullet_idx;
  
  bullets = param_1->bullets;
  for (bullet_idx = 0; bullet_idx < 0x50; bullet_idx = bullet_idx + 1) {
    if (bullets->bulletState == BULLET_STATE_COLLIDED) {
      if ((bullets->vm).autoRotate != 0) {
        fVar1 = utils::AddNormalizeAngle((bullets->unk_134).z,3.141593);
        (bullets->vm).rotation.z = 1.570796 - fVar1;
      }
                    /* the only difference between functions */
      (bullets->vm).pos.z = 0.4;
      AnmManager::Draw2(g_AnmManager,&bullets->vm);
    }
    bullets = bullets + 1;
  }
  return;
}

