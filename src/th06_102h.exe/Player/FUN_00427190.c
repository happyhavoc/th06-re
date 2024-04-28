
undefined4 __thiscall
Player::FUN_00427190
          (Player *this,D3DXVECTOR3 *param_1,D3DXVECTOR3 *param_2,D3DXVECTOR3 *rotation,
          float param_4,int param_5)

{
  undefined4 uVar5;
  D3DXVECTOR3 local_28;
  D3DXVECTOR3 local_1c;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  local_28.z = (this->position).z - rotation->z;
  local_28.y = (this->position).y - rotation->y;
  local_28.x = (this->position).x - rotation->x;
  FUN_0041e8d0(&local_1c.x,&local_28.x,param_4);
  fVar1 = local_1c.y + rotation->y;
  fVar2 = local_1c.x + rotation->x;
  fVar3 = fVar1 - (this->field8_0x488).y;
  fVar4 = fVar2 - (this->field8_0x488).x;
  fVar1 = fVar1 + (this->field8_0x488).y;
  fVar2 = fVar2 + (this->field8_0x488).x;
  local_28.z = param_1->z - param_2->z * 0.5;
  local_28.y = param_1->y - param_2->y * 0.5;
  local_28.x = param_1->x - param_2->x * 0.5;
  local_1c.z = param_2->z * 0.5 + param_1->z;
  local_1c.y = param_2->y * 0.5 + param_1->y;
  local_1c.x = param_2->x * 0.5 + param_1->x;
  if ((((local_1c.x < fVar4) || (fVar2 < local_28.x != (NAN(fVar2) || NAN(local_28.x)))) ||
      (local_1c.y < fVar3)) || (fVar1 < local_28.y != (NAN(fVar1) || NAN(local_28.y)))) {
    if (param_5 == 0) {
      uVar5 = 0;
    }
    else {
      local_28.x = local_28.x - 48.0;
      local_28.y = local_28.y - 48.0;
      local_1c.x = local_1c.x + 48.0;
      local_1c.y = local_1c.y + 48.0;
      if (((local_1c.x < fVar4) || (fVar2 < local_28.x != (NAN(fVar2) || NAN(local_28.x)))) ||
         ((local_1c.y < fVar3 || (fVar1 < local_28.y != (NAN(fVar1) || NAN(local_28.y)))))) {
        uVar5 = 0;
      }
      else if ((this->field21_0x9e0 == 2) || (this->field21_0x9e0 == 1)) {
        uVar5 = 0;
      }
      else {
        Graze(this,&this->position);
        uVar5 = 2;
      }
    }
  }
  else if (this->field21_0x9e0 == 0) {
    Die(this);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

