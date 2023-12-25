
undefined4 Player::FUN_00429710(Player *param_1)

{
  if (-1 < (param_1->field34_0x75a8).current) {
    if (((param_1->field34_0x75a8).current != (param_1->field34_0x75a8).previous) &&
       (((g_Player.inner.field0_0x0 == 0 || (g_GameManager.character != 1)) ||
        (g_GameManager.shottype != 1)))) {
      FUN_00429820(param_1,(param_1->field34_0x75a8).current);
    }
    (param_1->field34_0x75a8).previous = (param_1->field34_0x75a8).current;
    Supervisor::TickTimer
              (&g_Supervisor,&(param_1->field34_0x75a8).current,&(param_1->field34_0x75a8).subFrame)
    ;
    if (((0x1d < (param_1->field34_0x75a8).current) || (param_1->field21_0x9e0 == 2)) ||
       (param_1->field21_0x9e0 == 1)) {
      (param_1->field34_0x75a8).current = -1;
      (param_1->field34_0x75a8).subFrame = 0.0;
      (param_1->field34_0x75a8).previous = -999;
    }
  }
  return 0;
}

