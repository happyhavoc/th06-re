
float __thiscall th06::Player::AngleFromPlayer(Player *this,D3DXVECTOR3 *bulletPos)

{
  double dVar1;
  float relX;
  float relY;
  
  relX = bulletPos->x - (this->positionCenter).x;
  relY = bulletPos->y - (this->positionCenter).y;
  if ((NAN(relY) == (relY == 0.0)) || (NAN(relX) == (relX == 0.0))) {
    dVar1 = atan2((double)relY,(double)relX);
    relX = (float)dVar1;
  }
  else {
    relX = 1.570796;
  }
  return relX;
}

