
undefined4 __thiscall
Player::CalcBoxCollision(Player *this,D3DXVECTOR3 *center,D3DXVECTOR3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((this->playerState == PLAYER_STATE_ALIVE) || (this->playerState == PLAYER_STATE_USING_BOMB)) {
    fVar3 = center->y - param_2->y * 0.5;
    fVar2 = center->x - param_2->x * 0.5;
    if ((param_2->x * 0.5 + center->x < (this->grabItemTopLeft).x) ||
       (((fVar1 = (this->grabItemBottomRight).x, fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2)) ||
         (param_2->y * 0.5 + center->y < (this->grabItemTopLeft).y)) ||
        (fVar2 = (this->grabItemBottomRight).y, fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

