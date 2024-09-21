
ZunResult __thiscall th06::Player::HandlePlayerInputs(Player *this)

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
  if ((horizontalSpeed < 0.0 == NAN(horizontalSpeed)) || (this->previousHorizontalSpeed < 0.0)) {
    if ((NAN(horizontalSpeed) != (horizontalSpeed == 0.0)) &&
       (this->previousHorizontalSpeed < 0.0 != NAN(this->previousHorizontalSpeed))) {
      (this->playerSprite).anmFileIndex = 0x402;
      AnmManager::SetAndExecuteScript(pAVar5,&this->playerSprite,pAVar5->scripts[0x402]);
    }
  }
  else {
    (this->playerSprite).anmFileIndex = 0x401;
    AnmManager::SetAndExecuteScript(pAVar5,&this->playerSprite,pAVar5->scripts[0x401]);
  }
  pAVar5 = g_AnmManager;
  if ((horizontalSpeed <= 0.0) ||
     (this->previousHorizontalSpeed < 0.0 == (this->previousHorizontalSpeed == 0.0))) {
    if ((NAN(horizontalSpeed) != (horizontalSpeed == 0.0)) && (0.0 < this->previousHorizontalSpeed))
    {
      (this->playerSprite).anmFileIndex = 0x404;
      AnmManager::SetAndExecuteScript(pAVar5,&this->playerSprite,pAVar5->scripts[0x404]);
    }
  }
  else {
    (this->playerSprite).anmFileIndex = 0x403;
    AnmManager::SetAndExecuteScript(pAVar5,&this->playerSprite,pAVar5->scripts[0x403]);
  }
  this->previousHorizontalSpeed = horizontalSpeed;
  this->previousVerticalSpeed = verticalSpeed;
  (this->positionCenter).x =
       horizontalSpeed * this->horizontalMovementSpeedMultiplierDuringBomb *
       g_Supervisor.effectiveFramerateMultiplier + (this->positionCenter).x;
  pfVar6 = &(this->positionCenter).y;
  *pfVar6 = verticalSpeed * this->verticalMovementSpeedMultiplierDuringBomb *
            g_Supervisor.effectiveFramerateMultiplier + *pfVar6;
  fVar1 = (this->positionCenter).x;
  if (fVar1 < g_GameManager.playerMovementAreaTopLeftPos.x ==
      (NAN(fVar1) || NAN(g_GameManager.playerMovementAreaTopLeftPos.x))) {
    fVar1 = (this->positionCenter).x;
    if (g_GameManager.playerMovementAreaTopLeftPos.x + g_GameManager.playerMovementAreaSize.x <
        fVar1 != (NAN(g_GameManager.playerMovementAreaTopLeftPos.x +
                      g_GameManager.playerMovementAreaSize.x) || NAN(fVar1))) {
      (this->positionCenter).x =
           g_GameManager.playerMovementAreaTopLeftPos.x + g_GameManager.playerMovementAreaSize.x;
    }
  }
  else {
    (this->positionCenter).x = g_GameManager.playerMovementAreaTopLeftPos.x;
  }
  fVar1 = (this->positionCenter).y;
  if (fVar1 < g_GameManager.playerMovementAreaTopLeftPos.y ==
      (NAN(fVar1) || NAN(g_GameManager.playerMovementAreaTopLeftPos.y))) {
    fVar1 = (this->positionCenter).y;
    if (g_GameManager.playerMovementAreaTopLeftPos.y + g_GameManager.playerMovementAreaSize.y <
        fVar1 != (NAN(g_GameManager.playerMovementAreaTopLeftPos.y +
                      g_GameManager.playerMovementAreaSize.y) || NAN(fVar1))) {
      (this->positionCenter).y =
           g_GameManager.playerMovementAreaTopLeftPos.y + g_GameManager.playerMovementAreaSize.y;
    }
  }
  else {
    (this->positionCenter).y = g_GameManager.playerMovementAreaTopLeftPos.y;
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
  this->orbsPosition[0].x = (this->positionCenter).x;
  this->orbsPosition[0].y = (this->positionCenter).y;
  this->orbsPosition[0].z = (this->positionCenter).z;
  this->orbsPosition[1].x = (this->positionCenter).x;
  this->orbsPosition[1].y = (this->positionCenter).y;
  this->orbsPosition[1].z = (this->positionCenter).z;
  local_14 = 0.0;
  local_18 = 0.0;
  if (g_GameManager.current_power < 8) {
    this->orbState = ORB_HIDDEN;
  }
  else if (this->orbState == ORB_HIDDEN) {
    this->orbState = ORB_UNFOCUSED;
  }
  switch(this->orbState) {
  case ORB_HIDDEN:
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    break;
  case ORB_UNFOCUSED:
    local_18 = 24.0;
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    if (this->isFocus == 0) break;
    this->orbState = ORB_FOCUSING;
  case ORB_FOCUSING:
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
        this->orbState = ORB_FOCUSED;
      }
      if (this->isFocus != 0) break;
      this->orbState = ORB_UNFOCUSING;
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
        this->orbState = ORB_UNFOCUSED;
      }
      if (this->isFocus == 0) break;
      this->orbState = ORB_FOCUSING;
      (this->focusMovementTimer).current = 8 - (this->focusMovementTimer).current;
      (this->focusMovementTimer).subFrame = 0.0;
      (this->focusMovementTimer).previous = -999;
    }
    break;
  case ORB_FOCUSED:
    local_18 = 8.0;
    local_14 = -32.0;
    (this->focusMovementTimer).current = 0;
    (this->focusMovementTimer).subFrame = 0.0;
    (this->focusMovementTimer).previous = -999;
    if (this->isFocus == 0) {
      this->orbState = ORB_UNFOCUSING;
      goto switchD_004281aa_caseD_4;
    }
    break;
  case ORB_UNFOCUSING:
    goto switchD_004281aa_caseD_4;
  }
  this->orbsPosition[0].x = this->orbsPosition[0].x - local_18;
  this->orbsPosition[1].x = local_18 + this->orbsPosition[1].x;
  this->orbsPosition[0].y = local_14 + this->orbsPosition[0].y;
  this->orbsPosition[1].y = local_14 + this->orbsPosition[1].y;
  if (((g_CurFrameInput & KEY_SHOOT) != 0) && (BVar7 = Gui::HasCurrentMsgIdx(&g_Gui), BVar7 == 0)) {
    StartFireBulletTimer(this);
  }
  this->previousFrameInput = g_CurFrameInput;
  return ZUN_SUCCESS;
}

