
ZunResult th06::Player::AddedCallback(Player *this)

{
  ZunTimer *pZVar1;
  AnmManager *pAVar2;
  ZunResult ZVar3;
  int iVar4;
  CharacterData *pCVar5;
  CharacterData *pCVar6;
  float fVar7;
  PlayerBullet *bullets;
  int bullet_idx;
  
  if (g_GameManager.character == 0) {
    if ((g_Supervisor.curState != SUPERVISOR_STATE_GAMEMANAGER_REINIT) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player00.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return ZUN_ERROR;
    }
    pAVar2 = g_AnmManager;
    (this->playerSprite).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&this->playerSprite,pAVar2->scripts[0x400]);
  }
  else if (g_GameManager.character == 1) {
    if ((g_Supervisor.curState != SUPERVISOR_STATE_GAMEMANAGER_REINIT) &&
       (ZVar3 = AnmManager::LoadAnm(g_AnmManager,5,"data/player01.anm",0x400), ZVar3 != ZUN_SUCCESS)
       ) {
      return ZUN_ERROR;
    }
    pAVar2 = g_AnmManager;
    (this->playerSprite).anmFileIndex = 0x400;
    AnmManager::SetAndExecuteScript(pAVar2,&this->playerSprite,pAVar2->scripts[0x400]);
  }
  (this->positionCenter).x = g_GameManager.arcade_region_size.x / 2.0;
  (this->positionCenter).y = g_GameManager.arcade_region_size.y - 64.0;
  (this->positionCenter).z = 0.49;
  this->orbsPosition[0].z = 0.49;
  this->orbsPosition[1].z = 0.49;
  for (bullet_idx = 0; bullet_idx < 0x20; bullet_idx = bullet_idx + 1) {
    this->bomb_region_sizes[bullet_idx].x = 0.0;
  }
  (this->hitboxSize).x = 1.25;
  (this->hitboxSize).y = 1.25;
  (this->hitboxSize).z = 5.0;
  (this->grabItemSize).x = 12.0;
  (this->grabItemSize).y = 12.0;
  (this->grabItemSize).z = 5.0;
  this->playerDirection = MOVEMENT_NONE;
  pCVar5 = g_CharData + (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
  pCVar6 = &this->characterData;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6->orthogonalMovementSpeed = pCVar5->orthogonalMovementSpeed;
    pCVar5 = (CharacterData *)&pCVar5->orthogonalMovementSpeedFocus;
    pCVar6 = (CharacterData *)&pCVar6->orthogonalMovementSpeedFocus;
  }
  fVar7 = sqrt((double *)0x0);
  (this->characterData).diagonalMovementSpeed =
       (this->characterData).orthogonalMovementSpeed / fVar7;
  fVar7 = sqrt((double *)0x0);
  (this->characterData).diagonalMovementSpeedFocus =
       (this->characterData).orthogonalMovementSpeedFocus / fVar7;
  this->fireBulletCallback = (this->characterData).fireBulletCallback;
  this->fireBulletFocusCallback = (this->characterData).fireBulletFocusCallback;
  this->playerState = PLAYER_STATE_SPAWNING;
  (this->invulnerabilityTimer).current = 0x78;
  (this->invulnerabilityTimer).subFrame = 0.0;
  (this->invulnerabilityTimer).previous = -999;
  this->orbState = ORB_HIDDEN;
  pAVar2 = g_AnmManager;
  this->orbsSprite[0].anmFileIndex = 0x480;
  AnmManager::SetAndExecuteScript(pAVar2,this->orbsSprite,pAVar2->scripts[0x480]);
  pAVar2 = g_AnmManager;
  this->orbsSprite[1].anmFileIndex = 0x481;
  AnmManager::SetAndExecuteScript(pAVar2,this->orbsSprite + 1,pAVar2->scripts[0x481]);
  bullets = this->bullets;
  for (bullet_idx = 0; bullet_idx < 0x50; bullet_idx = bullet_idx + 1) {
    bullets->bulletState = 0;
    bullets = bullets + 1;
  }
  (this->fireBulletTimer).current = -1;
  (this->fireBulletTimer).subFrame = 0.0;
  (this->fireBulletTimer).previous = -999;
  (this->bombInfo).bombCalc =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].calc;
  (this->bombInfo).draw =
       g_BombData[(uint)g_GameManager.shottype + (uint)g_GameManager.character * 2].draw;
  (this->bombInfo).isInUse = 0;
  for (bullet_idx = 0; bullet_idx < 2; bullet_idx = bullet_idx + 1) {
    pZVar1 = this->laserTimer + bullet_idx;
    pZVar1->current = 0;
    pZVar1->subFrame = 0.0;
    pZVar1->previous = -999;
  }
  this->verticalMovementSpeedMultiplierDuringBomb = 1.0;
  this->horizontalMovementSpeedMultiplierDuringBomb = 1.0;
  this->respawnTimer = 8;
  return ZUN_SUCCESS;
}

