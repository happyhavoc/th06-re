
void __thiscall Enemy::FUN_00412240(Enemy *this)

{
  float fVar1;
  float fVar2;
  
  if ((this->flags3 & 1) != 0) {
    fVar1 = (this->position).x;
    fVar2 = (this->lower_move_limit).x;
    if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
      if ((this->upper_move_limit).x < (this->position).x) {
        (this->position).x = (this->upper_move_limit).x;
      }
    }
    else {
      (this->position).x = (this->lower_move_limit).x;
    }
    fVar1 = (this->position).y;
    fVar2 = (this->lower_move_limit).y;
    if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
      if ((this->upper_move_limit).y < (this->position).y) {
        (this->position).y = (this->upper_move_limit).y;
      }
    }
    else {
      (this->position).y = (this->lower_move_limit).y;
    }
  }
  return;
}

