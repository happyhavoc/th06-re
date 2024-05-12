
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
  float horizontalSpeed;
  float verticalSpeed;
  
  horizontalSpeed = 0.0;
  verticalSpeed = 0.0;
  this->playerDirection = MOVEMENT_NONE;
  if ((g_CurFrameInput & KEY_UP) == 0) {
    if ((g_CurFrameInput & KEY_DOWN) == 0) {
      if ((g_CurFrameInput & KEY_LEFT) != 0) {
        this->playerDirection = MOVEMENT_LEFT;
      }
      if ((g_CurFrameInput & KEY_RIGHT) != 0) {
        this->playerDirection = MOVEMENT_RIGHT;
      }
    }
    else {
      this->playerDirection = MOVEMENT_DOWN;
      if ((g_CurFrameInput & KEY_LEFT) != 0) {
        this->playerDirection = MOVEMENT_DOWN_LEFT;
      }
      if ((g_CurFrameInput & KEY_RIGHT) != 0) {
        this->playerDirection = MOVEMENT_DOWN_RIGHT;
      }
    }
  }
  else {
    this->playerDirection = MOVEMENT_UP;
    if ((g_CurFrameInput & KEY_LEFT) != 0) {
      this->playerDirection = MOVEMENT_UP_LEFT;
    }
    if ((g_CurFrameInput & KEY_RIGHT) != 0) {
      this->playerDirection = MOVEMENT_UP_RIGHT;
    }
  }
  if ((g_CurFrameInput & KEY_FOCUS) == 0) {
    this->isFocus = 0;
  }
  else {
    this->isFocus = 1;
  }
  pAVar5 = g_AnmManager;
  switch(this->playerDirection) {
  case MOVEMENT_UP:
    if ((g_CurFrameInput & KEY_FOCUS) == 0) {
      verticalSpeed = (this->characterData).orthogonalMovementSpeed;
    }
    else {
      verticalSpeed = (this->characterData).orthogonalMovementSpeedFocus;
    }
    verticalSpeed = -verticalSpeed;
    break;
  case MOVEMENT_DOWN:
    if ((g_CurFrameInput & 4) == 0) {
      verticalSpeed = (this->characterData).orthogonalMovementSpeed;
    }
    else {
      verticalSpeed = (this->characterData).orthogonalMovementSpeedFocus;
    }
    break;
  case MOVEMENT_LEFT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).orthogonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).orthogonalMovementSpeedFocus;
    }
    horizontalSpeed = -horizontalSpeed;
    break;
  case MOVEMENT_RIGHT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).orthogonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).orthogonalMovementSpeedFocus;
    }
    break;
  case MOVEMENT_UP_LEFT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).diagonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).diagonalMovementSpeedFocus;
    }
    horizontalSpeed = -horizontalSpeed;
    verticalSpeed = horizontalSpeed;
    break;
  case MOVEMENT_UP_RIGHT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).diagonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).diagonalMovementSpeedFocus;
    }
    verticalSpeed = -horizontalSpeed;
    break;
  case MOVEMENT_DOWN_LEFT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).diagonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).diagonalMovementSpeedFocus;
    }
    horizontalSpeed = -horizontalSpeed;
    verticalSpeed = -horizontalSpeed;
    break;
  case MOVEMENT_DOWN_RIGHT:
    if ((g_CurFrameInput & 4) == 0) {
      horizontalSpeed = (this->characterData).diagonalMovementSpeed;
    }
    else {
      horizontalSpeed = (this->characterData).diagonalMovementSpeedFocus;
    }
    verticalSpeed = horizontalSpeed;
  }
  if ((horizontalSpeed < 0.0 == NAN(horizontalSpeed)) || (this->unk_a10 < 0.0)) {
    if ((NAN(horizontalSpeed) != (horizontalSpeed == 0.0)) &&
       (this->unk_a10 < 0.0 != NAN(this->unk_a10))) {
      (this->vm0).anmFileIndex = 0x402;
      AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x402]);
    }
  }
  else {
    (this->vm0).anmFileIndex = 0x401;
    AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x401]);
  }
  pAVar5 = g_AnmManager;
  if ((horizontalSpeed <= 0.0) || (this->unk_a10 < 0.0 == (this->unk_a10 == 0.0))) {
    if ((NAN(horizontalSpeed) != (horizontalSpeed == 0.0)) && (0.0 < this->unk_a10)) {
      (this->vm0).anmFileIndex = 0x404;
      AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x404]);
    }
  }
  else {
    (this->vm0).anmFileIndex = 0x403;
    AnmManager::SetAndExecuteScript(pAVar5,&this->vm0,pAVar5->scripts[0x403]);
  }
  this->unk_a10 = horizontalSpeed;
  this->unk_a14 = (int)verticalSpeed;
  (this->positionCenter).x =
       horizontalSpeed * this->horizontalMovementSpeedMultiplierDuringBomb *
       g_Supervisor.effectiveFramerateMultiplier + (this->positionCenter).x;
  pfVar6 = &(this->positionCenter).y;
  *pfVar6 = verticalSpeed * this->verticalMovementSpeedMultiplierDuringBomb *
            g_Supervisor.effectiveFramerateMultiplier + *pfVar6;
  fVar1 = (this->positionCenter).x;
  if (fVar1 < g_GameManager.unk_1a4c.x == (NAN(fVar1) || NAN(g_GameManager.unk_1a4c.x))) {
    fVar1 = (this->positionCenter).x;
    if (g_GameManager.unk_1a4c.x + g_GameManager.unk_1a54.x < fVar1 !=
        (NAN(g_GameManager.unk_1a4c.x + g_GameManager.unk_1a54.x) || NAN(fVar1))) {
      (this->positionCenter).x = g_GameManager.unk_1a4c.x + g_GameManager.unk_1a54.x;
    }
  }
  else {
    (this->positionCenter).x = g_GameManager.unk_1a4c.x;
  }
  fVar1 = (this->positionCenter).y;
  if (fVar1 < g_GameManager.unk_1a4c.y == (NAN(fVar1) || NAN(g_GameManager.unk_1a4c.y))) {
    fVar1 = (this->positionCenter).y;
    if (g_GameManager.unk_1a4c.y + g_GameManager.unk_1a54.y < fVar1 !=
        (NAN(g_GameManager.unk_1a4c.y + g_GameManager.unk_1a54.y) || NAN(fVar1))) {
      (this->positionCenter).y = g_GameManager.unk_1a4c.y + g_GameManager.unk_1a54.y;
    }
  }
  else {
    (this->positionCenter).y = g_GameManager.unk_1a4c.y;
  }
  fVar1 = (this->positionCenter).z;
  fVar2 = (this->hitboxSize).z;
  fVar3 = (this->positionCenter).y;
  fVar4 = (this->hitboxSize).y;
  (this->hitboxTopLeft).x = (this->positionCenter).x - (this->hitboxSize).x;
  (this->hitboxTopLeft).y = fVar3 - fVar4;
  (this->hitboxTopLeft).z = fVar1 - fVar2;
  fVar1 = (this->positionCenter).z;
  fVar2 = (this->hitboxSize).z;
  fVar3 = (this->positionCenter).y;
  fVar4 = (this->hitboxSize).y;
  (this->hitboxBottomRight).x = (this->positionCenter).x + (this->hitboxSize).x;
  (this->hitboxBottomRight).y = fVar3 + fVar4;
  (this->hitboxBottomRight).z = fVar1 + fVar2;
  fVar1 = (this->positionCenter).z;
  fVar2 = (this->grabItemSize).z;
  fVar3 = (this->positionCenter).y;
  fVar4 = (this->grabItemSize).y;
  (this->grabItemTopLeft).x = (this->positionCenter).x - (this->grabItemSize).x;
  (this->grabItemTopLeft).y = fVar3 - fVar4;
  (this->grabItemTopLeft).z = fVar1 - fVar2;
  fVar1 = (this->positionCenter).z;
  fVar2 = (this->grabItemSize).z;
  fVar3 = (this->positionCenter).y;
  fVar4 = (this->grabItemSize).y;
  (this->grabItemBottomRight).x = (this->positionCenter).x + (this->grabItemSize).x;
  (this->grabItemBottomRight).y = fVar3 + fVar4;
  (this->grabItemBottomRight).z = fVar1 + fVar2;
  this->bulletSpawnPositions[0].x = (this->positionCenter).x;
  this->bulletSpawnPositions[0].y = (this->positionCenter).y;
  this->bulletSpawnPositions[0].z = (this->positionCenter).z;
  this->bulletSpawnPositions[1].x = (this->positionCenter).x;
  this->bulletSpawnPositions[1].y = (this->positionCenter).y;
  this->bulletSpawnPositions[1].z = (this->positionCenter).z;
  local_14 = 0.0;
  local_18 = 0.0;
  if (g_GameManager.current_power < 8) {
    this->extraBulletSpawnState = EXTRA_BULLET_NONE;
  }
  else if (this->extraBulletSpawnState == EXTRA_BULLET_NONE) {
    this->extraBulletSpawnState = EXTRA_BULLET_UNFOCUSED;
  }
  switch(this->extraBulletSpawnState) {
  case EXTRA_BULLET_NONE:
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    break;
  case EXTRA_BULLET_UNFOCUSED:
    local_18 = 24.0;
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    if (this->isFocus == 0) break;
    this->extraBulletSpawnState = EXTRA_BULLET_FOCUSING;
  case EXTRA_BULLET_FOCUSING:
    while( true ) {
      (this->focusMovementTimer).previous = (this->focusMovementTimer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(this->focusMovementTimer).current,
                 &(this->focusMovementTimer).subFrame);
      fVar1 = ((float)(this->focusMovementTimer).current + (this->focusMovementTimer).subFrame) /
              8.0;
      local_14 = (1.0 - fVar1) * 32.0 + -32.0;
      local_18 = fVar1 * fVar1 * -16.0 + 24.0;
      if (7 < (this->focusMovementTimer).current) {
        this->extraBulletSpawnState = EXTRA_BULLET_FULLY_FOCUSED;
      }
      if (this->isFocus != 0) break;
      this->extraBulletSpawnState = EXTRA_BULLET_UNFOCUSING;
      (this->focusMovementTimer).current = 8 - (this->focusMovementTimer).current;
      (this->focusMovementTimer).subFrame = 0.0;
      (this->focusMovementTimer).previous = -999;
switchD_004281aa_caseD_4:
      (this->focusMovementTimer).previous = (this->focusMovementTimer).current;
      Supervisor::TickTimer
                (&g_Supervisor,&(this->focusMovementTimer).current,
                 &(this->focusMovementTimer).subFrame);
      fVar1 = ((float)(this->focusMovementTimer).current + (this->focusMovementTimer).subFrame) /
              8.0;
      local_14 = fVar1 * 32.0 + -32.0;
      local_18 = (1.0 - fVar1 * fVar1) * -16.0 + 24.0;
      if (7 < (this->focusMovementTimer).current) {
        this->extraBulletSpawnState = EXTRA_BULLET_UNFOCUSED;
      }
      if (this->isFocus == 0) break;
      this->extraBulletSpawnState = EXTRA_BULLET_FOCUSING;
      (this->focusMovementTimer).current = 8 - (this->focusMovementTimer).current;
      (this->focusMovementTimer).subFrame = 0.0;
      (this->focusMovementTimer).previous = -999;
    }
    break;
  case EXTRA_BULLET_FULLY_FOCUSED:
    local_18 = 8.0;
    local_14 = -32.0;
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    if (this->isFocus == 0) {
      this->extraBulletSpawnState = EXTRA_BULLET_UNFOCUSING;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case EXTRA_BULLET_UNFOCUSING:
    goto switchD_004281aa_caseD_4;
  }
  this->bulletSpawnPositions[0].x = this->bulletSpawnPositions[0].x - local_18;
  this->bulletSpawnPositions[1].x = local_18 + this->bulletSpawnPositions[1].x;
  this->bulletSpawnPositions[0].y = local_14 + this->bulletSpawnPositions[0].y;
  this->bulletSpawnPositions[1].y = local_14 + this->bulletSpawnPositions[1].y;
  if (((g_CurFrameInput & 1) != 0) && (BVar7 = Gui::HasCurrentMsgIdx(&g_Gui), BVar7 == 0)) {
    InitInnerTimer(this);
  }
  this->unk_a18 = g_CurFrameInput;
  return 0;
}

