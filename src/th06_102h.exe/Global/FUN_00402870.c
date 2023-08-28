
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00402870(int *param_1)

{
  VeryBigStruct *pVVar1;
  short local_48;
  short local_3c;
  int local_8;
  
  if (DAT_0069d4c3 != '\0') {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 7;
    return 1;
  }
  if (_DAT_0069bcbc != 0) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 8;
    return 1;
  }
  if ((2 < DAT_0069d4b8) || (3 < CUR_RANK)) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext.unkInput2 = 7;
    return 1;
  }
  switch(*param_1) {
  case 0:
    if (param_1[1] == 0) {
      for (local_8 = 0; pVVar1 = VERY_BIG_STRUCT, local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 < 2) {
          local_3c = (short)local_8 + 8;
          *(short *)(param_1 + local_8 * 0x44 + 2 + 0x2d) = local_3c;
          FUN_00432430(param_1 + local_8 * 0x44 + 2,
                       *(undefined4 *)(&pVVar1->field_0x1c954 + local_8 * 4));
        }
        else {
          local_48 = (short)local_8 + 4;
          *(short *)(param_1 + local_8 * 0x44 + 2 + 0x2d) = local_48;
          FUN_00432430(param_1 + local_8 * 0x44 + 2,
                       *(undefined4 *)(&pVVar1->field_0x1c944 + local_8 * 4));
        }
        *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 1;
      }
      if (DAT_006c7115 != '\0') {
        VERY_BIG_STRUCT->idx = 3;
        pVVar1->left = 0x20;
        pVVar1->top = 0x10;
        pVVar1->x = 0x180;
        pVVar1->y = 0x1c0;
        pVVar1 = VERY_BIG_STRUCT;
        *(undefined2 *)(param_1 + 0x1c7) = 0x718;
        FUN_00432430(param_1 + 0x19a,*(undefined4 *)&pVVar1->field_0x1e594);
        param_1[0x1be] = 0x42000000;
        param_1[0x1bf] = 0x41800000;
        param_1[0x1c0] = 0;
      }
    }
    if (8 < param_1[1]) break;
    *param_1 = *param_1 + 2;
    param_1[1] = 0;
  case 1:
    param_1[0xa9] = -0x7f80;
    param_1[0xed] = -0x7f7f7f80;
    param_1[0x90] = 0x3fd9999a;
    param_1[0x91] = 0x3fd9999a;
    param_1[0xd4] = 0x3fc00000;
    param_1[0xd5] = 0x3fc00000;
    param_1[0xc3] = -0x3f800000;
    param_1[0xc4] = -0x3f800000;
    param_1[0xc5] = 0;
    param_1[0x107] = 0;
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    if (3 < param_1[1]) {
      if ((((BUTTONS_PRESSED_CURFRAME & 0x10) != 0) &&
          ((BUTTONS_PRESSED_CURFRAME & 0x10) != (BUTTONS_PRESSED_PREVFRAME & 0x10))) ||
         (((BUTTONS_PRESSED_CURFRAME & 0x20) != 0 &&
          ((BUTTONS_PRESSED_CURFRAME & 0x20) != (BUTTONS_PRESSED_PREVFRAME & 0x20))))) {
        *param_1 = 2;
      }
      if (((BUTTONS_PRESSED_CURFRAME & 1) != 0) &&
         ((BUTTONS_PRESSED_CURFRAME & 1) != (BUTTONS_PRESSED_PREVFRAME & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        *param_1 = 3;
        *(undefined2 *)((int)param_1 + 0x6f2) = 1;
        param_1[1] = 0;
      }
    }
    break;
  case 2:
    param_1[0xed] = -0x7f80;
    param_1[0xa9] = -0x7f7f7f80;
    param_1[0x90] = 0x3fc00000;
    param_1[0x91] = 0x3fc00000;
    param_1[0xd4] = 0x3fd9999a;
    param_1[0xd5] = 0x3fd9999a;
    param_1[0x107] = -0x3f800000;
    param_1[0x108] = -0x3f800000;
    param_1[0x109] = 0;
    param_1[0xc3] = 0;
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    if (0x1d < param_1[1]) {
      if ((((BUTTONS_PRESSED_CURFRAME & 0x10) != 0) &&
          ((BUTTONS_PRESSED_CURFRAME & 0x10) != (BUTTONS_PRESSED_PREVFRAME & 0x10))) ||
         (((BUTTONS_PRESSED_CURFRAME & 0x20) != 0 &&
          ((BUTTONS_PRESSED_CURFRAME & 0x20) != (BUTTONS_PRESSED_PREVFRAME & 0x20))))) {
        *param_1 = 1;
      }
      if (((BUTTONS_PRESSED_CURFRAME & 1) != 0) &&
         ((BUTTONS_PRESSED_CURFRAME & 1) != (BUTTONS_PRESSED_PREVFRAME & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        *param_1 = 4;
        param_1[1] = 0;
      }
    }
    break;
  case 3:
    if (0x1d < param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
      DAT_0069d4c0 = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        param_1[local_8 * 0x44 + 0x22] = param_1[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
      DAT_0069d4b8 = DAT_0069d4b8 + 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffc00 | 0x2aa;
      DAT_0069bca0 = (uint)DAT_0069d4b8;
      DAT_0069bca4 = (uint)DAT_0069d4b8;
      _DAT_0069bca8 = 0;
      DAT_0069bcb4 = 0;
      _DAT_0069d4b0 = 0;
      DAT_0069d4b4 = 0;
      LIFE_COUNT = g_GameContext.lifeCount;
      BOMB_COUNT = g_GameContext.bombCount;
      DAT_0069d4bc = 0;
      return 0;
    }
    break;
  case 4:
    if (0x13 < param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
      DAT_0069d4c0 = 0;
      g_GameContext.unkInput2 = 7;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        param_1[local_8 * 0x44 + 0x22] = param_1[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
      DAT_0069bca0 = DAT_0069bca4;
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00433960(param_1 + local_8 * 0x44 + 2);
  }
  if (DAT_006c7115 != '\0') {
    FUN_00433960(param_1 + 0x19a);
  }
  param_1[1] = param_1[1] + 1;
  return 0;
}

