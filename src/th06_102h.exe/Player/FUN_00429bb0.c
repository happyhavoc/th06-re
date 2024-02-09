
void Player::FUN_00429bb0(Player *param_1)

{
  float fVar1;
  PlayerBullet *bullet;
  int local_8;
  
  bullet = param_1->bullets;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (bullet->field11_0x14e == 2) {
      if ((bullet->field0_0x0).autoRotate != 0) {
        fVar1 = add_normalize_angle(bullet->field8_0x13c,3.141593);
        (bullet->field0_0x0).rotation.z = 1.570796 - fVar1;
      }
      (bullet->field0_0x0).pos.z = 0.4;
      AnmManager::FUN_00433590(g_AnmManager,&bullet->field0_0x0);
    }
    bullet = bullet + 1;
  }
  return;
}

