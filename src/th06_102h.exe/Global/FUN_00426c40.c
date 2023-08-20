
undefined4 FUN_00426c40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int in_ECX;
  float *local_30;
  int local_14;
  
  local_30 = (float *)(in_ECX + 0x8b8);
  fVar1 = *param_1 - *param_2 / 2.0;
  fVar2 = param_1[1] - param_2[1] / 2.0;
  fVar3 = *param_2 / 2.0 + *param_1;
  fVar4 = param_2[1] / 2.0 + param_1[1];
  local_14 = 0;
  do {
    if (0xf < local_14) {
      if ((((fVar3 < *(float *)(in_ECX + 0x458)) || (fVar4 < *(float *)(in_ECX + 0x45c))) ||
          (*(float *)(in_ECX + 0x464) < fVar1 != (NAN(*(float *)(in_ECX + 0x464)) || NAN(fVar1))))
         || (*(float *)(in_ECX + 0x468) < fVar2 != (NAN(*(float *)(in_ECX + 0x468)) || NAN(fVar2))))
      {
        uVar7 = 0;
      }
      else if (*(char *)(in_ECX + 0x9e0) == '\0') {
        FUN_00427770();
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
      }
      return uVar7;
    }
    if (NAN(local_30[2]) == (local_30[2] == 0.0)) {
      fVar5 = local_30[2] / 2.0 + *local_30;
      fVar6 = local_30[3] / 2.0 + local_30[1];
      if (((*local_30 - local_30[2] / 2.0 <= fVar3) && (fVar5 < fVar1 == (NAN(fVar5) || NAN(fVar1)))
          ) && ((local_30[1] - local_30[3] / 2.0 <= fVar4 &&
                (fVar6 < fVar2 == (NAN(fVar6) || NAN(fVar2)))))) {
        return 2;
      }
    }
    local_14 = local_14 + 1;
    local_30 = local_30 + 4;
  } while( true );
}

