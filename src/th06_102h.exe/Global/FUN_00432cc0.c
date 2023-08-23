
undefined4 FUN_00432cc0(void *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float10 fVar9;
  
  if (NAN(*(float *)((int)param_1 + 8)) == (*(float *)((int)param_1 + 8) == 0.0)) {
    if ((*(uint *)((int)param_1 + 0x80) & 1) == 0) {
      uVar8 = 0xffffffff;
    }
    else if ((*(uint *)((int)param_1 + 0x80) >> 1 & 1) == 0) {
      uVar8 = 0xffffffff;
    }
    else if (*(int *)((int)param_1 + 0x7c) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      fVar3 = (float10)fcos((float10)*(float *)((int)param_1 + 8));
      fVar9 = (float10)fsin((float10)*(float *)((int)param_1 + 8));
      fVar1 = (float)fVar3;
      fVar2 = (float)fVar9;
      fVar4 = ROUND(*(float *)((int)param_1 + 0x90));
      fVar5 = ROUND(*(float *)((int)param_1 + 0x94));
      fVar6 = ROUND((*(float *)(*(int *)((int)param_1 + 0xc0) + 0x30) *
                    *(float *)((int)param_1 + 0x1c)) / 2.0);
      fVar7 = ROUND((*(float *)(*(int *)((int)param_1 + 0xc0) + 0x2c) *
                    *(float *)((int)param_1 + 0x18)) / 2.0);
      FUN_00432c80(&FLOAT_006d4600,-fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&FLOAT_006d4618,fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&FLOAT_006d4630,-fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&FLOAT_006d4648,fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      DAT_006d4608 = *(undefined4 *)((int)param_1 + 0x98);
      if ((*(uint *)((int)param_1 + 0x80) >> 8 & 1) != 0) {
        FLOAT_006d4600 = FLOAT_006d4600 + fVar6;
        FLOAT_006d4618 = FLOAT_006d4618 + fVar6;
        FLOAT_006d4630 = FLOAT_006d4630 + fVar6;
        FLOAT_006d4648 = FLOAT_006d4648 + fVar6;
      }
      if ((*(uint *)((int)param_1 + 0x80) >> 8 & 2) != 0) {
        FLOAT_006d4604 = FLOAT_006d4604 + fVar7;
        FLOAT_006d461c = FLOAT_006d461c + fVar7;
        FLOAT_006d4634 = FLOAT_006d4634 + fVar7;
        FLOAT_006d464c = FLOAT_006d464c + fVar7;
      }
      DAT_006d4620 = DAT_006d4608;
      DAT_006d4638 = DAT_006d4608;
      DAT_006d4650 = DAT_006d4608;
      uVar8 = FUN_00432730(param_1,0);
    }
  }
  else {
    uVar8 = FUN_00432ad0(param_1);
  }
  return uVar8;
}

