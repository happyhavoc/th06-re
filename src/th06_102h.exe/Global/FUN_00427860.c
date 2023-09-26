
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00427860(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  AnmManager *pAVar5;
  float *pfVar6;
  int iVar7;
  AnmVm *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = 0.0;
  local_c = 0.0;
  in_ECX[9].color = 0;
  if ((g_CurFrameInput & 0x10) == 0) {
    if ((g_CurFrameInput & 0x20) == 0) {
      if ((g_CurFrameInput & 0x40) != 0) {
        in_ECX[9].color = 3;
      }
      if ((g_CurFrameInput & 0x80) != 0) {
        in_ECX[9].color = 4;
      }
    }
    else {
      in_ECX[9].color = 2;
      if ((g_CurFrameInput & 0x40) != 0) {
        in_ECX[9].color = 7;
      }
      if ((g_CurFrameInput & 0x80) != 0) {
        in_ECX[9].color = 8;
      }
    }
  }
  else {
    in_ECX[9].color = 1;
    if ((g_CurFrameInput & 0x40) != 0) {
      in_ECX[9].color = 5;
    }
    if ((g_CurFrameInput & 0x80) != 0) {
      in_ECX[9].color = 6;
    }
  }
  if ((g_CurFrameInput & 4) == 0) {
    *(undefined *)((int)in_ECX[9].matrix.m[1] + 7) = 0;
  }
  else {
    *(undefined *)((int)in_ECX[9].matrix.m[1] + 7) = 1;
  }
  pAVar5 = g_AnmManager;
  switch(in_ECX[9].color) {
  case 1:
    if ((g_CurFrameInput & 4) == 0) {
      local_c = in_ECX[9].matrix.m[2][2];
    }
    else {
      local_c = in_ECX[9].matrix.m[2][3];
    }
    local_c = -local_c;
    break;
  case 2:
    if ((g_CurFrameInput & 4) == 0) {
      local_c = in_ECX[9].matrix.m[2][2];
    }
    else {
      local_c = in_ECX[9].matrix.m[2][3];
    }
    break;
  case 3:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[2][2];
    }
    else {
      local_10 = in_ECX[9].matrix.m[2][3];
    }
    local_10 = -local_10;
    break;
  case 4:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[2][2];
    }
    else {
      local_10 = in_ECX[9].matrix.m[2][3];
    }
    break;
  case 5:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[3][0];
    }
    else {
      local_10 = in_ECX[9].matrix.m[3][1];
    }
    local_10 = -local_10;
    local_c = local_10;
    break;
  case 6:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[3][0];
    }
    else {
      local_10 = in_ECX[9].matrix.m[3][1];
    }
    local_c = -local_10;
    break;
  case 7:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[3][0];
    }
    else {
      local_10 = in_ECX[9].matrix.m[3][1];
    }
    local_10 = -local_10;
    local_c = -local_10;
    break;
  case 8:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = in_ECX[9].matrix.m[3][0];
    }
    else {
      local_10 = in_ECX[9].matrix.m[3][1];
    }
    local_c = local_10;
  }
  if ((local_10 < 0.0 == NAN(local_10)) || ((float)in_ECX[9].flags < 0.0)) {
    if ((NAN(local_10) != (local_10 == 0.0)) &&
       ((float)in_ECX[9].flags < 0.0 != NAN((float)in_ECX[9].flags))) {
      in_ECX->anmFileIndex = 0x402;
      AnmManager::SetBeginingOfScript(pAVar5,in_ECX,pAVar5->scripts[0x402]);
    }
  }
  else {
    in_ECX->anmFileIndex = 0x401;
    AnmManager::SetBeginingOfScript(pAVar5,in_ECX,pAVar5->scripts[0x401]);
  }
  pAVar5 = g_AnmManager;
  if ((local_10 <= 0.0) || ((float)in_ECX[9].flags < 0.0 == ((float)in_ECX[9].flags == 0.0))) {
    if ((NAN(local_10) != (local_10 == 0.0)) && (0.0 < (float)in_ECX[9].flags)) {
      in_ECX->anmFileIndex = 0x404;
      AnmManager::SetBeginingOfScript(pAVar5,in_ECX,pAVar5->scripts[0x404]);
    }
  }
  else {
    in_ECX->anmFileIndex = 0x403;
    AnmManager::SetBeginingOfScript(pAVar5,in_ECX,pAVar5->scripts[0x403]);
  }
  in_ECX[9].flags = (uint)local_10;
  *(float *)&in_ECX[9].alphaInterpEndTime = local_c;
  in_ECX[4].rotation.x =
       local_10 * in_ECX[9].matrix.m[0][1] * g_GameContext.field84_0x1a8 + in_ECX[4].rotation.x;
  pfVar6 = &in_ECX[4].rotation.y;
  *pfVar6 = local_c * in_ECX[9].matrix.m[0][2] * g_GameContext.field84_0x1a8 + *pfVar6;
  fVar1 = in_ECX[4].rotation.x;
  if (fVar1 < DAT_0069d6ec == (NAN(fVar1) || NAN(DAT_0069d6ec))) {
    fVar1 = in_ECX[4].rotation.x;
    if (DAT_0069d6ec + DAT_0069d6f4 < fVar1 != (NAN(DAT_0069d6ec + DAT_0069d6f4) || NAN(fVar1))) {
      in_ECX[4].rotation.x = DAT_0069d6ec + DAT_0069d6f4;
    }
  }
  else {
    in_ECX[4].rotation.x = DAT_0069d6ec;
  }
  fVar1 = in_ECX[4].rotation.y;
  if (fVar1 < DAT_0069d6f0 == (NAN(fVar1) || NAN(DAT_0069d6f0))) {
    fVar1 = in_ECX[4].rotation.y;
    if (DAT_0069d6f0 + DAT_0069d6f8 < fVar1 != (NAN(DAT_0069d6f0 + DAT_0069d6f8) || NAN(fVar1))) {
      in_ECX[4].rotation.y = DAT_0069d6f0 + DAT_0069d6f8;
    }
  }
  else {
    in_ECX[4].rotation.y = DAT_0069d6f0;
  }
  fVar1 = in_ECX[4].rotation.z;
  fVar2 = in_ECX[4].matrix.m[1][1];
  fVar3 = in_ECX[4].rotation.y;
  fVar4 = in_ECX[4].matrix.m[1][0];
  in_ECX[4].scaleX = in_ECX[4].rotation.x - in_ECX[4].matrix.m[0][3];
  in_ECX[4].scaleY = fVar3 - fVar4;
  in_ECX[4].scaleInterpFinalY = fVar1 - fVar2;
  fVar1 = in_ECX[4].rotation.z;
  fVar2 = in_ECX[4].matrix.m[1][1];
  fVar3 = in_ECX[4].rotation.y;
  fVar4 = in_ECX[4].matrix.m[1][0];
  in_ECX[4].scaleInterpFinalX = in_ECX[4].rotation.x + in_ECX[4].matrix.m[0][3];
  in_ECX[4].uvScrollPos.x = fVar3 + fVar4;
  in_ECX[4].uvScrollPos.y = fVar1 + fVar2;
  fVar1 = in_ECX[4].rotation.z;
  fVar2 = in_ECX[4].matrix.m[2][0];
  fVar3 = in_ECX[4].rotation.y;
  fVar4 = in_ECX[4].matrix.m[1][3];
  in_ECX[4].currentTimeInScript.previous = (int)(in_ECX[4].rotation.x - in_ECX[4].matrix.m[1][2]);
  in_ECX[4].currentTimeInScript.subFrame = fVar3 - fVar4;
  in_ECX[4].currentTimeInScript.current = (int)(fVar1 - fVar2);
  fVar1 = in_ECX[4].rotation.z;
  fVar2 = in_ECX[4].matrix.m[2][0];
  fVar3 = in_ECX[4].rotation.y;
  fVar4 = in_ECX[4].matrix.m[1][3];
  in_ECX[4].matrix.m[0][0] = in_ECX[4].rotation.x + in_ECX[4].matrix.m[1][2];
  in_ECX[4].matrix.m[0][1] = fVar3 + fVar4;
  in_ECX[4].matrix.m[0][2] = fVar1 + fVar2;
  in_ECX[4].matrix.m[2][1] = in_ECX[4].rotation.x;
  in_ECX[4].matrix.m[2][2] = in_ECX[4].rotation.y;
  in_ECX[4].matrix.m[2][3] = in_ECX[4].rotation.z;
  in_ECX[4].matrix.m[3][0] = in_ECX[4].rotation.x;
  in_ECX[4].matrix.m[3][1] = in_ECX[4].rotation.y;
  in_ECX[4].matrix.m[3][2] = in_ECX[4].rotation.z;
  local_14 = 0.0;
  local_18 = 0.0;
  if (_DAT_0069d4b0 < 8) {
    *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 0;
  }
  else if (*(char *)((int)in_ECX[9].matrix.m[1] + 6) == '\0') {
    *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 1;
  }
  switch(*(undefined *)((int)in_ECX[9].matrix.m[1] + 6)) {
  case 0:
    in_ECX[9].matrix.m[2][1] = 0.0;
    in_ECX[9].matrix.m[2][0] = 0.0;
    in_ECX[9].matrix.m[1][3] = -NAN;
    break;
  case 1:
    local_18 = 24.0;
    in_ECX[9].matrix.m[2][1] = 0.0;
    in_ECX[9].matrix.m[2][0] = 0.0;
    in_ECX[9].matrix.m[1][3] = -NAN;
    if (*(char *)((int)in_ECX[9].matrix.m[1] + 7) == '\0') break;
    *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 2;
  case 2:
    while( true ) {
      in_ECX[9].matrix.m[1][3] = in_ECX[9].matrix.m[2][1];
      GameContext::FUN_00424285
                (&g_GameContext,(int *)(in_ECX[9].matrix.m[2] + 1),in_ECX[9].matrix.m[2]);
      fVar1 = ((float)(int)in_ECX[9].matrix.m[2][1] + in_ECX[9].matrix.m[2][0]) / 8.0;
      local_14 = (1.0 - fVar1) * 32.0 + -32.0;
      local_18 = fVar1 * fVar1 * -16.0 + 24.0;
      if (7 < (int)in_ECX[9].matrix.m[2][1]) {
        *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 3;
      }
      if (*(char *)((int)in_ECX[9].matrix.m[1] + 7) != '\0') break;
      *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 4;
      in_ECX[9].matrix.m[2][1] = (float)(8 - (int)in_ECX[9].matrix.m[2][1]);
      in_ECX[9].matrix.m[2][0] = 0.0;
      in_ECX[9].matrix.m[1][3] = -NAN;
switchD_004281aa_caseD_4:
      in_ECX[9].matrix.m[1][3] = in_ECX[9].matrix.m[2][1];
      GameContext::FUN_00424285
                (&g_GameContext,(int *)(in_ECX[9].matrix.m[2] + 1),in_ECX[9].matrix.m[2]);
      fVar1 = ((float)(int)in_ECX[9].matrix.m[2][1] + in_ECX[9].matrix.m[2][0]) / 8.0;
      local_14 = fVar1 * 32.0 + -32.0;
      local_18 = (1.0 - fVar1 * fVar1) * -16.0 + 24.0;
      if (7 < (int)in_ECX[9].matrix.m[2][1]) {
        *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 1;
      }
      if (*(char *)((int)in_ECX[9].matrix.m[1] + 7) == '\0') break;
      *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 2;
      in_ECX[9].matrix.m[2][1] = (float)(8 - (int)in_ECX[9].matrix.m[2][1]);
      in_ECX[9].matrix.m[2][0] = 0.0;
      in_ECX[9].matrix.m[1][3] = -NAN;
    }
    break;
  case 3:
    local_18 = 8.0;
    local_14 = -32.0;
    in_ECX[9].matrix.m[2][1] = 0.0;
    in_ECX[9].matrix.m[2][0] = 0.0;
    in_ECX[9].matrix.m[1][3] = -NAN;
    if (*(char *)((int)in_ECX[9].matrix.m[1] + 7) == '\0') {
      *(undefined *)((int)in_ECX[9].matrix.m[1] + 6) = 4;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case 4:
    goto switchD_004281aa_caseD_4;
  }
  in_ECX[4].matrix.m[2][1] = in_ECX[4].matrix.m[2][1] - local_18;
  in_ECX[4].matrix.m[3][0] = local_18 + in_ECX[4].matrix.m[3][0];
  in_ECX[4].matrix.m[2][2] = local_14 + in_ECX[4].matrix.m[2][2];
  in_ECX[4].matrix.m[3][1] = local_14 + in_ECX[4].matrix.m[3][1];
  if (((g_CurFrameInput & 1) != 0) && (iVar7 = FUN_004195a2(), iVar7 == 0)) {
    FUN_00428630(in_ECX);
  }
  in_ECX[9].autoRotate = g_CurFrameInput;
  return 0;
}

