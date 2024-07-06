
int * Enemy::GetVar(Enemy *param_1,int *eclGvarId,EclValueType *valueType)

{
  int *pfVar1;
  D3DXVECTOR3 local_10;
  
  if (valueType != (EclValueType *)0x0) {
    *valueType = ECL_VALUE_TYPE_UNDEFINED;
  }
  pfVar1 = eclGvarId;
  switch(*eclGvarId) {
  case -0x2729:
    PLAYER_SHOT = (uint)g_GameManager.shottype + (uint)g_GameManager.character * 2;
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &PLAYER_SHOT;
    break;
  case -0x2728:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &param_1->life;
    break;
  case -0x2727:
    local_10.z = g_Player.positionCenter.z - (param_1->position).z;
    local_10.y = g_Player.positionCenter.y - (param_1->position).y;
    local_10.x = g_Player.positionCenter.x - (param_1->position).x;
    PLAYER_DISTANCE = FUN_0040b890(&local_10);
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&PLAYER_DISTANCE;
    break;
  case -0x2726:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->boss_timer).current;
    break;
  case -0x2725:
    PLAYER_ANGLE = Player::AngleToPlayer(&g_Player,&param_1->position);
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&PLAYER_ANGLE;
    break;
  case -0x2724:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter.z;
    break;
  case -0x2723:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter.y;
    break;
  case -0x2722:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_Player.positionCenter;
    break;
  case -0x2721:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->position).z;
    break;
  case -0x2720:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->position).y;
    break;
  case -0x271f:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&param_1->position;
    break;
  case -0x271e:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = &g_GameManager.rank;
    break;
  case -0x271d:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_READONLY;
    }
    pfVar1 = (int *)&g_GameManager.difficulty;
    break;
  case -0x271c:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var7;
    break;
  case -0x271b:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var6;
    break;
  case -0x271a:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var5;
    break;
  case -0x2719:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var4;
    break;
  case -0x2718:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->current_context).float3;
    break;
  case -0x2717:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->current_context).float2;
    break;
  case -0x2716:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->current_context).float1;
    break;
  case -0x2715:
    if (valueType != (EclValueType *)0x0) {
      *valueType = EVL_VALUE_TYPE_FLOAT;
    }
    pfVar1 = (int *)&(param_1->current_context).float0;
    break;
  case -0x2714:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var3;
    break;
  case -0x2713:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var2;
    break;
  case -0x2712:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var1;
    break;
  case -0x2711:
    if (valueType != (EclValueType *)0x0) {
      *valueType = ECL_VALUE_TYPE_INT;
    }
    pfVar1 = &(param_1->current_context).var0;
  }
  return pfVar1;
}

