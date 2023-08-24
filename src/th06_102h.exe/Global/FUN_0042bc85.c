
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042bc85(void)

{
  int iVar1;
  int in_ECX;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 4) == 0) {
    *(uint *)(in_ECX + 0x24) = (uint)DAT_0069d4bd;
    *(undefined4 *)(in_ECX + 0x2c) = _DAT_0069bcb0;
    local_c = in_ECX + 0x40;
    for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
      *(short *)(local_c + 0x8a) = (short)*(undefined4 *)(in_ECX + 0x2c) + 3;
      local_c = local_c + 0x110;
    }
    FUN_00434e20(VERY_BIG_STRUCT,in_ECX + 0x28a0,0xffffff,0,
                 (&PTR_DAT_004784d8)[*(int *)(in_ECX + 0x24) * 2]);
    if (DAT_0069d4be != 0) {
      *(undefined4 *)(in_ECX + 0x291c) = 0x80ffffff;
    }
    FUN_00434e20(VERY_BIG_STRUCT,in_ECX + 0x29b0,0xffffff,0,
                 (&PTR_DAT_004784dc)[*(int *)(in_ECX + 0x24) * 2]);
    if (DAT_0069d4be != 1) {
      *(undefined4 *)(in_ECX + 0x2a2c) = 0x80ffffff;
    }
    *(byte *)(in_ECX + 0x5190) = DAT_0069d4be + (char)*(undefined4 *)(in_ECX + 0x24) * '\x02';
    *(undefined *)(in_ECX + 0x5191) = *(undefined *)(in_ECX + 0x2c);
    *(undefined4 *)(in_ECX + 0x518c) = DAT_0069bca4;
    *(undefined *)(in_ECX + 0x5188) = 0x10;
    *(undefined4 *)(in_ECX + 0x5180) = 0x52435348;
    if (DAT_0069d4c2 == '\0') {
      *(undefined *)(in_ECX + 0x5192) = (undefined)DAT_0069d6d4;
    }
    else {
      *(undefined *)(in_ECX + 0x5192) = 99;
    }
    *(undefined *)(in_ECX + 0x5189) = 1;
    _strcpy((char *)(in_ECX + 0x5193),"        ");
    iVar1 = FUN_0042bc2d(in_ECX + 0x5180,*(undefined4 *)(in_ECX + 0x2c),
                         (uint)DAT_0069d4be + *(int *)(in_ECX + 0x24) * 2);
    if (9 < iVar1) goto LAB_0042c273;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    _strcpy((char *)(in_ECX + 0x34),"");
  }
  if (*(int *)(in_ECX + 4) < 0x1e) {
    return 0;
  }
  if ((((DAT_0069d904 & 0x10) != 0) && ((DAT_0069d904 & 0x10) != (DAT_0069d908 & 0x10))) ||
     (((DAT_0069d904 & 0x10) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + -0x10;
      if (*(int *)(in_ECX + 0x20) < 0) {
        *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 0x60;
      }
    } while (PTR_DAT_004784d4[*(int *)(in_ECX + 0x20)] == ' ');
    FUN_004311e0(0xc,0);
  }
  if ((((DAT_0069d904 & 0x20) != 0) && ((DAT_0069d904 & 0x20) != (DAT_0069d908 & 0x20))) ||
     (((DAT_0069d904 & 0x20) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 0x10;
      if (0x5f < *(int *)(in_ECX + 0x20)) {
        *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + -0x60;
      }
    } while (PTR_DAT_004784d4[*(int *)(in_ECX + 0x20)] == ' ');
    FUN_004311e0(0xc,0);
  }
  if ((((DAT_0069d904 & 0x40) != 0) && ((DAT_0069d904 & 0x40) != (DAT_0069d908 & 0x40))) ||
     (((DAT_0069d904 & 0x40) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + -1;
      if (*(int *)(in_ECX + 0x20) % 0x10 == 0xf) {
        *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 0x10;
      }
      if (*(int *)(in_ECX + 0x20) < 0) {
        *(undefined4 *)(in_ECX + 0x20) = 0xf;
      }
    } while (PTR_DAT_004784d4[*(int *)(in_ECX + 0x20)] == ' ');
    FUN_004311e0(0xc,0);
  }
  if ((((DAT_0069d904 & 0x80) != 0) && ((DAT_0069d904 & 0x80) != (DAT_0069d908 & 0x80))) ||
     (((DAT_0069d904 & 0x80) != 0 && (DAT_0069d90c != 0)))) {
    do {
      *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 1;
      if (*(int *)(in_ECX + 0x20) % 0x10 == 0) {
        *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + -0x10;
      }
    } while (PTR_DAT_004784d4[*(int *)(in_ECX + 0x20)] == ' ');
    FUN_004311e0(0xc,0);
  }
  if ((((DAT_0069d904 & 0x1001) == 0) || ((DAT_0069d904 & 0x1001) == (DAT_0069d908 & 0x1001))) &&
     (((DAT_0069d904 & 0x1001) == 0 || (DAT_0069d90c == 0)))) {
LAB_0042c1aa:
    if ((((DAT_0069d904 & 10) != 0) && ((DAT_0069d904 & 10) != (DAT_0069d908 & 10))) ||
       (((DAT_0069d904 & 10) != 0 && (DAT_0069d90c != 0)))) {
      if (*(int *)(in_ECX + 0x10) < 8) {
        local_20 = *(int *)(in_ECX + 0x10);
      }
      else {
        local_20 = 7;
      }
      if (0 < *(int *)(in_ECX + 0x10)) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        *(undefined *)(in_ECX + local_20 + 0x5193) = 0x20;
      }
      FUN_004311e0(0xb,0);
    }
    if ((DAT_0069d904 & 8) == 0) {
      return 0;
    }
    if ((DAT_0069d904 & 8) == (DAT_0069d908 & 8)) {
      return 0;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x10) < 8) {
      local_1c = *(int *)(in_ECX + 0x10);
    }
    else {
      local_1c = 7;
    }
    if (*(int *)(in_ECX + 0x20) < 0x5e) {
      *(undefined *)(in_ECX + local_1c + 0x5193) = PTR_DAT_004784d4[*(int *)(in_ECX + 0x20)];
LAB_0042c173:
      if ((*(int *)(in_ECX + 0x10) < 8) &&
         (*(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1, *(int *)(in_ECX + 0x10) == 8)) {
        *(undefined4 *)(in_ECX + 0x20) = 0x5f;
      }
      FUN_004311e0(10,0);
      goto LAB_0042c1aa;
    }
    if (*(int *)(in_ECX + 0x20) == 0x5e) {
      *(undefined *)(in_ECX + local_1c + 0x5193) = 0x20;
      goto LAB_0042c173;
    }
  }
  FUN_004311e0(0xb,0);
LAB_0042c273:
  *(undefined4 *)(in_ECX + 8) = 0xf;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_c = in_ECX + 0x40;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    *(undefined2 *)(local_c + 0x8a) = 2;
    local_c = local_c + 0x110;
  }
  _strcpy((char *)(in_ECX + 0x34),(char *)(in_ECX + 0x5193));
  return 0;
}

