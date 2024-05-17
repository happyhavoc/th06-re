
void Player::StartFireBulletTimer(Player *param_1)

{
  if ((param_1->fireBulletTimer).current < 0) {
    (param_1->fireBulletTimer).current = 0;
    (param_1->fireBulletTimer).subFrame = 0.0;
    (param_1->fireBulletTimer).previous = -999;
  }
  return;
}

