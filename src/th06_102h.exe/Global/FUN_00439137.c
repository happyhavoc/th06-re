
undefined4 __fastcall FUN_00439137(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_0043753c(param_1,9);
  local_c = param_1 + 0x880;
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    if ((local_8 < 5) || (7 < local_8)) {
      FUN_00438ef8(param_1,local_c,local_8,local_8,*(int *)(param_1 + 0x81a0));
      local_c = local_c + 0x110;
    }
    else {
      FUN_00438ef8(param_1,param_1 + (local_8 + 0x43) * 0x110,local_8,local_8,
                   *(int *)(param_1 + 0x81a0));
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,0,local_8,(uint)g_GameContext.cfg.lifeCount);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,1,local_8,(uint)g_GameContext.cfg.bombCount);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,2,local_8,(uint)g_GameContext.cfg.colorMode16bit);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,4,local_8,(uint)g_GameContext.cfg.playSounds);
    local_c = local_c + 0x110;
  }
  local_c = param_1 + 0x51d0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,3,local_8,(uint)g_GameContext.cfg.musicMode);
    local_c = local_c + 0x110;
  }
  local_c = param_1 + 0x4fb0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,5,local_8,(uint)*(byte *)(param_1 + 0x8231));
    local_c = local_c + 0x110;
  }
  if (0x1f < *(int *)(param_1 + 0x81f4)) {
    if ((((BUTTONS_PRESSED_CURFRAME & 0x40) != 0) &&
        ((BUTTONS_PRESSED_CURFRAME & 0x40) != (BUTTONS_PRESSED_PREVFRAME & 0x40))) ||
       (((BUTTONS_PRESSED_CURFRAME & 0x40) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc);
        if (g_GameContext.cfg.lifeCount == 0) {
          g_GameContext.cfg.lifeCount = 5;
        }
        g_GameContext.cfg.lifeCount = g_GameContext.cfg.lifeCount - 1;
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc);
        if (g_GameContext.cfg.bombCount == 0) {
          g_GameContext.cfg.bombCount = 4;
        }
        g_GameContext.cfg.bombCount = g_GameContext.cfg.bombCount - 1;
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc);
        if (g_GameContext.cfg.colorMode16bit == 0) {
          g_GameContext.cfg.colorMode16bit = 2;
        }
        g_GameContext.cfg.colorMode16bit = g_GameContext.cfg.colorMode16bit - 1;
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc);
        FUN_00424d38(&g_GameContext);
        if (g_GameContext.cfg.musicMode == OFF) {
          g_GameContext.cfg.musicMode = WAV|MIDI;
        }
        g_GameContext.cfg.musicMode = g_GameContext.cfg.musicMode + ~OFF;
        FUN_00424b2f();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc);
        if (g_GameContext.cfg.playSounds == 0) {
          g_GameContext.cfg.playSounds = 2;
        }
        g_GameContext.cfg.playSounds = g_GameContext.cfg.playSounds - 1;
      }
      else if (iVar1 == 5) {
        FUN_004311e0(0xc);
        if (*(char *)(param_1 + 0x8231) == '\0') {
          *(undefined *)(param_1 + 0x8231) = 2;
        }
        *(char *)(param_1 + 0x8231) = *(char *)(param_1 + 0x8231) + -1;
      }
    }
    if (((BUTTONS_PRESSED_CURFRAME & 10) != 0) &&
       ((BUTTONS_PRESSED_CURFRAME & 10) != (BUTTONS_PRESSED_PREVFRAME & 10))) {
      *(undefined4 *)(param_1 + 0x81a0) = 8;
      FUN_004311e0(0xb);
    }
    if ((((BUTTONS_PRESSED_CURFRAME & 0x80) != 0) &&
        ((BUTTONS_PRESSED_CURFRAME & 0x80) != (BUTTONS_PRESSED_PREVFRAME & 0x80))) ||
       (((BUTTONS_PRESSED_CURFRAME & 0x80) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc);
        g_GameContext.cfg.lifeCount = g_GameContext.cfg.lifeCount + 1;
        if (4 < g_GameContext.cfg.lifeCount) {
          g_GameContext.cfg.lifeCount = 0;
        }
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc);
        g_GameContext.cfg.bombCount = g_GameContext.cfg.bombCount + 1;
        if (3 < g_GameContext.cfg.bombCount) {
          g_GameContext.cfg.bombCount = 0;
        }
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc);
        g_GameContext.cfg.colorMode16bit = g_GameContext.cfg.colorMode16bit + 1;
        if (1 < g_GameContext.cfg.colorMode16bit) {
          g_GameContext.cfg.colorMode16bit = 0;
        }
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc);
        FUN_00424d38(&g_GameContext);
        g_GameContext.cfg.musicMode = g_GameContext.cfg.musicMode + WAV;
        if (MIDI < g_GameContext.cfg.musicMode) {
          g_GameContext.cfg.musicMode = OFF;
        }
        FUN_00424b2f();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc);
        g_GameContext.cfg.playSounds = g_GameContext.cfg.playSounds + 1;
        if (1 < g_GameContext.cfg.playSounds) {
          g_GameContext.cfg.playSounds = 0;
        }
      }
      else if (iVar1 == 5) {
        FUN_004311e0(0xc);
        *(char *)(param_1 + 0x8231) = *(char *)(param_1 + 0x8231) + '\x01';
        if (1 < *(byte *)(param_1 + 0x8231)) {
          *(undefined *)(param_1 + 0x8231) = 0;
        }
      }
    }
    if (((BUTTONS_PRESSED_CURFRAME & 0x1001) != 0) &&
       ((BUTTONS_PRESSED_CURFRAME & 0x1001) != (BUTTONS_PRESSED_PREVFRAME & 0x1001))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 6) {
        FUN_00424d38(&g_GameContext);
        g_GameContext.cfg.lifeCount = 2;
        g_GameContext.cfg.bombCount = 3;
        g_GameContext.cfg.musicMode = WAV;
        g_GameContext.cfg.playSounds = 1;
        g_GameContext.cfg.defaultDifficulty = 1;
        g_GameContext.cfg.windowed = false;
        g_GameContext.cfg.frameskip_config = 0;
        FUN_00424b2f();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 7) {
        *(undefined4 *)(param_1 + 0x81f0) = 5;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 5;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 0;
        FUN_004311e0(10);
        *(undefined4 *)(param_1 + 0x821c) = g_ControllerMapping._0_4_;
        *(undefined4 *)(param_1 + 0x8220) = g_ControllerMapping._4_4_;
        *(undefined4 *)(param_1 + 0x8224) = g_ControllerMapping._8_4_;
        *(undefined4 *)(param_1 + 0x8228) = g_ControllerMapping._12_4_;
        *(short *)(param_1 + 0x822c) = g_ControllerMapping.skipButton;
        g_ControllerMapping.upButton = -1;
        g_ControllerMapping.downButton = -1;
      }
      else if (iVar1 == 8) {
        *(undefined4 *)(param_1 + 0x81f0) = 2;
        *(undefined4 *)(param_1 + 0x81f4) = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 2;
        }
        *(undefined4 *)(param_1 + 0x81a0) = 6;
        FUN_004311e0(0xb);
        if (((*(byte *)(param_1 + 0x8230) != g_GameContext.cfg.colorMode16bit) ||
            ((bool)*(char *)(param_1 + 0x8231) != g_GameContext.cfg.windowed)) ||
           (*(byte *)(param_1 + 0x8232) != g_GameContext.cfg.frameskip_config)) {
          g_GameContext.cfg.windowed = (bool)*(undefined *)(param_1 + 0x8231);
          g_GameContext.cfg.frameskip_config = *(byte *)(param_1 + 0x8232);
          g_GameContext.unkInput2 = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

