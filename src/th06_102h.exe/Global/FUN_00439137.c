
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
    FUN_00438ef8(param_1,local_c,0,local_8,(uint)DAT_006c6e44);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,1,local_8,(uint)DAT_006c6e45);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,2,local_8,(uint)DAT_006c6e46);
    local_c = local_c + 0x110;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,4,local_8,(uint)DAT_006c6e48);
    local_c = local_c + 0x110;
  }
  local_c = param_1 + 0x51d0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,3,local_8,(uint)DAT_006c6e47);
    local_c = local_c + 0x110;
  }
  local_c = param_1 + 0x4fb0;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,local_c,5,local_8,(uint)*(byte *)(param_1 + 0x8231));
    local_c = local_c + 0x110;
  }
  if (0x1f < *(int *)(param_1 + 0x81f4)) {
    if ((((DAT_0069d904 & 0x40) != 0) && ((DAT_0069d904 & 0x40) != (DAT_0069d908 & 0x40))) ||
       (((DAT_0069d904 & 0x40) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc);
        if (DAT_006c6e44 == 0) {
          DAT_006c6e44 = 5;
        }
        DAT_006c6e44 = DAT_006c6e44 - 1;
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc);
        if (DAT_006c6e45 == 0) {
          DAT_006c6e45 = 4;
        }
        DAT_006c6e45 = DAT_006c6e45 - 1;
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc);
        if (DAT_006c6e46 == 0) {
          DAT_006c6e46 = 2;
        }
        DAT_006c6e46 = DAT_006c6e46 - 1;
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc);
        GameContext::FUN_00424d38((GameContext *)&DAT_006c6d18);
        if (DAT_006c6e47 == 0) {
          DAT_006c6e47 = 3;
        }
        DAT_006c6e47 = DAT_006c6e47 - 1;
        FUN_00424b2f();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc);
        if (DAT_006c6e48 == 0) {
          DAT_006c6e48 = 2;
        }
        DAT_006c6e48 = DAT_006c6e48 - 1;
      }
      else if (iVar1 == 5) {
        FUN_004311e0(0xc);
        if (*(char *)(param_1 + 0x8231) == '\0') {
          *(undefined *)(param_1 + 0x8231) = 2;
        }
        *(char *)(param_1 + 0x8231) = *(char *)(param_1 + 0x8231) + -1;
      }
    }
    if (((DAT_0069d904 & 10) != 0) && ((DAT_0069d904 & 10) != (DAT_0069d908 & 10))) {
      *(undefined4 *)(param_1 + 0x81a0) = 8;
      FUN_004311e0(0xb);
    }
    if ((((DAT_0069d904 & 0x80) != 0) && ((DAT_0069d904 & 0x80) != (DAT_0069d908 & 0x80))) ||
       (((DAT_0069d904 & 0x80) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 0) {
        FUN_004311e0(0xc);
        DAT_006c6e44 = DAT_006c6e44 + 1;
        if (4 < DAT_006c6e44) {
          DAT_006c6e44 = 0;
        }
      }
      else if (iVar1 == 1) {
        FUN_004311e0(0xc);
        DAT_006c6e45 = DAT_006c6e45 + 1;
        if (3 < DAT_006c6e45) {
          DAT_006c6e45 = 0;
        }
      }
      else if (iVar1 == 2) {
        FUN_004311e0(0xc);
        DAT_006c6e46 = DAT_006c6e46 + 1;
        if (1 < DAT_006c6e46) {
          DAT_006c6e46 = 0;
        }
      }
      else if (iVar1 == 3) {
        FUN_004311e0(0xc);
        GameContext::FUN_00424d38((GameContext *)&DAT_006c6d18);
        DAT_006c6e47 = DAT_006c6e47 + 1;
        if (2 < DAT_006c6e47) {
          DAT_006c6e47 = 0;
        }
        FUN_00424b2f();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        FUN_004311e0(0xc);
        DAT_006c6e48 = DAT_006c6e48 + 1;
        if (1 < DAT_006c6e48) {
          DAT_006c6e48 = 0;
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
    if (((DAT_0069d904 & 0x1001) != 0) && ((DAT_0069d904 & 0x1001) != (DAT_0069d908 & 0x1001))) {
      iVar1 = *(int *)(param_1 + 0x81a0);
      if (iVar1 == 6) {
        GameContext::FUN_00424d38((GameContext *)&DAT_006c6d18);
        DAT_006c6e44 = 2;
        DAT_006c6e45 = 3;
        DAT_006c6e47 = 1;
        DAT_006c6e48 = 1;
        DAT_006c6e49 = 1;
        DAT_006c6e4a = '\0';
        DAT_006c6e4b = '\0';
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
        if (((*(byte *)(param_1 + 0x8230) != DAT_006c6e46) ||
            (*(char *)(param_1 + 0x8231) != DAT_006c6e4a)) ||
           (*(char *)(param_1 + 0x8232) != DAT_006c6e4b)) {
          DAT_006c6e4a = *(undefined *)(param_1 + 0x8231);
          DAT_006c6e4b = *(undefined *)(param_1 + 0x8232);
          DAT_006c6ea4 = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

