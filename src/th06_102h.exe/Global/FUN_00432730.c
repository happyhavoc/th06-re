
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432730(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0) {
    DAT_006d4600 = ROUND(DAT_006d4600) - 0.5;
    DAT_006d4618 = ROUND(DAT_006d4618) - 0.5;
    DAT_006d4604 = ROUND(DAT_006d4604) - 0.5;
    DAT_006d4634 = ROUND(DAT_006d4634) - 0.5;
    DAT_006d461c = DAT_006d4604;
    DAT_006d4630 = DAT_006d4600;
    DAT_006d4648 = DAT_006d4618;
    DAT_006d464c = DAT_006d4634;
  }
  DAT_006d4608 = *(undefined4 *)(param_1 + 0x98);
  DAT_006d4620 = DAT_006d4608;
  DAT_006d4638 = DAT_006d4608;
  DAT_006d4650 = DAT_006d4608;
  if (*(int *)(in_ECX + 0x210c0) != *(int *)(param_1 + 0xc0)) {
    *(undefined4 *)(in_ECX + 0x210c0) = *(undefined4 *)(param_1 + 0xc0);
    _DAT_006d4610 = *(float *)(*(int *)(param_1 + 0xc0) + 0x1c) + *(float *)(param_1 + 0x28);
    _DAT_006d4628 = *(float *)(*(int *)(param_1 + 0xc0) + 0x24) + *(float *)(param_1 + 0x28);
    _DAT_006d4614 = *(float *)(*(int *)(param_1 + 0xc0) + 0x20) + *(float *)(param_1 + 0x2c);
    _DAT_006d4644 = *(float *)(*(int *)(param_1 + 0xc0) + 0x28) + *(float *)(param_1 + 0x2c);
    DAT_006d462c = _DAT_006d4614;
    DAT_006d4640 = _DAT_006d4610;
    DAT_006d4658 = _DAT_006d4628;
    DAT_006d465c = _DAT_006d4644;
    if (*(int *)(in_ECX + 0x210b8) != *(int *)(in_ECX + 0x1c110 + **(int **)(param_1 + 0xc0) * 4)) {
      *(undefined4 *)(in_ECX + 0x210b8) =
           *(undefined4 *)(in_ECX + 0x1c110 + **(int **)(param_1 + 0xc0) * 4);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xf4))
                (g_GameContext._8_4_,0,*(undefined4 *)(in_ECX + 0x210b8));
    }
  }
  if (*(char *)(in_ECX + 0x210be) != '\x02') {
    if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x104);
    }
    else {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x144);
    }
    *(undefined *)(in_ECX + 0x210be) = 2;
  }
  FUN_004324d0(param_1);
  if (((uint)g_GameContext.cfg.field34_0x34 >> 1 & 1) == 0) {
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x120))(g_GameContext._8_4_,5,2,&DAT_006d4600,0x18);
  }
  else {
    _DAT_006d4590 = DAT_006d4600;
    _DAT_006d4594 = DAT_006d4604;
    _DAT_006d4598 = DAT_006d4608;
    _DAT_006d45ac = DAT_006d4618;
    _DAT_006d45b0 = DAT_006d461c;
    _DAT_006d45b4 = DAT_006d4620;
    _DAT_006d45c8 = DAT_006d4630;
    _DAT_006d45cc = DAT_006d4634;
    _DAT_006d45d0 = DAT_006d4638;
    _DAT_006d45e4 = DAT_006d4648;
    _DAT_006d45e8 = DAT_006d464c;
    _DAT_006d45ec = DAT_006d4650;
    _DAT_006d45a4 = *(float *)(*(int *)(param_1 + 0xc0) + 0x1c) + *(float *)(param_1 + 0x28);
    _DAT_006d45c0 = *(float *)(*(int *)(param_1 + 0xc0) + 0x24) + *(float *)(param_1 + 0x28);
    _DAT_006d45a8 = *(float *)(*(int *)(param_1 + 0xc0) + 0x20) + *(float *)(param_1 + 0x2c);
    _DAT_006d45e0 = *(float *)(*(int *)(param_1 + 0xc0) + 0x28) + *(float *)(param_1 + 0x2c);
    DAT_006d45c4 = _DAT_006d45a8;
    DAT_006d45dc = _DAT_006d45a4;
    DAT_006d45f8 = _DAT_006d45c0;
    DAT_006d45fc = _DAT_006d45e0;
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x120))(g_GameContext._8_4_,5,2,&DAT_006d4590,0x1c);
  }
  return 0;
}

