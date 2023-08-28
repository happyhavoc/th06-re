
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bb80(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_8;
  
  if (*(int *)(param_1 + 0x9ac) < *(int *)(param_1 + 0x9b0)) {
    if (*(int *)(param_1 + 0x9ac) == 0) {
      _DAT_00487f5c = *(float *)(param_1 + 0xc6c);
      _DAT_00487f60 = *(float *)(param_1 + 0xc70);
      _DAT_00487f64 = *(undefined4 *)(param_1 + 0xc74);
      _DAT_00487f68 = DAT_006caa68;
      _DAT_00487f6c = DAT_006caa6c;
      _DAT_00487f70 = DAT_006caa70;
      fVar8 = (float10)FUN_0041e820();
      DAT_00487edc = (float)(fVar8 * (float10)6.283185 - (float10)3.141593);
      fVar8 = (float10)FUN_0041e850(DAT_00487edc,0x4020d97c);
      DAT_00487ee0 = (float)fVar8;
    }
    if (*(int *)(param_1 + 0x9ac) % 0x1e == 0) {
      DAT_00487edc = DAT_00487ee0;
      fVar8 = (float10)FUN_0041e850(DAT_00487ee0,0x4020d97c);
      DAT_00487ee0 = (float)fVar8;
      fVar8 = (float10)FUN_0041e850(DAT_00487ee0,0x4020d97c);
      DAT_00487ee4 = (float)fVar8;
      fVar8 = (float10)FUN_0041e850(DAT_00487ee4,0x4020d97c);
      DAT_00487ee8 = (float)fVar8;
      fVar8 = (float10)FUN_0041e850(DAT_00487ee8,0x4020d97c);
      DAT_00487eec = (float)fVar8;
      fVar8 = (float10)FUN_0041e850(DAT_00487eec,0x4020d97c);
      _DAT_00487ef0 = (float)fVar8;
    }
    if (*(int *)(param_1 + 0x9ac) % 6 == 0) {
      fVar4 = (float)*(int *)(param_1 + 0x9ac) / (float)*(int *)(param_1 + 0x9b0);
      fVar5 = fVar4 * 0.1;
      fVar7 = (_DAT_00487f6c - _DAT_00487f60) * fVar5 + _DAT_00487f60;
      fVar5 = (_DAT_00487f68 - _DAT_00487f5c) * fVar5 + _DAT_00487f5c;
      fVar4 = fVar4 + 0.5;
      *(float *)(param_1 + 0xd10) = fVar4 * 1.047198;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        fVar6 = (float)(*(int *)(param_1 + 0x9ac) % 0x1e) / 30.0;
        fVar8 = (float10)fcos((float10)(&DAT_00487edc)[local_8]);
        fVar9 = (float10)fsin((float10)(&DAT_00487edc)[local_8]);
        fVar1 = (float)(fVar8 * (float10)*(float *)(param_1 + 0x9c0));
        fVar2 = (float)(fVar9 * (float10)*(float *)(param_1 + 0x9c0));
        fVar8 = (float10)fcos((float10)(&DAT_00487ee0)[local_8]);
        fVar9 = (float10)fsin((float10)(&DAT_00487ee0)[local_8]);
        *(float *)(param_1 + 0xd04) =
             fVar5 + ((float)(fVar8 * (float10)*(float *)(param_1 + 0x9c0)) - fVar1) * fVar6 + fVar1
        ;
        *(float *)(param_1 + 0xd08) =
             fVar7 + ((float)(fVar9 * (float10)*(float *)(param_1 + 0x9c0)) - fVar2) * fVar6 + fVar2
        ;
        *(undefined4 *)(param_1 + 0xd0c) = 0;
        uVar3 = *(undefined4 *)(param_1 + 0xd18);
        fVar1 = *(float *)(param_1 + 0xd1c);
        fVar8 = (float10)FUN_0041e820();
        *(float *)(param_1 + 0xd18) =
             (float)(fVar8 * (float10)fVar1 + (float10)*(float *)(param_1 + 0xd18));
        FUN_004145c0(param_1 + 0xd00);
        *(undefined4 *)(param_1 + 0xd18) = uVar3;
        *(float *)(param_1 + 0xd10) = *(float *)(param_1 + 0xd10) - fVar4 * 0.5235988;
      }
      FUN_004311e0(0x16);
    }
    *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x9a0) = 0;
  }
  return;
}

