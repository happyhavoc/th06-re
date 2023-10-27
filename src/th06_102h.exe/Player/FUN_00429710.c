
undefined4 Player::FUN_00429710(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x75b0)) {
    if ((*(int *)(param_1 + 0x75b0) != *(int *)(param_1 + 0x75a8)) &&
       (((g_Player._30152_4_ == 0 || (g_GameManager.character != 1)) ||
        (g_GameManager.shottype != 1)))) {
      FUN_00429820(param_1,*(undefined4 *)(param_1 + 0x75b0));
    }
    *(undefined4 *)(param_1 + 0x75a8) = *(undefined4 *)(param_1 + 0x75b0);
    GameContext::FUN_00424285(&g_GameContext,(int *)(param_1 + 0x75b0),(float *)(param_1 + 0x75ac));
    if (((0x1d < *(int *)(param_1 + 0x75b0)) || (*(char *)(param_1 + 0x9e0) == '\x02')) ||
       (*(char *)(param_1 + 0x9e0) == '\x01')) {
      *(undefined4 *)(param_1 + 0x75b0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x75ac) = 0;
      *(undefined4 *)(param_1 + 0x75a8) = 0xfffffc19;
    }
  }
  return 0;
}

