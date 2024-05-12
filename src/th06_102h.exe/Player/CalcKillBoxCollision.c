
undefined4 __thiscall Player::CalcKillBoxCollision(Player *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  PlayerRect *local_30;
  int local_14;
  
  local_30 = this->unk_8b8;
  fVar3 = *param_1 - *param_2 / 2.0;
  fVar4 = param_1[1] - param_2[1] / 2.0;
  fVar2 = *param_2 / 2.0 + *param_1;
  fVar5 = param_2[1] / 2.0 + param_1[1];
  local_14 = 0;
  do {
    if (0xf < local_14) {
      if ((((fVar2 < (this->hitboxTopLeft).x) || (fVar5 < (this->hitboxTopLeft).y)) ||
          (fVar2 = (this->hitboxBottomRight).x, fVar2 < fVar3 != (NAN(fVar2) || NAN(fVar3)))) ||
         (fVar3 = (this->hitboxBottomRight).y, fVar3 < fVar4 != (NAN(fVar3) || NAN(fVar4)))) {
        uVar7 = 0;
      }
      else if (this->playerState == PLAYER_STATE_ALIVE) {
        Die(this);
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
      }
      return uVar7;
    }
    fVar1 = (local_30->size1).x;
    if (NAN(fVar1) == (fVar1 == 0.0)) {
      fVar1 = (local_30->size1).x / 2.0 + (local_30->position1).x;
      fVar6 = (local_30->size1).y / 2.0 + (local_30->position1).y;
      if ((((local_30->position1).x - (local_30->size1).x / 2.0 <= fVar2) &&
          (fVar1 < fVar3 == (NAN(fVar1) || NAN(fVar3)))) &&
         (((local_30->position1).y - (local_30->size1).y / 2.0 <= fVar5 &&
          (fVar6 < fVar4 == (NAN(fVar6) || NAN(fVar4)))))) {
        return 2;
      }
    }
    local_14 = local_14 + 1;
    local_30 = local_30 + 1;
  } while( true );
}

