
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004195bf(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int local_c;
  int local_8;
  
  for (local_8 = 0; iVar2 = DAT_006d4588, local_8 < 0x1a; local_8 = local_8 + 1) {
    if ((local_8 == 0x13) && (*(int *)(*(int *)(in_ECX + 4) + 0x253c) < 0)) {
      if (*(char *)(in_ECX + 0x20) == '\0') {
        if (*(char *)(*(int *)(in_ECX + 4) + 0x1ba0) != '\0') {
          if (*(byte *)(*(int *)(in_ECX + 4) + 0x1ba0) < 3) {
            iVar1 = *(int *)(in_ECX + 4);
            *(undefined2 *)(iVar1 + 0x14e4) = 0x614;
            FUN_00432430(iVar1 + 0x1430,*(undefined4 *)(iVar2 + 0x1e184));
            *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 3;
          }
          if (*(int *)(in_ECX + 0x10) == 0) {
            *(undefined4 *)(in_ECX + 0x10) = 0;
          }
          else {
            *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -4;
          }
          iVar2 = FUN_00433960(*(int *)(in_ECX + 4) + 0x1430);
          if (iVar2 != 0) {
            *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 0;
            *(undefined4 *)(in_ECX + 0x28) = 0;
            *(undefined4 *)(in_ECX + 0x10) = 0;
          }
        }
      }
      else if (*(char *)(*(int *)(in_ECX + 4) + 0x1ba0) == '\0') {
        iVar1 = *(int *)(in_ECX + 4);
        *(undefined2 *)(iVar1 + 0x14e4) = 0x613;
        FUN_00432430(iVar1 + 0x1430,*(undefined4 *)(iVar2 + 0x1e180));
        *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 1;
        *(undefined4 *)(in_ECX + 0x10) = 0;
      }
      else {
        iVar2 = FUN_00433960(*(int *)(in_ECX + 4) + 0x1430);
        if (iVar2 != 0) {
          *(undefined *)(*(int *)(in_ECX + 4) + 0x1ba0) = 2;
        }
        if (*(uint *)(in_ECX + 0x10) < 0xfc) {
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 4;
        }
        else {
          *(undefined4 *)(in_ECX + 0x10) = 0xff;
        }
      }
      if (1 < *(byte *)(*(int *)(in_ECX + 4) + 0x1ba0)) {
        if (*(float *)(in_ECX + 0x24) <= *(float *)(in_ECX + 0x28)) {
          if ((*(float *)(in_ECX + 0x24) < *(float *)(in_ECX + 0x28) !=
               (NAN(*(float *)(in_ECX + 0x24)) || NAN(*(float *)(in_ECX + 0x28)))) &&
             (*(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) - 0.02,
             *(float *)(in_ECX + 0x28) < *(float *)(in_ECX + 0x24))) {
            *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x24);
          }
        }
        else {
          *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) + 0.01;
          if (*(float *)(in_ECX + 0x24) < *(float *)(in_ECX + 0x28) !=
              (NAN(*(float *)(in_ECX + 0x24)) || NAN(*(float *)(in_ECX + 0x28)))) {
            *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x24);
          }
        }
      }
    }
    else {
      FUN_00433960(local_8 * 0x110 + *(int *)(in_ECX + 4));
    }
  }
  FUN_00433960(*(int *)(in_ECX + 4) + 0x1ba4);
  FUN_00433960(*(int *)(in_ECX + 4) + 0x1cb4);
  FUN_00433960(*(int *)(in_ECX + 4) + 0x1dc4);
  FUN_00433960(*(int *)(in_ECX + 4) + 0x1fe4);
  FUN_00433960(*(int *)(in_ECX + 4) + 0x1ed4);
  FUN_00433960(*(int *)(in_ECX + 4) + 0x20f4);
  if ((-1 < *(short *)(*(int *)(in_ECX + 4) + 0x24d4)) &&
     (iVar2 = FUN_00433960(*(int *)(in_ECX + 4) + 0x2424), iVar2 != 0)) {
    *(undefined2 *)(*(int *)(in_ECX + 4) + 0x24d4) = 0xffff;
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2bf4) != 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x2c00) < 0x1e) {
      *(float *)(*(int *)(in_ECX + 4) + 0x2be4) =
           (((float)*(int *)(*(int *)(in_ECX + 4) + 0x2c00) +
            *(float *)(*(int *)(in_ECX + 4) + 0x2bfc)) * -312.0) / 30.0 + 416.0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2be4) = 0x42d00000;
    }
    if (0xf9 < *(int *)(*(int *)(in_ECX + 4) + 0x2c00)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2bf4) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2c14) != 0) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x2c20) < 0x1e) {
      *(float *)(*(int *)(in_ECX + 4) + 0x2c04) =
           (((float)*(int *)(*(int *)(in_ECX + 4) + 0x2c20) +
            *(float *)(*(int *)(in_ECX + 4) + 0x2c1c)) * -312.0) / 30.0 + 416.0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c04) = 0x42d00000;
    }
    if (0xb3 < *(int *)(*(int *)(in_ECX + 4) + 0x2c20)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c14) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2c34) != 0) {
    if (0x117 < *(int *)(*(int *)(in_ECX + 4) + 0x2c40)) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2c34) = 0;
    }
    FUN_0041b5af();
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x2bdc) == 1) {
    local_c = (DAT_0069d6d4 * 1000 + DAT_0069bcb4 * 10 + (uint)_DAT_0069d4b0 * 100) *
              (uint)DAT_0069d4b4;
    if (5 < DAT_0069d6d4) {
      local_c = local_c + DAT_0069d4ba * 3000000 + DAT_0069d4bb * 1000000;
    }
    if (_DAT_0069bcb0 == 0) {
      local_c = local_c / 2 - (local_c / 2) % 10;
    }
    else if (_DAT_0069bcb0 == 2) {
      local_c = (local_c * 0xc) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (_DAT_0069bcb0 == 3) {
      local_c = (local_c * 0xf) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (_DAT_0069bcb0 == 4) {
      local_c = local_c * 2 - (local_c * 2) % 10;
    }
    if (DAT_006c6e7c == '\x03') {
      local_c = (local_c * 5) / 10;
      local_c = local_c - local_c % 10;
    }
    else if (DAT_006c6e7c == '\x04') {
      local_c = (local_c << 1) / 10;
      local_c = local_c - local_c % 10;
    }
    *(int *)(*(int *)(in_ECX + 4) + 0x2be0) = local_c;
    DAT_0069bca4 = DAT_0069bca4 + local_c;
    *(int *)(*(int *)(in_ECX + 4) + 0x2bdc) = *(int *)(*(int *)(in_ECX + 4) + 0x2bdc) + 1;
  }
  return;
}

