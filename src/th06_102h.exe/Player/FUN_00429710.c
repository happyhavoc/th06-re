
undefined4 Player::FUN_00429710(Player *param_1)

{
  if (-1 < (param_1->fireBulletTimer).current) {
    if (((param_1->fireBulletTimer).current != (param_1->fireBulletTimer).previous) &&
       (((g_Player.inner.isUsingBomb == 0 || (g_GameManager.character != 1)) ||
        (g_GameManager.shottype != 1)))) {
      FUN_00429820(param_1,(param_1->fireBulletTimer).current);
    }
    (param_1->fireBulletTimer).previous = (param_1->fireBulletTimer).current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->fireBulletTimer).current,
               &(param_1->fireBulletTimer).subFrame);
    if (((0x1d < (param_1->fireBulletTimer).current) || (param_1->playerState == PLAYER_STATE_DEAD))
       || (param_1->playerState == PLAYER_STATE_SPAWNING)) {
      (param_1->fireBulletTimer).current = -1;
      (param_1->fireBulletTimer).subFrame = 0.0;
      (param_1->fireBulletTimer).previous = -999;
    }
  }
  return 0;
}

