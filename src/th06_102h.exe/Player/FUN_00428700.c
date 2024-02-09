
float __thiscall Player::FUN_00428700(Player *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (this->position).x - *param_1;
  fVar2 = (this->position).y - param_1[1];
  if ((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar1) == (fVar1 == 0.0))) {
    fVar3 = (float10)FUN_0045be40((double)fVar2,(double)fVar1);
    fVar1 = (float)fVar3;
  }
  else {
    fVar1 = 1.570796;
  }
  return fVar1;
}

