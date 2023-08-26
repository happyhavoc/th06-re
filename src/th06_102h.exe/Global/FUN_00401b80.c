
undefined4 __fastcall FUN_00401b80(int *param_1)

{
  VeryBigStruct *pVVar1;
  short local_6c;
  int local_8;
  
  if (((DAT_0069d904 & 8) != 0) && ((DAT_0069d904 & 8) != (DAT_0069d908 & 8))) {
    *param_1 = 3;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((param_1[local_8 * 0x44 + 0x22] & 1U) != 0) {
        *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
      }
    }
    param_1[1] = 0;
    *(undefined2 *)((int)param_1 + 0x6f2) = 1;
  }
  if (((DAT_0069d904 & 0x200) != 0) && ((DAT_0069d904 & 0x200) != (DAT_0069d908 & 0x200))) {
    *param_1 = 6;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((param_1[local_8 * 0x44 + 0x22] & 1U) != 0) {
        *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
      }
    }
    param_1[1] = 0;
  }
  switch(*param_1) {
  case 0:
    for (local_8 = 0; pVVar1 = VERY_BIG_STRUCT, local_8 < 6; local_8 = local_8 + 1) {
      local_6c = (short)local_8 + 2;
      *(short *)(param_1 + local_8 * 0x44 + 2 + 0x2d) = local_6c;
      FUN_00432430(param_1 + local_8 * 0x44 + 2,
                   *(undefined4 *)(&pVVar1->field_0x1c93c + local_8 * 4));
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 1;
    }
    *param_1 = *param_1 + 1;
    param_1[1] = 0;
    pVVar1 = VERY_BIG_STRUCT;
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
  case 1:
    param_1[0x65] = -0x7f80;
    param_1[0xa9] = -0x7f7f7f80;
    param_1[0x4c] = 0x3fd9999a;
    param_1[0x4d] = 0x3fd9999a;
    param_1[0x90] = 0x3fc00000;
    param_1[0x91] = 0x3fc00000;
    param_1[0x7f] = -0x3f800000;
    param_1[0x80] = -0x3f800000;
    param_1[0x81] = 0;
    param_1[0xc3] = 0;
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    if (3 < param_1[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *param_1 = 2;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        *param_1 = 3;
        param_1[1] = 0;
        *(undefined2 *)((int)param_1 + 0x6f2) = 1;
      }
    }
    break;
  case 2:
    param_1[0x65] = -0x7f7f7f80;
    param_1[0xa9] = -0x7f80;
    param_1[0x4c] = 0x3fc00000;
    param_1[0x4d] = 0x3fc00000;
    param_1[0x90] = 0x3fd9999a;
    param_1[0x91] = 0x3fd9999a;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0xc3] = -0x3f800000;
    param_1[0xc4] = -0x3f800000;
    param_1[0xc5] = 0;
    if (3 < param_1[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *param_1 = 1;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 1;
        }
        *param_1 = 5;
        param_1[1] = 0;
      }
    }
    break;
  case 3:
    if (0x13 < param_1[1]) {
      *param_1 = 0;
      DAT_0069d4bf = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        param_1[local_8 * 0x44 + 0x22] = param_1[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
    }
    break;
  case 4:
    param_1[0x131] = -0x7f80;
    param_1[0x175] = -0x7f7f7f80;
    param_1[0x118] = 0x3fd9999a;
    param_1[0x119] = 0x3fd9999a;
    param_1[0x15c] = 0x3fc00000;
    param_1[0x15d] = 0x3fc00000;
    param_1[0x14b] = -0x3f800000;
    param_1[0x14c] = -0x3f800000;
    param_1[0x14d] = 0;
    param_1[399] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    if (3 < param_1[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *param_1 = 5;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        *param_1 = 6;
        param_1[1] = 0;
      }
    }
    break;
  case 5:
    param_1[0x131] = -0x7f7f7f80;
    param_1[0x175] = -0x7f80;
    param_1[0x118] = 0x3fc00000;
    param_1[0x119] = 0x3fc00000;
    param_1[0x15c] = 0x3fd9999a;
    param_1[0x15d] = 0x3fd9999a;
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
    param_1[399] = -0x3f800000;
    param_1[400] = -0x3f800000;
    param_1[0x191] = 0;
    if (3 < param_1[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *param_1 = 4;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 1;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)param_1 + local_8 * 0x110 + 0x92) = 2;
        }
        *param_1 = 2;
        param_1[1] = 0;
      }
    }
    break;
  case 6:
    if (0x13 < param_1[1]) {
      *param_1 = 0;
      DAT_0069d4bf = 0;
      g_GameContext._396_4_ = 1;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        param_1[local_8 * 0x44 + 0x22] = param_1[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_00433960(param_1 + local_8 * 0x44 + 2);
  }
  if (DAT_006c7115 != '\0') {
    FUN_00433960(param_1 + 0x19a);
  }
  param_1[1] = param_1[1] + 1;
  return 0;
}

