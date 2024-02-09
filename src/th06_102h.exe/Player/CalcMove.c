
undefined4 __thiscall Player::CalcMove(Player *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  AnmManager *pAVar5;
  float *pfVar6;
  BOOL BVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_10 = 0.0;
  local_c = 0.0;
  this->field28_0xa0c = 0;
  if ((g_CurFrameInput & 0x10) == 0) {
    if ((g_CurFrameInput & 0x20) == 0) {
      if ((g_CurFrameInput & 0x40) != 0) {
        this->field28_0xa0c = 3;
      }
      if ((g_CurFrameInput & 0x80) != 0) {
        this->field28_0xa0c = 4;
      }
    }
    else {
      this->field28_0xa0c = 2;
      if ((g_CurFrameInput & 0x40) != 0) {
        this->field28_0xa0c = 7;
      }
      if ((g_CurFrameInput & 0x80) != 0) {
        this->field28_0xa0c = 8;
      }
    }
  }
  else {
    this->field28_0xa0c = 1;
    if ((g_CurFrameInput & 0x40) != 0) {
      this->field28_0xa0c = 5;
    }
    if ((g_CurFrameInput & 0x80) != 0) {
      this->field28_0xa0c = 6;
    }
  }
  if ((g_CurFrameInput & 4) == 0) {
    this->field24_0x9e3 = 0;
  }
  else {
    this->field24_0x9e3 = 1;
  }
  pAVar5 = g_AnmManager;
  switch(this->field28_0xa0c) {
  case 1:
    if ((g_CurFrameInput & 4) == 0) {
      local_c = (this->field27_0x9f4).field0_0x0;
    }
    else {
      local_c = (this->field27_0x9f4).field1_0x4;
    }
    local_c = -local_c;
    break;
  case 2:
    if ((g_CurFrameInput & 4) == 0) {
      local_c = (this->field27_0x9f4).field0_0x0;
    }
    else {
      local_c = (this->field27_0x9f4).field1_0x4;
    }
    break;
  case 3:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field0_0x0;
    }
    else {
      local_10 = (this->field27_0x9f4).field1_0x4;
    }
    local_10 = -local_10;
    break;
  case 4:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field0_0x0;
    }
    else {
      local_10 = (this->field27_0x9f4).field1_0x4;
    }
    break;
  case 5:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field2_0x8;
    }
    else {
      local_10 = (this->field27_0x9f4).field3_0xc;
    }
    local_10 = -local_10;
    local_c = local_10;
    break;
  case 6:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field2_0x8;
    }
    else {
      local_10 = (this->field27_0x9f4).field3_0xc;
    }
    local_c = -local_10;
    break;
  case 7:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field2_0x8;
    }
    else {
      local_10 = (this->field27_0x9f4).field3_0xc;
    }
    local_10 = -local_10;
    local_c = -local_10;
    break;
  case 8:
    if ((g_CurFrameInput & 4) == 0) {
      local_10 = (this->field27_0x9f4).field2_0x8;
    }
    else {
      local_10 = (this->field27_0x9f4).field3_0xc;
    }
    local_c = local_10;
  }
  if ((local_10 < 0.0 == NAN(local_10)) || (this->field29_0xa10 < 0.0)) {
    if ((NAN(local_10) != (local_10 == 0.0)) &&
       (this->field29_0xa10 < 0.0 != NAN(this->field29_0xa10))) {
      (this->vm0).anmFileIndex = 0x402;
      AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x402]);
    }
  }
  else {
    (this->vm0).anmFileIndex = 0x401;
    AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x401]);
  }
  pAVar5 = g_AnmManager;
  if ((local_10 <= 0.0) || (this->field29_0xa10 < 0.0 == (this->field29_0xa10 == 0.0))) {
    if ((NAN(local_10) != (local_10 == 0.0)) && (0.0 < this->field29_0xa10)) {
      (this->vm0).anmFileIndex = 0x404;
      AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x404]);
    }
  }
  else {
    (this->vm0).anmFileIndex = 0x403;
    AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x403]);
  }
  this->field29_0xa10 = local_10;
  this->field30_0xa14 = (int)local_c;
  (this->position).x =
       local_10 * this->field17_0x9d0 * g_Supervisor.effectiveFramerateMultiplier +
       (this->position).x;
  pfVar6 = &(this->position).y;
  *pfVar6 = local_c * this->field18_0x9d4 * g_Supervisor.effectiveFramerateMultiplier + *pfVar6;
  fVar1 = (this->position).x;
  if (fVar1 < g_GameManager.field49_0x1a4c == (NAN(fVar1) || NAN(g_GameManager.field49_0x1a4c))) {
    fVar1 = (this->position).x;
    if (g_GameManager.field49_0x1a4c + g_GameManager.field51_0x1a54 < fVar1 !=
        (NAN(g_GameManager.field49_0x1a4c + g_GameManager.field51_0x1a54) || NAN(fVar1))) {
      (this->position).x = g_GameManager.field49_0x1a4c + g_GameManager.field51_0x1a54;
    }
  }
  else {
    (this->position).x = g_GameManager.field49_0x1a4c;
  }
  fVar1 = (this->position).y;
  if (fVar1 < g_GameManager.field50_0x1a50 == (NAN(fVar1) || NAN(g_GameManager.field50_0x1a50))) {
    fVar1 = (this->position).y;
    if (g_GameManager.field50_0x1a50 + g_GameManager.field52_0x1a58 < fVar1 !=
        (NAN(g_GameManager.field50_0x1a50 + g_GameManager.field52_0x1a58) || NAN(fVar1))) {
      (this->position).y = g_GameManager.field50_0x1a50 + g_GameManager.field52_0x1a58;
    }
  }
  else {
    (this->position).y = g_GameManager.field50_0x1a50;
  }
  fVar1 = (this->position).z;
  fVar2 = (this->field8_0x488).z;
  fVar3 = (this->position).y;
  fVar4 = (this->field8_0x488).y;
  (this->field4_0x458).x = (this->position).x - (this->field8_0x488).x;
  (this->field4_0x458).y = fVar3 - fVar4;
  (this->field4_0x458).z = fVar1 - fVar2;
  fVar1 = (this->position).z;
  fVar2 = (this->field8_0x488).z;
  fVar3 = (this->position).y;
  fVar4 = (this->field8_0x488).y;
  (this->field5_0x464).x = (this->position).x + (this->field8_0x488).x;
  (this->field5_0x464).y = fVar3 + fVar4;
  (this->field5_0x464).z = fVar1 + fVar2;
  fVar1 = (this->position).z;
  fVar2 = (this->field9_0x494).z;
  fVar3 = (this->position).y;
  fVar4 = (this->field9_0x494).y;
  (this->field6_0x470).x = (this->position).x - (this->field9_0x494).x;
  (this->field6_0x470).y = fVar3 - fVar4;
  (this->field6_0x470).z = fVar1 - fVar2;
  fVar1 = (this->position).z;
  fVar2 = (this->field9_0x494).z;
  fVar3 = (this->position).y;
  fVar4 = (this->field9_0x494).y;
  (this->field7_0x47c).x = (this->position).x + (this->field9_0x494).x;
  (this->field7_0x47c).y = fVar3 + fVar4;
  (this->field7_0x47c).z = fVar1 + fVar2;
  this->field10_0x4a0[0].x = (this->position).x;
  this->field10_0x4a0[0].y = (this->position).y;
  this->field10_0x4a0[0].z = (this->position).z;
  this->field10_0x4a0[1].x = (this->position).x;
  this->field10_0x4a0[1].y = (this->position).y;
  this->field10_0x4a0[1].z = (this->position).z;
  local_14 = 0.0;
  local_18 = 0.0;
  if (g_GameManager.current_power < 8) {
    this->field23_0x9e2 = 0;
  }
  else if (this->field23_0x9e2 == 0) {
    this->field23_0x9e2 = 1;
  }
  switch(this->field23_0x9e2) {
  case 0:
    (this->field26_0x9e8).current = 0;
    (this->field26_0x9e8).subFrame = 0.0;
    (this->field26_0x9e8).previous = -999;
    break;
  case 1:
    local_18 = 24.0;
    (this->field26_0x9e8).current = 0;
    (this->field26_0x9e8).subFrame = 0.0;
    (this->field26_0x9e8).previous = -999;
    if (this->field24_0x9e3 == 0) break;
    this->field23_0x9e2 = 2;
  case 2:
    while( true ) {
      (this->field26_0x9e8).previous = (this->field26_0x9e8).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(this->field26_0x9e8).current,&(this->field26_0x9e8).subFrame);
      fVar1 = ((float)(this->field26_0x9e8).current + (this->field26_0x9e8).subFrame) / 8.0;
      local_14 = (1.0 - fVar1) * 32.0 + -32.0;
      local_18 = fVar1 * fVar1 * -16.0 + 24.0;
      if (7 < (this->field26_0x9e8).current) {
        this->field23_0x9e2 = 3;
      }
      if (this->field24_0x9e3 != 0) break;
      this->field23_0x9e2 = 4;
      (this->field26_0x9e8).current = 8 - (this->field26_0x9e8).current;
      (this->field26_0x9e8).subFrame = 0.0;
      (this->field26_0x9e8).previous = -999;
switchD_004281aa_caseD_4:
      (this->field26_0x9e8).previous = (this->field26_0x9e8).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(this->field26_0x9e8).current,&(this->field26_0x9e8).subFrame);
      fVar1 = ((float)(this->field26_0x9e8).current + (this->field26_0x9e8).subFrame) / 8.0;
      local_14 = fVar1 * 32.0 + -32.0;
      local_18 = (1.0 - fVar1 * fVar1) * -16.0 + 24.0;
      if (7 < (this->field26_0x9e8).current) {
        this->field23_0x9e2 = 1;
      }
      if (this->field24_0x9e3 == 0) break;
      this->field23_0x9e2 = 2;
      (this->field26_0x9e8).current = 8 - (this->field26_0x9e8).current;
      (this->field26_0x9e8).subFrame = 0.0;
      (this->field26_0x9e8).previous = -999;
    }
    break;
  case 3:
    local_18 = 8.0;
    local_14 = -32.0;
    (this->field26_0x9e8).current = 0;
    (this->field26_0x9e8).subFrame = 0.0;
    (this->field26_0x9e8).previous = -999;
    if (this->field24_0x9e3 == 0) {
      this->field23_0x9e2 = 4;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case 4:
    goto switchD_004281aa_caseD_4;
  }
  this->field10_0x4a0[0].x = this->field10_0x4a0[0].x - local_18;
  this->field10_0x4a0[1].x = local_18 + this->field10_0x4a0[1].x;
  this->field10_0x4a0[0].y = local_14 + this->field10_0x4a0[0].y;
  this->field10_0x4a0[1].y = local_14 + this->field10_0x4a0[1].y;
  if (((g_CurFrameInput & 1) != 0) && (BVar7 = Gui::HasCurrentMsgIdx(&g_Gui), BVar7 == 0)) {
    FUN_00428630(this);
  }
  this->field31_0xa18 = g_CurFrameInput;
  return 0;
}

