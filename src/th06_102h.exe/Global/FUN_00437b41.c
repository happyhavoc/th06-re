
undefined4 FUN_00437b41(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int local_c;
  int local_8;
  
  iVar1 = FUN_0043753c();
  if ((((*(int *)(in_ECX + 0x81a0) == 1) && (iVar2 = FUN_0043a736(0,0), iVar2 == 0)) &&
      (iVar2 = FUN_0043a736(0,1), iVar2 == 0)) &&
     ((iVar2 = FUN_0043a736(1,0), iVar2 == 0 && (iVar2 = FUN_0043a736(1,1), iVar2 == 0)))) {
    *(int *)(in_ECX + 0x81a0) = *(int *)(in_ECX + 0x81a0) + iVar1;
  }
  local_c = in_ECX;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    FUN_004377a3(local_c,local_8,*(undefined4 *)(in_ECX + 0x81a0),0xffff0000,0x80300000,0x7a);
    local_c = local_c + 0x110;
  }
  if (0x13 < *(int *)(in_ECX + 0x81f4)) {
    if (((BUTTONS_PRESSED_CURFRAME & 0x1001) != 0) &&
       ((BUTTONS_PRESSED_CURFRAME & 0x1001) != (BUTTONS_PRESSED_PREVFRAME & 0x1001))) {
      switch(*(undefined4 *)(in_ECX + 0x81a0)) {
      case 0:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(in_ECX + 0x81f0) = 6;
        DAT_0069d4c3 = 0;
        if (3 < CUR_RANK) {
          CUR_RANK = 1;
        }
        if (3 < g_GameContext.cfg.defaultDifficulty) {
          g_GameContext.cfg.defaultDifficulty = 1;
        }
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        *(undefined4 *)(in_ECX + 0x81fc) = 0x40000000;
        *(undefined4 *)(in_ECX + 0x8200) = 0xff000000;
        *(undefined4 *)(in_ECX + 0x820c) = 0;
        *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
        FUN_004311e0(10,0);
        break;
      case 1:
        iVar1 = FUN_0043a736(0,0);
        if ((((iVar1 == 0) && (iVar1 = FUN_0043a736(0,1), iVar1 == 0)) &&
            (iVar1 = FUN_0043a736(1,0), iVar1 == 0)) && (iVar1 = FUN_0043a736(1,1), iVar1 == 0)) {
          FUN_004311e0(0xb,0);
        }
        else {
          for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
            *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
          }
          *(undefined4 *)(in_ECX + 0x81f0) = 6;
          DAT_0069d4c3 = 0;
          CUR_RANK = 4;
          *(undefined4 *)(in_ECX + 0x81f4) = 0;
          *(undefined4 *)(in_ECX + 0x81fc) = 0x40000000;
          *(undefined4 *)(in_ECX + 0x8200) = 0xff000000;
          *(undefined4 *)(in_ECX + 0x820c) = 0;
          *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
          FUN_004311e0(10,0);
        }
        break;
      case 2:
        DAT_0069d4c3 = 1;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(in_ECX + 0x81f0) = 6;
        if (3 < CUR_RANK) {
          CUR_RANK = 1;
        }
        if (3 < g_GameContext.cfg.defaultDifficulty) {
          g_GameContext.cfg.defaultDifficulty = 1;
        }
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        *(undefined4 *)(in_ECX + 0x81fc) = 0x40000000;
        *(undefined4 *)(in_ECX + 0x8200) = 0xff000000;
        *(undefined4 *)(in_ECX + 0x820c) = 0;
        *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
        FUN_004311e0(10,0);
        break;
      case 3:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(in_ECX + 0x81f0) = 0xc;
        DAT_0069d4c3 = 0;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        *(undefined4 *)(in_ECX + 0x81fc) = 0x40000000;
        *(undefined4 *)(in_ECX + 0x8200) = 0xff000000;
        *(undefined4 *)(in_ECX + 0x820c) = 0;
        *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
        FUN_004311e0(10,0);
        break;
      case 4:
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        *(undefined4 *)(in_ECX + 0x81f0) = 10;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        *(undefined4 *)(in_ECX + 0x81fc) = 0x40000000;
        *(undefined4 *)(in_ECX + 0x8200) = 0xff000000;
        *(undefined4 *)(in_ECX + 0x820c) = 0;
        *(undefined4 *)(in_ECX + 0x8210) = 0x3c;
        FUN_004311e0(10,0);
        break;
      case 5:
        *(undefined4 *)(in_ECX + 0x81f0) = 0x10;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        FUN_004311e0(10,0);
        break;
      case 6:
        *(undefined4 *)(in_ECX + 0x81f0) = 3;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 3;
        }
        *(undefined4 *)(in_ECX + 0x81a0) = 0;
        *(byte *)(in_ECX + 0x8230) = g_GameContext.cfg.colorMode16bit;
        *(bool *)(in_ECX + 0x8231) = g_GameContext.cfg.windowed;
        *(byte *)(in_ECX + 0x8232) = g_GameContext.cfg.frameskip_config;
        FUN_004311e0(10,0);
        break;
      case 7:
        *(undefined4 *)(in_ECX + 0x81f0) = 4;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
        }
        FUN_004311e0(0xb,0);
      }
    }
    if (((BUTTONS_PRESSED_CURFRAME & 0x200) != 0) &&
       ((BUTTONS_PRESSED_CURFRAME & 0x200) != (BUTTONS_PRESSED_PREVFRAME & 0x200))) {
      *(undefined4 *)(in_ECX + 0x81f0) = 4;
      *(undefined4 *)(in_ECX + 0x81f4) = 0;
      for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
        *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 4;
      }
      FUN_004311e0(0xb,0);
    }
    if (((BUTTONS_PRESSED_CURFRAME & 10) != 0) &&
       ((BUTTONS_PRESSED_CURFRAME & 10) != (BUTTONS_PRESSED_PREVFRAME & 10))) {
      *(undefined4 *)(in_ECX + 0x81a0) = 7;
      FUN_004311e0(0xb,0);
    }
  }
  return 0;
}

