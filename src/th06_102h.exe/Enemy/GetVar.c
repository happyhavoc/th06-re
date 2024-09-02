
int * Enemy::GetVar(Enemy *enemy,EclVarId *eclGvarId,EclValueType *valueType)

{
  int *pfVar1;
  D3DXVECTOR3 local_10;
  
  if (valueType != (EclValueType *)0x0) {
    *valueType = ECL_VALUE_TYPE_UNDEFINED;
  }
  pfVar1 = eclGvarId;
  switch(*eclGvarId) {
  case ECL_VAR_PLAYER_SHOT:
    g_PlayerShot = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &g_PlayerShot;
    break;
  case ECL_VAR_SELF_LIFE:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &enemy->life;
    break;
  case ECL_VAR_PLAYER_DISTANCE:
    local_10.z = g_Player.positionCenter.z - (enemy->position).z;
    local_10.y = g_Player.positionCenter.y - (enemy->position).y;
    local_10.x = g_Player.positionCenter.x - (enemy->position).x;
    g_PlayerDistance = D3DXVec3Length(&local_10);
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_PlayerDistance;
    break;
  case ECL_VAR_SELF_TIME:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->boss_timer).current;
    break;
  case ECL_VAR_PLAYER_ANGLE:
    g_PlayerAngle = Player::AngleToPlayer(&g_Player,&enemy->position);
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_PlayerAngle;
    break;
  case ECL_VAR_PLAYER_Z:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter.z;
    break;
  case ECL_VAR_PLAYER_Y:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter.y;
    break;
  case ECL_VAR_PLAYER_X:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter;
    break;
  case ECL_VAR_SELF_Z:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->position).z;
    break;
  case ECL_VAR_SELF_Y:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->position).y;
    break;
  case ECL_VAR_SELF_X:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&enemy->position;
    break;
  case ECL_VAR_RANK:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = &g_GameManager.rank;
    break;
  case ECL_VAR_DIFFICULTY:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_GameManager.difficulty;
    break;
  case ECL_VAR_IC3:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var7;
    break;
  case ECL_VAR_IC2:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var6;
    break;
  case ECL_VAR_IC1:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var5;
    break;
  case ECL_VAR_IC0:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var4;
    break;
  case ECL_VAR_F3:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->current_context).float3;
    break;
  case ECL_VAR_F2:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->current_context).float2;
    break;
  case ECL_VAR_F1:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->current_context).float1;
    break;
  case ECL_VAR_F0:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(enemy->current_context).float0;
    break;
  case ECL_VAR_I3:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var3;
    break;
  case ECL_VAR_I2:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var2;
    break;
  case ECL_VAR_I1:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var1;
    break;
  case ECL_VAR_I0:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(enemy->current_context).var0;
  }
  return pfVar1;
}

