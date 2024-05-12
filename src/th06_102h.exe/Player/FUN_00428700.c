
float __thiscall Player::FUN_00428700(Player *this,D3DXVECTOR3 *pos)

{
  float relX;
  float relY;
  
  relX = (this->positionCenter).x - pos->x;
  relY = (this->positionCenter).y - pos->y;
  if ((NAN(relY) == (relY == 0.0)) || (NAN(relX) == (relX == 0.0))) {
    relX = FUN_0045be40(SUB84((double)relY,0),(int)((ulonglong)(double)relY >> 0x20),
                        SUB84((double)relX,0),(int)((ulonglong)(double)relX >> 0x20));
  }
  else {
    relX = 1.570796;
  }
  return relX;
}

