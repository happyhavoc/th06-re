
float __thiscall Player::FUN_00428700(Player *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float10 extraout_ST0;
  
  fVar1 = (this->position).x - *param_1;
  fVar2 = (this->position).y - param_1[1];
  if ((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar1) == (fVar1 == 0.0))) {
    FUN_0045be40(SUB81((double)fVar2,0),(char)((ulonglong)(double)fVar2 >> 0x20));
    fVar1 = (float)extraout_ST0;
  }
  else {
    fVar1 = 1.570796;
  }
  return fVar1;
}

