
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040bb80(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  int local_8;
  
  if (*(int *)(param_1 + 0x9ac) < *(int *)(param_1 + 0x9b0)) {
    if (*(int *)(param_1 + 0x9ac) == 0) {
      _DAT_00487f5c = *(float *)(param_1 + 0xc6c);
      _DAT_00487f60 = *(float *)(param_1 + 0xc70);
      _DAT_00487f64 = *(undefined4 *)(param_1 + 0xc74);
      _DAT_00487f68 = _DAT_006caa68;
      _DAT_00487f6c = _DAT_006caa6c;
      _DAT_00487f70 = _DAT_006caa70;
      fVar8 = FUN_0041e820(&DAT_0069d8f8);
      DAT_00487edc = fVar8 * 6.283185 - 3.141593;
      fVar6 = (float10)FUN_0041e850(DAT_00487edc,0x4020d97c);
      DAT_00487ee0 = (float)fVar6;
    }
    if (*(int *)(param_1 + 0x9ac) % 0x1e == 0) {
      DAT_00487edc = DAT_00487ee0;
      fVar6 = (float10)FUN_0041e850(DAT_00487ee0,0x4020d97c);
      DAT_00487ee0 = (float)fVar6;
      fVar6 = (float10)FUN_0041e850(DAT_00487ee0,0x4020d97c);
      DAT_00487ee4 = (float)fVar6;
      fVar6 = (float10)FUN_0041e850(DAT_00487ee4,0x4020d97c);
      DAT_00487ee8 = (float)fVar6;
      fVar6 = (float10)FUN_0041e850(DAT_00487ee8,0x4020d97c);
      DAT_00487eec = (float)fVar6;
      fVar6 = (float10)FUN_0041e850(DAT_00487eec,0x4020d97c);
      _DAT_00487ef0 = (float)fVar6;
    }
    if (*(int *)(param_1 + 0x9ac) % 6 == 0) {
      fVar8 = (float)*(int *)(param_1 + 0x9ac) / (float)*(int *)(param_1 + 0x9b0);
      fVar3 = fVar8 * 0.1;
      fVar5 = (_DAT_00487f6c - _DAT_00487f60) * fVar3 + _DAT_00487f60;
      fVar3 = (_DAT_00487f68 - _DAT_00487f5c) * fVar3 + _DAT_00487f5c;
      fVar8 = fVar8 + 0.5;
      *(float *)(param_1 + 0xd10) = fVar8 * 1.047198;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        fVar4 = (float)(*(int *)(param_1 + 0x9ac) % 0x1e) / 30.0;
        fVar6 = (float10)fcos((float10)(&DAT_00487edc)[local_8]);
        fVar7 = (float10)fsin((float10)(&DAT_00487edc)[local_8]);
        fVar1 = (float)(fVar6 * (float10)*(float *)(param_1 + 0x9c0));
        fVar9 = (float)(fVar7 * (float10)*(float *)(param_1 + 0x9c0));
        fVar6 = (float10)fcos((float10)(&DAT_00487ee0)[local_8]);
        fVar7 = (float10)fsin((float10)(&DAT_00487ee0)[local_8]);
        *(float *)(param_1 + 0xd04) =
             fVar3 + ((float)(fVar6 * (float10)*(float *)(param_1 + 0x9c0)) - fVar1) * fVar4 + fVar1
        ;
        *(float *)(param_1 + 0xd08) =
             fVar5 + ((float)(fVar7 * (float10)*(float *)(param_1 + 0x9c0)) - fVar9) * fVar4 + fVar9
        ;
        *(undefined4 *)(param_1 + 0xd0c) = 0;
        uVar2 = *(undefined4 *)(param_1 + 0xd18);
        fVar1 = *(float *)(param_1 + 0xd1c);
        fVar9 = FUN_0041e820(&DAT_0069d8f8);
        *(float *)(param_1 + 0xd18) = fVar9 * fVar1 + *(float *)(param_1 + 0xd18);
        FUN_004145c0(param_1 + 0xd00);
        *(undefined4 *)(param_1 + 0xd18) = uVar2;
        *(float *)(param_1 + 0xd10) = *(float *)(param_1 + 0xd10) - fVar8 * 0.5235988;
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

