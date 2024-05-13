
void __thiscall Enemy::ClampPos(Enemy *this)

{
  float x1;
  float x2;
  
  if ((this->flags3 & 1) != 0) {
    x1 = (this->position).x;
    x2 = (this->lower_move_limit).x;
    if (x1 < x2 == (NAN(x1) || NAN(x2))) {
      if ((this->upper_move_limit).x < (this->position).x) {
        (this->position).x = (this->upper_move_limit).x;
      }
    }
    else {
      (this->position).x = (this->lower_move_limit).x;
    }
    x1 = (this->position).y;
    x2 = (this->lower_move_limit).y;
    if (x1 < x2 == (NAN(x1) || NAN(x2))) {
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

