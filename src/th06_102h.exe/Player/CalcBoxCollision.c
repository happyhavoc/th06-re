
undefined4 Player::CalcBoxCollision(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x9e0) == '\0') || (*(char *)(in_ECX + 0x9e0) == '\x03')) {
    fVar1 = param_1[1] - param_2[1] * 0.5;
    fVar2 = *param_1 - *param_2 * 0.5;
    if ((*param_2 * 0.5 + *param_1 < *(float *)(in_ECX + 0x470)) ||
       (((*(float *)(in_ECX + 0x47c) < fVar2 != (NAN(*(float *)(in_ECX + 0x47c)) || NAN(fVar2)) ||
         (param_2[1] * 0.5 + param_1[1] < *(float *)(in_ECX + 0x474))) ||
        (*(float *)(in_ECX + 0x480) < fVar1 != (NAN(*(float *)(in_ECX + 0x480)) || NAN(fVar1)))))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

