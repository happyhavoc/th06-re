
i32 __thiscall
th06::Player::CalcItemBoxCollision(Player *this,D3DXVECTOR3 *center,D3DXVECTOR3 *size)

{
  float fVar1;
  float fVar2;
  float fVar3;
  i32 iVar4;
  
  if ((this->playerState == PLAYER_STATE_ALIVE) || (this->playerState == PLAYER_STATE_INVULNERABLE))
  {
    fVar3 = center->y - size->y * 0.5;
    fVar2 = center->x - size->x * 0.5;
    if ((size->x * 0.5 + center->x < (this->grabItemTopLeft).x) ||
       (((fVar1 = (this->grabItemBottomRight).x, fVar1 < fVar2 != (NAN(fVar1) || NAN(fVar2)) ||
         (size->y * 0.5 + center->y < (this->grabItemTopLeft).y)) ||
        (fVar2 = (this->grabItemBottomRight).y, fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))))) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

