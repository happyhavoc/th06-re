
float __thiscall Player::FUN_00428700(Player *this,D3DXVECTOR3 *pos)

{
  double dVar1;
  float relX;
  float relY;
  
  relX = (this->positionCenter).x - pos->x;
  relY = (this->positionCenter).y - pos->y;
  if ((NAN(relY) == (relY == 0.0)) || (NAN(relX) == (relX == 0.0))) {
    dVar1 = atan2((double)relY,(double)relX);
    relX = (float)dVar1;
  }
  else {
    relX = 1.570796;
  }
  return relX;
}

