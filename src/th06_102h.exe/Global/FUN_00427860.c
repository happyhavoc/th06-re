
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00427860(void)

{
  float fVar1;
  VeryBigStruct *pVVar2;
  int iVar3;
  int in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = 0.0;
  local_c = 0.0;
  *(undefined4 *)(in_ECX + 0xa0c) = 0;
  if ((DAT_0069d904 & 0x10) == 0) {
    if ((DAT_0069d904 & 0x20) == 0) {
      if ((DAT_0069d904 & 0x40) != 0) {
        *(undefined4 *)(in_ECX + 0xa0c) = 3;
      }
      if ((DAT_0069d904 & 0x80) != 0) {
        *(undefined4 *)(in_ECX + 0xa0c) = 4;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0xa0c) = 2;
      if ((DAT_0069d904 & 0x40) != 0) {
        *(undefined4 *)(in_ECX + 0xa0c) = 7;
      }
      if ((DAT_0069d904 & 0x80) != 0) {
        *(undefined4 *)(in_ECX + 0xa0c) = 8;
      }
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0xa0c) = 1;
    if ((DAT_0069d904 & 0x40) != 0) {
      *(undefined4 *)(in_ECX + 0xa0c) = 5;
    }
    if ((DAT_0069d904 & 0x80) != 0) {
      *(undefined4 *)(in_ECX + 0xa0c) = 6;
    }
  }
  if ((DAT_0069d904 & 4) == 0) {
    *(undefined *)(in_ECX + 0x9e3) = 0;
  }
  else {
    *(undefined *)(in_ECX + 0x9e3) = 1;
  }
  pVVar2 = VERY_BIG_STRUCT;
  switch(*(undefined4 *)(in_ECX + 0xa0c)) {
  case 1:
    if ((DAT_0069d904 & 4) == 0) {
      local_c = *(float *)(in_ECX + 0x9f4);
    }
    else {
      local_c = *(float *)(in_ECX + 0x9f8);
    }
    local_c = -local_c;
    break;
  case 2:
    if ((DAT_0069d904 & 4) == 0) {
      local_c = *(float *)(in_ECX + 0x9f4);
    }
    else {
      local_c = *(float *)(in_ECX + 0x9f8);
    }
    break;
  case 3:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9f4);
    }
    else {
      local_10 = *(float *)(in_ECX + 0x9f8);
    }
    local_10 = -local_10;
    break;
  case 4:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9f4);
    }
    else {
      local_10 = *(float *)(in_ECX + 0x9f8);
    }
    break;
  case 5:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9fc);
    }
    else {
      local_10 = *(float *)(in_ECX + 0xa00);
    }
    local_10 = -local_10;
    local_c = local_10;
    break;
  case 6:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9fc);
    }
    else {
      local_10 = *(float *)(in_ECX + 0xa00);
    }
    local_c = -local_10;
    break;
  case 7:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9fc);
    }
    else {
      local_10 = *(float *)(in_ECX + 0xa00);
    }
    local_10 = -local_10;
    local_c = -local_10;
    break;
  case 8:
    if ((DAT_0069d904 & 4) == 0) {
      local_10 = *(float *)(in_ECX + 0x9fc);
    }
    else {
      local_10 = *(float *)(in_ECX + 0xa00);
    }
    local_c = local_10;
  }
  if ((local_10 < 0.0 == NAN(local_10)) || (*(float *)(in_ECX + 0xa10) < 0.0)) {
    if ((NAN(local_10) != (local_10 == 0.0)) &&
       (*(float *)(in_ECX + 0xa10) < 0.0 != NAN(*(float *)(in_ECX + 0xa10)))) {
      *(undefined2 *)(in_ECX + 0xb4) = 0x402;
      FUN_00432430(in_ECX,*(undefined4 *)&pVVar2->field_0x1d93c);
    }
  }
  else {
    *(undefined2 *)(in_ECX + 0xb4) = 0x401;
    FUN_00432430(in_ECX,*(undefined4 *)&pVVar2->field_0x1d938);
  }
  pVVar2 = VERY_BIG_STRUCT;
  if ((local_10 <= 0.0) || (*(float *)(in_ECX + 0xa10) < 0.0 == (*(float *)(in_ECX + 0xa10) == 0.0))
     ) {
    if ((NAN(local_10) != (local_10 == 0.0)) && (0.0 < *(float *)(in_ECX + 0xa10))) {
      *(undefined2 *)(in_ECX + 0xb4) = 0x404;
      FUN_00432430(in_ECX,*(undefined4 *)&pVVar2->field_0x1d944);
    }
  }
  else {
    *(undefined2 *)(in_ECX + 0xb4) = 0x403;
    FUN_00432430(in_ECX,*(undefined4 *)&pVVar2->field_0x1d940);
  }
  *(float *)(in_ECX + 0xa10) = local_10;
  *(float *)(in_ECX + 0xa14) = local_c;
  *(float *)(in_ECX + 0x440) =
       local_10 * *(float *)(in_ECX + 0x9d0) * DAT_006c6ec0 + *(float *)(in_ECX + 0x440);
  *(float *)(in_ECX + 0x444) =
       local_c * *(float *)(in_ECX + 0x9d4) * DAT_006c6ec0 + *(float *)(in_ECX + 0x444);
  if (*(float *)(in_ECX + 0x440) < DAT_0069d6ec ==
      (NAN(*(float *)(in_ECX + 0x440)) || NAN(DAT_0069d6ec))) {
    if (DAT_0069d6ec + DAT_0069d6f4 < *(float *)(in_ECX + 0x440) !=
        (NAN(DAT_0069d6ec + DAT_0069d6f4) || NAN(*(float *)(in_ECX + 0x440)))) {
      *(float *)(in_ECX + 0x440) = DAT_0069d6ec + DAT_0069d6f4;
    }
  }
  else {
    *(float *)(in_ECX + 0x440) = DAT_0069d6ec;
  }
  if (*(float *)(in_ECX + 0x444) < DAT_0069d6f0 ==
      (NAN(*(float *)(in_ECX + 0x444)) || NAN(DAT_0069d6f0))) {
    if (DAT_0069d6f0 + DAT_0069d6f8 < *(float *)(in_ECX + 0x444) !=
        (NAN(DAT_0069d6f0 + DAT_0069d6f8) || NAN(*(float *)(in_ECX + 0x444)))) {
      *(float *)(in_ECX + 0x444) = DAT_0069d6f0 + DAT_0069d6f8;
    }
  }
  else {
    *(float *)(in_ECX + 0x444) = DAT_0069d6f0;
  }
  *(float *)(in_ECX + 0x458) = *(float *)(in_ECX + 0x440) - *(float *)(in_ECX + 0x488);
  *(float *)(in_ECX + 0x45c) = *(float *)(in_ECX + 0x444) - *(float *)(in_ECX + 0x48c);
  *(float *)(in_ECX + 0x460) = *(float *)(in_ECX + 0x448) - *(float *)(in_ECX + 0x490);
  *(float *)(in_ECX + 0x464) = *(float *)(in_ECX + 0x440) + *(float *)(in_ECX + 0x488);
  *(float *)(in_ECX + 0x468) = *(float *)(in_ECX + 0x444) + *(float *)(in_ECX + 0x48c);
  *(float *)(in_ECX + 0x46c) = *(float *)(in_ECX + 0x448) + *(float *)(in_ECX + 0x490);
  *(float *)(in_ECX + 0x470) = *(float *)(in_ECX + 0x440) - *(float *)(in_ECX + 0x494);
  *(float *)(in_ECX + 0x474) = *(float *)(in_ECX + 0x444) - *(float *)(in_ECX + 0x498);
  *(float *)(in_ECX + 0x478) = *(float *)(in_ECX + 0x448) - *(float *)(in_ECX + 0x49c);
  *(float *)(in_ECX + 0x47c) = *(float *)(in_ECX + 0x440) + *(float *)(in_ECX + 0x494);
  *(float *)(in_ECX + 0x480) = *(float *)(in_ECX + 0x444) + *(float *)(in_ECX + 0x498);
  *(float *)(in_ECX + 0x484) = *(float *)(in_ECX + 0x448) + *(float *)(in_ECX + 0x49c);
  *(undefined4 *)(in_ECX + 0x4a0) = *(undefined4 *)(in_ECX + 0x440);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(in_ECX + 0x444);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(in_ECX + 0x448);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(in_ECX + 0x440);
  *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(in_ECX + 0x444);
  *(undefined4 *)(in_ECX + 0x4b4) = *(undefined4 *)(in_ECX + 0x448);
  local_14 = 0.0;
  local_18 = 0.0;
  if (_DAT_0069d4b0 < 8) {
    *(undefined *)(in_ECX + 0x9e2) = 0;
  }
  else if (*(char *)(in_ECX + 0x9e2) == '\0') {
    *(undefined *)(in_ECX + 0x9e2) = 1;
  }
  switch(*(undefined *)(in_ECX + 0x9e2)) {
  case 0:
    *(undefined4 *)(in_ECX + 0x9f0) = 0;
    *(undefined4 *)(in_ECX + 0x9ec) = 0;
    *(undefined4 *)(in_ECX + 0x9e8) = 0xfffffc19;
    break;
  case 1:
    local_18 = 24.0;
    *(undefined4 *)(in_ECX + 0x9f0) = 0;
    *(undefined4 *)(in_ECX + 0x9ec) = 0;
    *(undefined4 *)(in_ECX + 0x9e8) = 0xfffffc19;
    if (*(char *)(in_ECX + 0x9e3) == '\0') break;
    *(undefined *)(in_ECX + 0x9e2) = 2;
  case 2:
    while( true ) {
      *(undefined4 *)(in_ECX + 0x9e8) = *(undefined4 *)(in_ECX + 0x9f0);
      FUN_00424285(in_ECX + 0x9f0,in_ECX + 0x9ec);
      fVar1 = ((float)*(int *)(in_ECX + 0x9f0) + *(float *)(in_ECX + 0x9ec)) / 8.0;
      local_14 = (1.0 - fVar1) * 32.0 + -32.0;
      local_18 = fVar1 * fVar1 * -16.0 + 24.0;
      if (7 < *(int *)(in_ECX + 0x9f0)) {
        *(undefined *)(in_ECX + 0x9e2) = 3;
      }
      if (*(char *)(in_ECX + 0x9e3) != '\0') break;
      *(undefined *)(in_ECX + 0x9e2) = 4;
      *(int *)(in_ECX + 0x9f0) = 8 - *(int *)(in_ECX + 0x9f0);
      *(undefined4 *)(in_ECX + 0x9ec) = 0;
      *(undefined4 *)(in_ECX + 0x9e8) = 0xfffffc19;
switchD_004281aa_caseD_4:
      *(undefined4 *)(in_ECX + 0x9e8) = *(undefined4 *)(in_ECX + 0x9f0);
      FUN_00424285(in_ECX + 0x9f0,in_ECX + 0x9ec);
      fVar1 = ((float)*(int *)(in_ECX + 0x9f0) + *(float *)(in_ECX + 0x9ec)) / 8.0;
      local_14 = fVar1 * 32.0 + -32.0;
      local_18 = (1.0 - fVar1 * fVar1) * -16.0 + 24.0;
      if (7 < *(int *)(in_ECX + 0x9f0)) {
        *(undefined *)(in_ECX + 0x9e2) = 1;
      }
      if (*(char *)(in_ECX + 0x9e3) == '\0') break;
      *(undefined *)(in_ECX + 0x9e2) = 2;
      *(int *)(in_ECX + 0x9f0) = 8 - *(int *)(in_ECX + 0x9f0);
      *(undefined4 *)(in_ECX + 0x9ec) = 0;
      *(undefined4 *)(in_ECX + 0x9e8) = 0xfffffc19;
    }
    break;
  case 3:
    local_18 = 8.0;
    local_14 = -32.0;
    *(undefined4 *)(in_ECX + 0x9f0) = 0;
    *(undefined4 *)(in_ECX + 0x9ec) = 0;
    *(undefined4 *)(in_ECX + 0x9e8) = 0xfffffc19;
    if (*(char *)(in_ECX + 0x9e3) == '\0') {
      *(undefined *)(in_ECX + 0x9e2) = 4;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case 4:
    goto switchD_004281aa_caseD_4;
  }
  *(float *)(in_ECX + 0x4a0) = *(float *)(in_ECX + 0x4a0) - local_18;
  *(float *)(in_ECX + 0x4ac) = local_18 + *(float *)(in_ECX + 0x4ac);
  *(float *)(in_ECX + 0x4a4) = local_14 + *(float *)(in_ECX + 0x4a4);
  *(float *)(in_ECX + 0x4b0) = local_14 + *(float *)(in_ECX + 0x4b0);
  if (((DAT_0069d904 & 1) != 0) && (iVar3 = FUN_004195a2(), iVar3 == 0)) {
    FUN_00428630(in_ECX);
  }
  *(ushort *)(in_ECX + 0xa18) = DAT_0069d904;
  return 0;
}

