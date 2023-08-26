
undefined4 FUN_00439137(void)

{
  int iVar1;
  int in_ECX;
  int local_c;
  int local_8;
  
  FUN_0043753c();
  local_c = in_ECX + 0x880;
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    if ((local_8 < 5) || (7 < local_8)) {
      FUN_00438ef8(local_c,local_8,local_8,*(undefined4 *)(in_ECX + 0x81a0));
      local_c = local_c + 0x110;
    }
    else {
      FUN_00438ef8(in_ECX + (local_8 + 0x43) * 0x110,local_8,local_8,
                   *(undefined4 *)(in_ECX + 0x81a0));
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,0,local_8,g_GameContext.cfg.lifeCount);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,1,local_8,g_GameContext.cfg.bombCount);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,2,local_8,g_GameContext.cfg.colorMode16bit);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,4,local_8,g_GameContext.cfg.unk6);
    local_c = local_c + 0x110;
  }
  local_c = in_ECX + 0x51d0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,3,local_8,g_GameContext.cfg.sound_mode);
    local_c = local_c + 0x110;
  }
  local_c = in_ECX + 0x4fb0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(local_c,5,local_8,*(undefined *)(in_ECX + 0x8231));
    local_c = local_c + 0x110;
  }
  if (0x1f < *(int *)(in_ECX + 0x81f4)) {
    if ((((DAT_0069d904 & 0x40) != 0) && ((DAT_0069d904 & 0x40) != (DAT_0069d908 & 0x40))) ||
       (((DAT_0069d904 & 0x40) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(in_ECX + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc,0);
        if (g_GameContext.cfg.lifeCount == 0) {
          g_GameContext.cfg.lifeCount = 5;
        }
        g_GameContext.cfg.lifeCount = g_GameContext.cfg.lifeCount - 1;
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc,0);
        if (g_GameContext.cfg.bombCount == 0) {
          g_GameContext.cfg.bombCount = 4;
        }
        g_GameContext.cfg.bombCount = g_GameContext.cfg.bombCount - 1;
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc,0);
        if (g_GameContext.cfg.colorMode16bit == 0) {
          g_GameContext.cfg.colorMode16bit = 2;
        }
        g_GameContext.cfg.colorMode16bit = g_GameContext.cfg.colorMode16bit - 1;
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc,0);
        FUN_00424d38();
        if (g_GameContext.cfg.sound_mode == 0) {
          g_GameContext.cfg.sound_mode = 3;
        }
        g_GameContext.cfg.sound_mode = g_GameContext.cfg.sound_mode - 1;
        FUN_00424b2f("bgm/th06_01.mid");
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc,0);
        if (g_GameContext.cfg.unk6 == 0) {
          g_GameContext.cfg.unk6 = 2;
        }
        g_GameContext.cfg.unk6 = g_GameContext.cfg.unk6 - 1;
      }
      else if (iVar1 == 5) {
        FUN_004311e0(0xc,0);
        if (*(char *)(in_ECX + 0x8231) == '\0') {
          *(undefined *)(in_ECX + 0x8231) = 2;
        }
        *(char *)(in_ECX + 0x8231) = *(char *)(in_ECX + 0x8231) + -1;
      }
    }
    if (((DAT_0069d904 & 10) != 0) && ((DAT_0069d904 & 10) != (DAT_0069d908 & 10))) {
      *(undefined4 *)(in_ECX + 0x81a0) = 8;
      FUN_004311e0(0xb,0);
    }
    if ((((DAT_0069d904 & 0x80) != 0) && ((DAT_0069d904 & 0x80) != (DAT_0069d908 & 0x80))) ||
       (((DAT_0069d904 & 0x80) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(in_ECX + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc,0);
        g_GameContext.cfg.lifeCount = g_GameContext.cfg.lifeCount + 1;
        if (4 < g_GameContext.cfg.lifeCount) {
          g_GameContext.cfg.lifeCount = 0;
        }
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc,0);
        g_GameContext.cfg.bombCount = g_GameContext.cfg.bombCount + 1;
        if (3 < g_GameContext.cfg.bombCount) {
          g_GameContext.cfg.bombCount = 0;
        }
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc,0);
        g_GameContext.cfg.colorMode16bit = g_GameContext.cfg.colorMode16bit + 1;
        if (1 < g_GameContext.cfg.colorMode16bit) {
          g_GameContext.cfg.colorMode16bit = 0;
        }
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc,0);
        FUN_00424d38();
        g_GameContext.cfg.sound_mode = g_GameContext.cfg.sound_mode + 1;
        if (2 < g_GameContext.cfg.sound_mode) {
          g_GameContext.cfg.sound_mode = 0;
        }
        FUN_00424b2f("bgm/th06_01.mid");
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc,0);
        g_GameContext.cfg.unk6 = g_GameContext.cfg.unk6 + 1;
        if (1 < g_GameContext.cfg.unk6) {
          g_GameContext.cfg.unk6 = 0;
        }
      }
      else if (iVar1 == 5) {
        FUN_004311e0(0xc,0);
        *(char *)(in_ECX + 0x8231) = *(char *)(in_ECX + 0x8231) + '\x01';
        if (1 < *(byte *)(in_ECX + 0x8231)) {
          *(undefined *)(in_ECX + 0x8231) = 0;
        }
      }
    }
    if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) {
      iVar1 = *(int *)(in_ECX + 0x81a0);
      if (iVar1 == 6) {
        FUN_00424d38();
        g_GameContext.cfg.lifeCount = 2;
        g_GameContext.cfg.bombCount = 3;
        g_GameContext.cfg.sound_mode = 1;
        g_GameContext.cfg.unk6 = 1;
        g_GameContext.cfg.unk7 = 1;
        g_GameContext.cfg.windowed = false;
        g_GameContext.cfg.frameskip_config = 0;
        FUN_00424b2f("bgm/th06_01.mid");
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 7) {
        *(undefined4 *)(in_ECX + 0x81f0) = 5;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 5;
        }
        *(undefined4 *)(in_ECX + 0x81a0) = 0;
        FUN_004311e0(10,0);
        *(undefined4 *)(in_ECX + 0x821c) = DAT_004765a0;
        *(undefined4 *)(in_ECX + 0x8220) = DAT_004765a4;
        *(undefined4 *)(in_ECX + 0x8224) = DAT_004765a8;
        *(undefined4 *)(in_ECX + 0x8228) = DAT_004765ac;
        *(undefined2 *)(in_ECX + 0x822c) = DAT_004765b0;
        DAT_004765a8 = 0xffffffff;
      }
      else if (iVar1 == 8) {
        *(undefined4 *)(in_ECX + 0x81f0) = 2;
        *(undefined4 *)(in_ECX + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(in_ECX + 0x8a + local_8 * 0x110) = 2;
        }
        *(undefined4 *)(in_ECX + 0x81a0) = 6;
        FUN_004311e0(0xb,0);
        if (((*(byte *)(in_ECX + 0x8230) != g_GameContext.cfg.colorMode16bit) ||
            ((bool)*(char *)(in_ECX + 0x8231) != g_GameContext.cfg.windowed)) ||
           (*(byte *)(in_ECX + 0x8232) != g_GameContext.cfg.frameskip_config)) {
          g_GameContext.cfg.windowed = (bool)*(undefined *)(in_ECX + 0x8231);
          g_GameContext.cfg.frameskip_config = *(byte *)(in_ECX + 0x8232);
          g_GameContext._396_4_ = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

