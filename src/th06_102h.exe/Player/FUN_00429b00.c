
void Player::FUN_00429b00(Player *param_1)

{
  float fVar1;
  PlayerBullet *local_c;
  int local_8;
  
  local_c = param_1->bullets;
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    if (local_c->field11_0x14e == 1) {
      if ((local_c->field0_0x0).autoRotate != 0) {
        fVar1 = FUN_0041e850(local_c->field8_0x13c,3.141593);
        (local_c->field0_0x0).rotation.z = 1.570796 - fVar1;
      }
      AnmManager::FUN_00433590(g_AnmManager,&local_c->field0_0x0);
    }
    local_c = local_c + 1;
  }
  return;
}

