
undefined4 FUN_00432fa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x80) & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if ((*(uint *)(param_1 + 0x80) >> 1 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x7c) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar2 = (*(float *)(*(int *)(param_1 + 0xc0) + 0x30) * *(float *)(param_1 + 0x1c)) / 2.0;
    fVar3 = (*(float *)(*(int *)(param_1 + 0xc0) + 0x2c) * *(float *)(param_1 + 0x18)) / 2.0;
    if ((*(uint *)(param_1 + 0x80) >> 8 & 1) == 0) {
      FLOAT_006d4630 = *(float *)(param_1 + 0x90) - fVar2;
      fVar1 = *(float *)(param_1 + 0x90);
    }
    else {
      FLOAT_006d4630 = *(float *)(param_1 + 0x90);
      fVar1 = fVar2 + *(float *)(param_1 + 0x90);
    }
    FLOAT_006d4648 = fVar2 + fVar1;
    if ((*(uint *)(param_1 + 0x80) >> 8 & 2) == 0) {
      FLOAT_006d461c = *(float *)(param_1 + 0x94) - fVar3;
      fVar2 = *(float *)(param_1 + 0x94);
    }
    else {
      FLOAT_006d461c = *(float *)(param_1 + 0x94);
      fVar2 = fVar3 + *(float *)(param_1 + 0x94);
    }
    FLOAT_006d464c = fVar3 + fVar2;
    FLOAT_006d4600 = FLOAT_006d4630;
    FLOAT_006d4604 = FLOAT_006d461c;
    FLOAT_006d4618 = FLOAT_006d4648;
    FLOAT_006d4634 = FLOAT_006d464c;
    uVar4 = FUN_00432730(param_1,0);
  }
  return uVar4;
}

