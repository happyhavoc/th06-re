
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00427860(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  AnmManager *pAVar5;
  int iVar6;
  Unknown *in_ECX;
  int *piVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = 0.0;
  local_c = 0.0;
  in_ECX[0xd].field6_0x18 = 0.0;
  if ((BUTTONS_PRESSED_CURFRAME & 0x10) == 0) {
    if ((BUTTONS_PRESSED_CURFRAME & 0x20) == 0) {
      if ((BUTTONS_PRESSED_CURFRAME & 0x40) != 0) {
        in_ECX[0xd].field6_0x18 = 4.203895e-45;
      }
      if ((BUTTONS_PRESSED_CURFRAME & 0x80) != 0) {
        in_ECX[0xd].field6_0x18 = 5.605194e-45;
      }
    }
    else {
      in_ECX[0xd].field6_0x18 = 2.802597e-45;
      if ((BUTTONS_PRESSED_CURFRAME & 0x40) != 0) {
        in_ECX[0xd].field6_0x18 = 9.809089e-45;
      }
      if ((BUTTONS_PRESSED_CURFRAME & 0x80) != 0) {
        in_ECX[0xd].field6_0x18 = 1.121039e-44;
      }
    }
  }
  else {
    in_ECX[0xd].field6_0x18 = 1.401298e-45;
    if ((BUTTONS_PRESSED_CURFRAME & 0x40) != 0) {
      in_ECX[0xd].field6_0x18 = 7.006492e-45;
    }
    if ((BUTTONS_PRESSED_CURFRAME & 0x80) != 0) {
      in_ECX[0xd].field6_0x18 = 8.407791e-45;
    }
  }
  if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
    in_ECX[0xc].field_0xb3 = 0;
  }
  else {
    in_ECX[0xc].field_0xb3 = 1;
  }
  pAVar5 = g_AnmManager;
  switch(in_ECX[0xd].field6_0x18) {
  case 1.401298e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_c = (float)in_ECX[0xd].field0_0x0;
    }
    else {
      local_c = (float)in_ECX[0xd].field1_0x4;
    }
    local_c = -local_c;
    break;
  case 2.802597e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_c = (float)in_ECX[0xd].field0_0x0;
    }
    else {
      local_c = (float)in_ECX[0xd].field1_0x4;
    }
    break;
  case 4.203895e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field0_0x0;
    }
    else {
      local_10 = (float)in_ECX[0xd].field1_0x4;
    }
    local_10 = -local_10;
    break;
  case 5.605194e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field0_0x0;
    }
    else {
      local_10 = (float)in_ECX[0xd].field1_0x4;
    }
    break;
  case 7.006492e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field2_0x8;
    }
    else {
      local_10 = (float)in_ECX[0xd].field3_0xc;
    }
    local_10 = -local_10;
    local_c = local_10;
    break;
  case 8.407791e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field2_0x8;
    }
    else {
      local_10 = (float)in_ECX[0xd].field3_0xc;
    }
    local_c = -local_10;
    break;
  case 9.809089e-45:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field2_0x8;
    }
    else {
      local_10 = (float)in_ECX[0xd].field3_0xc;
    }
    local_10 = -local_10;
    local_c = -local_10;
    break;
  case 1.121039e-44:
    if ((BUTTONS_PRESSED_CURFRAME & 4) == 0) {
      local_10 = (float)in_ECX[0xd].field2_0x8;
    }
    else {
      local_10 = (float)in_ECX[0xd].field3_0xc;
    }
    local_c = local_10;
  }
  if ((local_10 < 0.0 == NAN(local_10)) || (in_ECX[0xd].field7_0x1c < 0.0)) {
    if ((NAN(local_10) != (local_10 == 0.0)) &&
       (in_ECX[0xd].field7_0x1c < 0.0 != NAN(in_ECX[0xd].field7_0x1c))) {
      *(undefined2 *)&in_ECX->field_0xb4 = 0x402;
      FUN_00432430(in_ECX,(int)pAVar5->scripts[0x402]);
    }
  }
  else {
    *(undefined2 *)&in_ECX->field_0xb4 = 0x401;
    FUN_00432430(in_ECX,(int)pAVar5->scripts[0x401]);
  }
  pAVar5 = g_AnmManager;
  if ((local_10 <= 0.0) || (in_ECX[0xd].field7_0x1c < 0.0 == (in_ECX[0xd].field7_0x1c == 0.0))) {
    if ((NAN(local_10) != (local_10 == 0.0)) && (0.0 < in_ECX[0xd].field7_0x1c)) {
      *(undefined2 *)&in_ECX->field_0xb4 = 0x404;
      FUN_00432430(in_ECX,(int)pAVar5->scripts[0x404]);
    }
  }
  else {
    *(undefined2 *)&in_ECX->field_0xb4 = 0x403;
    FUN_00432430(in_ECX,(int)pAVar5->scripts[0x403]);
  }
  in_ECX[0xd].field7_0x1c = local_10;
  in_ECX[0xd].field8_0x20 = local_c;
  piVar7 = &in_ECX[5].field13_0x3c.field12_0x30;
  *piVar7 = (int)(local_10 * *(float *)&in_ECX[0xc].field_0xa0 * g_GameContext.field84_0x1a8 +
                 (float)*piVar7);
  piVar7 = &in_ECX[5].field13_0x3c.field13_0x34;
  *piVar7 = (int)(local_c * *(float *)&in_ECX[0xc].field_0xa4 * g_GameContext.field84_0x1a8 +
                 (float)*piVar7);
  fVar1 = (float)in_ECX[5].field13_0x3c.field12_0x30;
  if (fVar1 < DAT_0069d6ec == (NAN(fVar1) || NAN(DAT_0069d6ec))) {
    fVar1 = (float)in_ECX[5].field13_0x3c.field12_0x30;
    if (DAT_0069d6ec + DAT_0069d6f4 < fVar1 != (NAN(DAT_0069d6ec + DAT_0069d6f4) || NAN(fVar1))) {
      in_ECX[5].field13_0x3c.field12_0x30 = (int)(DAT_0069d6ec + DAT_0069d6f4);
    }
  }
  else {
    in_ECX[5].field13_0x3c.field12_0x30 = (int)DAT_0069d6ec;
  }
  fVar1 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  if (fVar1 < DAT_0069d6f0 == (NAN(fVar1) || NAN(DAT_0069d6f0))) {
    fVar1 = (float)in_ECX[5].field13_0x3c.field13_0x34;
    if (DAT_0069d6f0 + DAT_0069d6f8 < fVar1 != (NAN(DAT_0069d6f0 + DAT_0069d6f8) || NAN(fVar1))) {
      in_ECX[5].field13_0x3c.field13_0x34 = (int)(DAT_0069d6f0 + DAT_0069d6f8);
    }
  }
  else {
    in_ECX[5].field13_0x3c.field13_0x34 = (int)DAT_0069d6f0;
  }
  fVar1 = (float)in_ECX[5].field13_0x3c.field14_0x38;
  fVar2 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  *(float *)&in_ECX[5].field16_0x84 =
       (float)in_ECX[5].field13_0x3c.field12_0x30 - *(float *)&in_ECX[5].field_0xb4;
  *(float *)&in_ECX[5].field18_0x88 = fVar2 - *(float *)&in_ECX[5].field_0xb8;
  *(float *)&in_ECX[5].field20_0x8c = fVar1 - *(float *)&in_ECX[5].field_0xbc;
  fVar1 = (float)in_ECX[5].field13_0x3c.field14_0x38;
  fVar2 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  *(float *)&in_ECX[5].field_0x90 =
       (float)in_ECX[5].field13_0x3c.field12_0x30 + *(float *)&in_ECX[5].field_0xb4;
  *(float *)&in_ECX[5].field_0x94 = fVar2 + *(float *)&in_ECX[5].field_0xb8;
  in_ECX[5].field31_0x98 = fVar1 + *(float *)&in_ECX[5].field_0xbc;
  fVar1 = (float)in_ECX[5].field13_0x3c.field14_0x38;
  fVar2 = (float)in_ECX[6].field1_0x4;
  fVar3 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  fVar4 = (float)in_ECX[6].field0_0x0;
  *(float *)&in_ECX[5].field_0x9c =
       (float)in_ECX[5].field13_0x3c.field12_0x30 - (float)in_ECX[5].field67_0xc0;
  *(float *)&in_ECX[5].field_0xa0 = fVar3 - fVar4;
  *(float *)&in_ECX[5].field_0xa4 = fVar1 - fVar2;
  fVar1 = (float)in_ECX[5].field13_0x3c.field14_0x38;
  fVar2 = (float)in_ECX[6].field1_0x4;
  fVar3 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  fVar4 = (float)in_ECX[6].field0_0x0;
  *(float *)&in_ECX[5].field_0xa8 =
       (float)in_ECX[5].field13_0x3c.field12_0x30 + (float)in_ECX[5].field67_0xc0;
  *(float *)&in_ECX[5].field_0xac = fVar3 + fVar4;
  *(float *)&in_ECX[5].field52_0xb0 = fVar1 + fVar2;
  in_ECX[6].field2_0x8 = in_ECX[5].field13_0x3c.field12_0x30;
  in_ECX[6].field3_0xc = in_ECX[5].field13_0x3c.field13_0x34;
  in_ECX[6].field4_0x10 = in_ECX[5].field13_0x3c.field14_0x38;
  in_ECX[6].field5_0x14 = in_ECX[5].field13_0x3c.field12_0x30;
  in_ECX[6].field6_0x18 = (float)in_ECX[5].field13_0x3c.field13_0x34;
  in_ECX[6].field7_0x1c = (float)in_ECX[5].field13_0x3c.field14_0x38;
  local_14 = 0.0;
  local_18 = 0.0;
  if (_DAT_0069d4b0 < 8) {
    in_ECX[0xc].field_0xb2 = 0;
  }
  else if (in_ECX[0xc].field_0xb2 == '\0') {
    in_ECX[0xc].field_0xb2 = 1;
  }
  switch(in_ECX[0xc].field_0xb2) {
  case 0:
    in_ECX[0xc].field67_0xc0 = (AnmLoadedSprite *)0x0;
    *(undefined4 *)&in_ECX[0xc].field_0xbc = 0;
    *(undefined4 *)&in_ECX[0xc].field_0xb8 = 0xfffffc19;
    break;
  case 1:
    local_18 = 24.0;
    in_ECX[0xc].field67_0xc0 = (AnmLoadedSprite *)0x0;
    *(undefined4 *)&in_ECX[0xc].field_0xbc = 0;
    *(undefined4 *)&in_ECX[0xc].field_0xb8 = 0xfffffc19;
    if (in_ECX[0xc].field_0xb3 == '\0') break;
    in_ECX[0xc].field_0xb2 = 2;
  case 2:
    while( true ) {
      *(AnmLoadedSprite **)&in_ECX[0xc].field_0xb8 = in_ECX[0xc].field67_0xc0;
      GameContext::FUN_00424285
                (&g_GameContext,(int *)&in_ECX[0xc].field67_0xc0,(float *)&in_ECX[0xc].field_0xbc);
      fVar1 = ((float)(int)in_ECX[0xc].field67_0xc0 + *(float *)&in_ECX[0xc].field_0xbc) / 8.0;
      local_14 = (1.0 - fVar1) * 32.0 + -32.0;
      local_18 = fVar1 * fVar1 * -16.0 + 24.0;
      if (7 < (int)in_ECX[0xc].field67_0xc0) {
        in_ECX[0xc].field_0xb2 = 3;
      }
      if (in_ECX[0xc].field_0xb3 != '\0') break;
      in_ECX[0xc].field_0xb2 = 4;
      in_ECX[0xc].field67_0xc0 = (AnmLoadedSprite *)(8 - (int)in_ECX[0xc].field67_0xc0);
      *(undefined4 *)&in_ECX[0xc].field_0xbc = 0;
      *(undefined4 *)&in_ECX[0xc].field_0xb8 = 0xfffffc19;
switchD_004281aa_caseD_4:
      *(AnmLoadedSprite **)&in_ECX[0xc].field_0xb8 = in_ECX[0xc].field67_0xc0;
      GameContext::FUN_00424285
                (&g_GameContext,(int *)&in_ECX[0xc].field67_0xc0,(float *)&in_ECX[0xc].field_0xbc);
      fVar1 = ((float)(int)in_ECX[0xc].field67_0xc0 + *(float *)&in_ECX[0xc].field_0xbc) / 8.0;
      local_14 = fVar1 * 32.0 + -32.0;
      local_18 = (1.0 - fVar1 * fVar1) * -16.0 + 24.0;
      if (7 < (int)in_ECX[0xc].field67_0xc0) {
        in_ECX[0xc].field_0xb2 = 1;
      }
      if (in_ECX[0xc].field_0xb3 == '\0') break;
      in_ECX[0xc].field_0xb2 = 2;
      in_ECX[0xc].field67_0xc0 = (AnmLoadedSprite *)(8 - (int)in_ECX[0xc].field67_0xc0);
      *(undefined4 *)&in_ECX[0xc].field_0xbc = 0;
      *(undefined4 *)&in_ECX[0xc].field_0xb8 = 0xfffffc19;
    }
    break;
  case 3:
    local_18 = 8.0;
    local_14 = -32.0;
    in_ECX[0xc].field67_0xc0 = (AnmLoadedSprite *)0x0;
    *(undefined4 *)&in_ECX[0xc].field_0xbc = 0;
    *(undefined4 *)&in_ECX[0xc].field_0xb8 = 0xfffffc19;
    if (in_ECX[0xc].field_0xb3 == '\0') {
      in_ECX[0xc].field_0xb2 = 4;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case 4:
    goto switchD_004281aa_caseD_4;
  }
  in_ECX[6].field2_0x8 = (float)in_ECX[6].field2_0x8 - local_18;
  in_ECX[6].field5_0x14 = local_18 + (float)in_ECX[6].field5_0x14;
  in_ECX[6].field3_0xc = local_14 + (float)in_ECX[6].field3_0xc;
  in_ECX[6].field6_0x18 = local_14 + in_ECX[6].field6_0x18;
  if (((BUTTONS_PRESSED_CURFRAME & 1) != 0) && (iVar6 = FUN_004195a2(), iVar6 == 0)) {
    FUN_00428630(in_ECX);
  }
  *(ushort *)&in_ECX[0xd].field9_0x24 = BUTTONS_PRESSED_CURFRAME;
  return 0;
}

