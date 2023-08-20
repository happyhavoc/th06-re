
undefined4 FUN_00427190(float *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_20 = *(float *)(in_ECX + 0x448) - param_3[2];
  local_24 = *(float *)(in_ECX + 0x444) - param_3[1];
  local_28 = *(float *)(in_ECX + 0x440) - *param_3;
  FUN_0041e8d0(&local_1c,&local_28,param_4);
  local_8 = (param_3[2] + 0.0) - *(float *)(in_ECX + 0x490);
  local_c = (local_18 + param_3[1]) - *(float *)(in_ECX + 0x48c);
  local_10 = (local_1c + *param_3) - *(float *)(in_ECX + 0x488);
  fVar1 = local_18 + param_3[1] + *(float *)(in_ECX + 0x48c);
  fVar2 = local_1c + *param_3 + *(float *)(in_ECX + 0x488);
  local_20 = param_1[2] - param_2[2] * 0.5;
  local_24 = param_1[1] - param_2[1] * 0.5;
  local_28 = *param_1 - *param_2 * 0.5;
  local_14 = param_2[2] * 0.5 + param_1[2];
  local_18 = param_2[1] * 0.5 + param_1[1];
  local_1c = *param_2 * 0.5 + *param_1;
  if ((((local_1c < local_10) || (fVar2 < local_28 != (NAN(fVar2) || NAN(local_28)))) ||
      (local_18 < local_c)) || (fVar1 < local_24 != (NAN(fVar1) || NAN(local_24)))) {
    if (param_5 == 0) {
      uVar3 = 0;
    }
    else {
      local_28 = local_28 - 48.0;
      local_24 = local_24 - 48.0;
      local_1c = local_1c + 48.0;
      local_18 = local_18 + 48.0;
      if (((local_1c < local_10) || (fVar2 < local_28 != (NAN(fVar2) || NAN(local_28)))) ||
         ((local_18 < local_c || (fVar1 < local_24 != (NAN(fVar1) || NAN(local_24)))))) {
        uVar3 = 0;
      }
      else if ((*(char *)(in_ECX + 0x9e0) == '\x02') || (*(char *)(in_ECX + 0x9e0) == '\x01')) {
        uVar3 = 0;
      }
      else {
        FUN_00427630(in_ECX + 0x440);
        uVar3 = 2;
      }
    }
  }
  else if (*(char *)(in_ECX + 0x9e0) == '\0') {
    FUN_00427770();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

