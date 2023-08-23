
undefined4 FUN_00401b80(void)

{
  int iVar1;
  int *in_ECX;
  undefined2 local_6c;
  int local_8;
  
  if (((DAT_0069d904 & 8) != 0) && ((DAT_0069d904 & 8) != (DAT_0069d908 & 8))) {
    *in_ECX = 3;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((in_ECX[local_8 * 0x44 + 0x22] & 1U) != 0) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
      }
    }
    in_ECX[1] = 0;
    *(undefined2 *)((int)in_ECX + 0x6f2) = 1;
  }
  if (((DAT_0069d904 & 0x200) != 0) && ((DAT_0069d904 & 0x200) != (DAT_0069d908 & 0x200))) {
    *in_ECX = 6;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      if ((in_ECX[local_8 * 0x44 + 0x22] & 1U) != 0) {
        *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
      }
    }
    in_ECX[1] = 0;
  }
  switch(*in_ECX) {
  case 0:
    for (local_8 = 0; iVar1 = DAT_006d4588, local_8 < 6; local_8 = local_8 + 1) {
      local_6c = (undefined2)(local_8 + 2);
      *(undefined2 *)(in_ECX + local_8 * 0x44 + 2 + 0x2d) = local_6c;
      FUN_00432430(in_ECX + local_8 * 0x44 + 2,*(undefined4 *)(iVar1 + 0x1c934 + (local_8 + 2) * 4))
      ;
    }
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 1;
    }
    *in_ECX = *in_ECX + 1;
    in_ECX[1] = 0;
    iVar1 = DAT_006d4588;
    if (DAT_006c7115 != '\0') {
      *(undefined4 *)(DAT_006d4588 + 0x21118) = 3;
      *(undefined4 *)(iVar1 + 0x2111c) = 0x20;
      *(undefined4 *)(iVar1 + 0x21120) = 0x10;
      *(undefined4 *)(iVar1 + 0x21124) = 0x180;
      *(undefined4 *)(iVar1 + 0x21128) = 0x1c0;
      iVar1 = DAT_006d4588;
      *(undefined2 *)(in_ECX + 0x1c7) = 0x718;
      FUN_00432430(in_ECX + 0x19a,*(undefined4 *)(iVar1 + 0x1e594));
      in_ECX[0x1be] = 0x42000000;
      in_ECX[0x1bf] = 0x41800000;
      in_ECX[0x1c0] = 0;
    }
  case 1:
    in_ECX[0x65] = -0x7f80;
    in_ECX[0xa9] = -0x7f7f7f80;
    in_ECX[0x4c] = 0x3fd9999a;
    in_ECX[0x4d] = 0x3fd9999a;
    in_ECX[0x90] = 0x3fc00000;
    in_ECX[0x91] = 0x3fc00000;
    in_ECX[0x7f] = -0x3f800000;
    in_ECX[0x80] = -0x3f800000;
    in_ECX[0x81] = 0;
    in_ECX[0xc3] = 0;
    in_ECX[0xc4] = 0;
    in_ECX[0xc5] = 0;
    if (3 < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 2;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        *in_ECX = 3;
        in_ECX[1] = 0;
        *(undefined2 *)((int)in_ECX + 0x6f2) = 1;
      }
    }
    break;
  case 2:
    in_ECX[0x65] = -0x7f7f7f80;
    in_ECX[0xa9] = -0x7f80;
    in_ECX[0x4c] = 0x3fc00000;
    in_ECX[0x4d] = 0x3fc00000;
    in_ECX[0x90] = 0x3fd9999a;
    in_ECX[0x91] = 0x3fd9999a;
    in_ECX[0x7f] = 0;
    in_ECX[0x80] = 0;
    in_ECX[0x81] = 0;
    in_ECX[0xc3] = -0x3f800000;
    in_ECX[0xc4] = -0x3f800000;
    in_ECX[0xc5] = 0;
    if (3 < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 1;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 1;
        }
        *in_ECX = 5;
        in_ECX[1] = 0;
      }
    }
    break;
  case 3:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      DAT_0069d4bf = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        in_ECX[local_8 * 0x44 + 0x22] = in_ECX[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
    }
    break;
  case 4:
    in_ECX[0x131] = -0x7f80;
    in_ECX[0x175] = -0x7f7f7f80;
    in_ECX[0x118] = 0x3fd9999a;
    in_ECX[0x119] = 0x3fd9999a;
    in_ECX[0x15c] = 0x3fc00000;
    in_ECX[0x15d] = 0x3fc00000;
    in_ECX[0x14b] = -0x3f800000;
    in_ECX[0x14c] = -0x3f800000;
    in_ECX[0x14d] = 0;
    in_ECX[399] = 0;
    in_ECX[400] = 0;
    in_ECX[0x191] = 0;
    if (3 < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 5;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        *in_ECX = 6;
        in_ECX[1] = 0;
      }
    }
    break;
  case 5:
    in_ECX[0x131] = -0x7f7f7f80;
    in_ECX[0x175] = -0x7f80;
    in_ECX[0x118] = 0x3fc00000;
    in_ECX[0x119] = 0x3fc00000;
    in_ECX[0x15c] = 0x3fd9999a;
    in_ECX[0x15d] = 0x3fd9999a;
    in_ECX[0x14b] = 0;
    in_ECX[0x14c] = 0;
    in_ECX[0x14d] = 0;
    in_ECX[399] = -0x3f800000;
    in_ECX[400] = -0x3f800000;
    in_ECX[0x191] = 0;
    if (3 < in_ECX[1]) {
      if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
         (((DAT_0069d904 & 0x20) != 0 && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))))) {
        *in_ECX = 4;
      }
      if (((DAT_0069d904 & 1) != 0) && ((DAT_0069d904 & 1) != (DAT_0069d908 & 1))) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 1;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)((int)in_ECX + local_8 * 0x110 + 0x92) = 2;
        }
        *in_ECX = 2;
        in_ECX[1] = 0;
      }
    }
    break;
  case 6:
    if (0x13 < in_ECX[1]) {
      *in_ECX = 0;
      DAT_0069d4bf = 0;
      g_GameContext._396_4_ = 1;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        in_ECX[local_8 * 0x44 + 0x22] = in_ECX[local_8 * 0x44 + 0x22] & 0xfffffffe;
      }
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_00433960(in_ECX + local_8 * 0x44 + 2);
  }
  if (DAT_006c7115 != '\0') {
    FUN_00433960(in_ECX + 0x19a);
  }
  in_ECX[1] = in_ECX[1] + 1;
  return 0;
}

