
i32 __thiscall
th06::Player::CalcKillBoxCollision(Player *this,D3DXVECTOR3 *bulletCenter,D3DXVECTOR3 *bulletSize)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  i32 iVar7;
  Player *this_backup;
  BombProjectile *local_30;
  int local_14;
  
  local_30 = this->bomb_projectiles;
  fVar3 = bulletCenter->x - bulletSize->x / 2.0;
  fVar4 = bulletCenter->y - bulletSize->y / 2.0;
  fVar2 = bulletSize->x / 2.0 + bulletCenter->x;
  fVar5 = bulletSize->y / 2.0 + bulletCenter->y;
  local_14 = 0;
  do {
    if (0xf < local_14) {
      if ((((fVar2 < (this->hitboxTopLeft).x) || (fVar5 < (this->hitboxTopLeft).y)) ||
          (fVar2 = (this->hitboxBottomRight).x, fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) ||
         (fVar3 = (this->hitboxBottomRight).y, fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4)))) {
        iVar7 = 0;
      }
      else if (this->playerState == PLAYER_STATE_ALIVE) {
        Die(this);
        iVar7 = 1;
      }
      else {
        iVar7 = 1;
      }
      return iVar7;
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

