
BOOL __thiscall Player::CheckGraze(Player *this,D3DXVECTOR3 *center,D3DXVECTOR3 *size)

{
  BOOL uVar7;
  BombProjectile *local_30;
  D3DXVECTOR3 local_2c;
  D3DXVECTOR3 local_20;
  int local_14;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (center->x - size->x / 2.0) - 20.0;
  fVar4 = (center->y - size->y / 2.0) - 20.0;
  fVar2 = size->x / 2.0 + center->x + 20.0;
  fVar5 = size->y / 2.0 + center->y + 20.0;
  local_30 = this->bomb_projectiles;
  local_14 = 0;
  do {
    if (0xf < local_14) {
      if ((this->playerState == PLAYER_STATE_DEAD) || (this->playerState == PLAYER_STATE_SPAWNING))
      {
        uVar7 = 0;
      }
      else if ((((fVar2 < (this->hitboxTopLeft).x) ||
                (fVar2 = (this->hitboxBottomRight).x, fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3))))
               || (fVar5 < (this->hitboxTopLeft).y)) ||
              (fVar3 = (this->hitboxBottomRight).y, fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4)))) {
        uVar7 = 0;
      }
      else {
        ScoreGraze(this,center);
        uVar7 = 1;
      }
      return uVar7;
    }
    fVar1 = (local_30->size).x;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar1 = (local_30->size).x / 2.0 + (local_30->pos).x;
      fVar6 = (local_30->size).y / 2.0 + (local_30->pos).y;
      if ((((local_30->pos).x - (local_30->size).x / 2.0 <= fVar2) &&
          (fVar1 < fVar3 == (NAN(fVar1) || NAN(fVar3)))) &&
         (((local_30->pos).y - (local_30->size).y / 2.0 <= fVar5 &&
          (fVar6 < fVar4 == (NAN(fVar6) || NAN(fVar4)))))) {
        return 2;
      }
    }
    local_14 = local_14 + 1;
    local_30 = local_30 + 1;
  } while( true );
}

