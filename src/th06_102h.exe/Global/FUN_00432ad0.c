
undefined4 __thiscall FUN_00432ad0(VeryBigStruct *param_1_00,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_2 + 0x80) & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if ((*(uint *)(param_2 + 0x80) >> 1 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  else if (*(int *)(param_2 + 0x7c) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    fVar2 = (*(float *)(*(int *)(param_2 + 0xc0) + 0x30) * *(float *)(param_2 + 0x1c)) / 2.0;
    fVar3 = (*(float *)(*(int *)(param_2 + 0xc0) + 0x2c) * *(float *)(param_2 + 0x18)) / 2.0;
    if ((*(uint *)(param_2 + 0x80) >> 8 & 1) == 0) {
      FLOAT_006d4630 = *(float *)(param_2 + 0x90) - fVar2;
      fVar1 = *(float *)(param_2 + 0x90);
    }
    else {
      FLOAT_006d4630 = *(float *)(param_2 + 0x90);
      fVar1 = fVar2 + *(float *)(param_2 + 0x90);
    }
    FLOAT_006d4648 = fVar2 + fVar1;
    if ((*(uint *)(param_2 + 0x80) >> 8 & 2) == 0) {
      TRIANGLE_STRIP[2].y = *(float *)(param_2 + 0x94) - fVar3;
      fVar2 = *(float *)(param_2 + 0x94);
    }
    else {
      TRIANGLE_STRIP[2].y = *(float *)(param_2 + 0x94);
      fVar2 = fVar3 + *(float *)(param_2 + 0x94);
    }
    FLOAT_006d464c = fVar3 + fVar2;
    TRIANGLE_STRIP[0].x = FLOAT_006d4630;
    TRIANGLE_STRIP[0].y = TRIANGLE_STRIP[2].y;
    TRIANGLE_STRIP[2].x = FLOAT_006d4648;
    FLOAT_006d4634 = FLOAT_006d464c;
    uVar4 = FUN_00432730(param_1_00,param_2,1);
  }
  return uVar4;
}

