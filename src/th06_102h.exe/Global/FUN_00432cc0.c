
undefined4 FUN_00432cc0(int param_1)

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
  
  if (NAN(*(float *)(param_1 + 8)) == (*(float *)(param_1 + 8) == 0.0)) {
    if ((*(uint *)(param_1 + 0x80) & 1) == 0) {
      uVar8 = 0xffffffff;
    }
    else if ((*(uint *)(param_1 + 0x80) >> 1 & 1) == 0) {
      uVar8 = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0x7c) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      fVar3 = (float10)fcos((float10)*(float *)(param_1 + 8));
      fVar9 = (float10)fsin((float10)*(float *)(param_1 + 8));
      fVar1 = (float)fVar3;
      fVar2 = (float)fVar9;
      fVar4 = ROUND(*(float *)(param_1 + 0x90));
      fVar5 = ROUND(*(float *)(param_1 + 0x94));
      fVar6 = ROUND((*(float *)(*(int *)(param_1 + 0xc0) + 0x30) * *(float *)(param_1 + 0x1c)) / 2.0
                   );
      fVar7 = ROUND((*(float *)(*(int *)(param_1 + 0xc0) + 0x2c) * *(float *)(param_1 + 0x18)) / 2.0
                   );
      FUN_00432c80(&DAT_006d4600,-fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4618,fVar6 - 0.5,-fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4630,-fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      FUN_00432c80(&DAT_006d4648,fVar6 - 0.5,fVar7 - 0.5,fVar2,fVar1,fVar4,fVar5);
      DAT_006d4608 = *(undefined4 *)(param_1 + 0x98);
      if ((*(uint *)(param_1 + 0x80) >> 8 & 1) != 0) {
        DAT_006d4600 = DAT_006d4600 + fVar6;
        DAT_006d4618 = DAT_006d4618 + fVar6;
        DAT_006d4630 = DAT_006d4630 + fVar6;
        DAT_006d4648 = DAT_006d4648 + fVar6;
      }
      if ((*(uint *)(param_1 + 0x80) >> 8 & 2) != 0) {
        DAT_006d4604 = DAT_006d4604 + fVar7;
        DAT_006d461c = DAT_006d461c + fVar7;
        DAT_006d4634 = DAT_006d4634 + fVar7;
        DAT_006d464c = DAT_006d464c + fVar7;
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

