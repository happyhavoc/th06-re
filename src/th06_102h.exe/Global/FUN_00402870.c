
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00402870(void)

{
  VeryBigStruct *pVVar1;
  int *in_ECX;
  short local_48;
  short local_3c;
  int local_8;
  
  if (DAT_0069d4c3 != '\0') {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext._396_4_ = 7;
    return 1;
  }
  if (_DAT_0069bcbc != 0) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext._396_4_ = 8;
    return 1;
  }
  if ((2 < DAT_0069d4b8) || (3 < _DAT_0069bcb0)) {
    DAT_0069bca0 = DAT_0069bca4;
    DAT_0069d4c0 = 0;
    g_GameContext._396_4_ = 7;
    return 1;
  }
  switch(*in_ECX) {
  case 0:
    if (in_ECX[1] == 0) {
      for (local_8 = 0; pVVar1 = VERY_BIG_STRUCT, local_8 < 4; local_8 = local_8 + 1) {
        if (local_8 < 2) {
          local_3c = (short)local_8 + 8;
          *(short *)(in_ECX + local_8 * 0x44 + 2 + 0x2d) = local_3c;
          FUN_00432430(in_ECX + local_8 * 0x44 + 2,
                       *(undefined4 *)(&pVVar1->field_0x1c954 + local_8 * 4));
        }
        else {
          local_48 = (short)local_8 + 4;
          *(short *)(in_ECX + local_8 * 0x44 + 2 + 0x2d) = local_48;
          FUN_00432430(in_ECX + local_8 * 0x44 + 2,
                       *(undefined4 *)(&pVVar1->field_0x1c944 + local_8 * 4));
        }
        *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 1;
      }
      if (DAT_006c7115 != '\0') {
        VERY_BIG_STRUCT->field20079_0x21118 = 3;
        pVVar1->field20080_0x2111c = 0x20;
        pVVar1->field20081_0x21120 = 0x10;
        pVVar1->field20082_0x21124 = 0x180;
        pVVar1->field20083_0x21128 = 0x1c0;
        pVVar1 = VERY_BIG_STRUCT;
        *(undefined2 *)(in_ECX + 0x1c7) = 0x718;
        FUN_00432430(in_ECX + 0x19a,*(undefined4 *)&pVVar1->field_0x1e594);
        in_ECX[0x1be] = 0x42000000;
        in_ECX[0x1bf] = 0x41800000;
        in_ECX[0x1c0] = 0;
      }
    }
    if (8 < in_ECX[1]) break;
    *in_ECX = *in_ECX + 2;
    in_ECX[1] = 0;
  case 1:
    in_ECX[0xa9] = -0x7f80;
    in_ECX[0xed] = -0x7f7f7f80;
    in_ECX[0x90] = 0x3fd9999a;
    in_ECX[0x91] = 0x3fd9999a;
    in_ECX[0xd4] = 0x3fc00000;
    in_ECX[0xd5] = 0x3fc00000;
    in_ECX[0xc3] = -0x3f800000;
    in_ECX[0xc4] = -0x3f800000;
    in_ECX[0xc5] = 0;
    in_ECX[0x107] = 0;
    in_ECX[0x108] = 0;
    in_ECX[0x109] = 0;
    if (3 < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 2;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        *in_ECX = 3;
        *(undefined2 *)((int)in_ECX + 0x6f2) = 1;
        in_ECX[1] = 0;
      }
    }
    break;
  case 2:
    in_ECX[0xed] = -0x7f80;
    in_ECX[0xa9] = -0x7f7f7f80;
    in_ECX[0x90] = 0x3fc00000;
    in_ECX[0x91] = 0x3fc00000;
    in_ECX[0xd4] = 0x3fd9999a;
    in_ECX[0xd5] = 0x3fd9999a;
    in_ECX[0x107] = -0x3f800000;
    in_ECX[0x108] = -0x3f800000;
    in_ECX[0x109] = 0;
    in_ECX[0xc3] = 0;
    in_ECX[0xc4] = 0;
    in_ECX[0xc5] = 0;
    if (0x1d < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 1;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        *in_ECX = 4;
        in_ECX[1] = 0;
      }
    }
    break;
  case 3:
    if (0x1d < in_ECX[1]) {
      *in_ECX = 0;
      in_ECX[1] = 0;
      DAT_0069d4c0 = 0;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        in_ECX[local_8 * 0x44 + 0x22] = in_ECX[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
      DAT_0069d4b8 = DAT_0069d4b8 + 1;
      DAT_0069bc30 = DAT_0069bc30 & 0xfffffc00 | 0x2aa;
      DAT_0069bca0 = (uint)DAT_0069d4b8;
      DAT_0069bca4 = (uint)DAT_0069d4b8;
      _DAT_0069bca8 = 0;
      DAT_0069bcb4 = 0;
      _DAT_0069d4b0 = 0;
      DAT_0069d4b4 = 0;
      DAT_0069d4ba = g_GameContext._356_1_;
      DAT_0069d4bb = g_GameContext._357_1_;
      DAT_0069d4bc = 0;
      return 0;
    }
    break;
  case 4:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      in_ECX[1] = 0;
      DAT_0069d4c0 = 0;
      g_GameContext._396_4_ = 7;
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        in_ECX[local_8 * 0x44 + 0x22] = in_ECX[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
      DAT_0069bca0 = DAT_0069bca4;
      return 0;
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00433960(in_ECX + local_8 * 0x44 + 2);
  }
  if (DAT_006c7115 != '\0') {
    FUN_00433960(in_ECX + 0x19a);
  }
  in_ECX[1] = in_ECX[1] + 1;
  return 0;
}

