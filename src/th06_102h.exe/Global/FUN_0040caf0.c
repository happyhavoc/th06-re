
void FUN_0040caf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  int local_a0;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  uint local_c;
  int local_8;
  
  if ((*(byte *)(param_1 + 0xe52) >> 3 & 1) != 0) {
    FUN_004114c0();
    return;
  }
  *(float *)(param_1 + 0xeb8) = *(float *)(param_1 + 0xeb8) + 0.01745329;
  if (0.7853982 <= *(float *)(param_1 + 0xeb8)) {
    *(float *)(param_1 + 0xeb8) = *(float *)(param_1 + 0xeb8) - 1.570796;
  }
  if (*(int *)(param_1 + 0xec4) == *(int *)(param_1 + 0xebc)) goto LAB_0040cffe;
  if (*(int *)(param_1 + 0xec4) < 0x79) {
    if (0x3c < *(int *)(param_1 + 0xec4)) {
      uVar1 = *(uint *)(param_1 + 0xec4) & 0x80000001;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
      }
      if (uVar1 == 0) goto LAB_0040cc18;
    }
    if (0x1e < *(int *)(param_1 + 0xec4)) {
      uVar1 = *(uint *)(param_1 + 0xec4) & 0x80000003;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
      }
      if (uVar1 == 0) goto LAB_0040cc18;
    }
    uVar1 = *(uint *)(param_1 + 0xec4) & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    if (uVar1 != 0) goto LAB_0040cffe;
  }
LAB_0040cc18:
  local_c = *(uint *)(param_1 + 0xec4) & 0x8000000f;
  if ((int)local_c < 0) {
    local_c = (local_c - 1 | 0xfffffff0) + 1;
  }
  uVar1 = (int)local_c / 2;
  if ((short)uVar1 == 0) {
    local_a0 = 0;
  }
  else {
    uVar2 = FUN_0041e780();
    local_a0 = (int)((ulonglong)(uVar2 & 0xffff) % (ulonglong)(longlong)(int)(uVar1 & 0xffff));
  }
  local_c = local_a0 + (int)local_c / 2;
  local_10 = ((float)local_c * 160.0) / 16.0 + 32.0;
  local_14 = *(float *)(param_1 + 0xeb8) - ((float)local_c * 3.141593) / 40.0;
  if (local_10 < -0.7853982 != NAN(local_10)) {
    local_10 = local_10 + 1.570796;
  }
  local_20 = *(float *)(param_1 + 0xc6c);
  local_1c = *(float *)(param_1 + 0xc70);
  local_18 = *(undefined4 *)(param_1 + 0xc74);
  fVar3 = (float10)FUN_0045bda4((double)local_14);
  local_20 = (float)fVar3 * local_10 + local_20;
  fVar3 = (float10)FUN_0045bcf4((double)local_14);
  local_1c = (float)fVar3 * local_10 + local_1c;
  local_8 = FUN_0040ef50(0x13,&local_20,1,0xff3030ff);
  fVar3 = (float10)FUN_0041e820();
  *(float *)(local_8 + 0x11c) = (float)((fVar3 * (float10)40.0 - (float10)20.0) / (float10)60.0);
  *(float *)(local_8 + 0x120) = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  *(undefined4 *)(local_8 + 0x124) = 0;
  *(float *)(local_8 + 0x128) = -*(float *)(local_8 + 0x11c) * 0.008333334;
  *(float *)(local_8 + 300) = -*(float *)(local_8 + 0x120) * 0.008333334;
  *(float *)(local_8 + 0x130) = -*(float *)(local_8 + 0x124) * 0.008333334;
  local_20 = *(float *)(param_1 + 0xc6c);
  local_1c = *(float *)(param_1 + 0xc70);
  local_18 = *(undefined4 *)(param_1 + 0xc74);
  fVar3 = (float10)FUN_0045bda4((double)local_14);
  local_20 = local_20 - (float)fVar3 * local_10;
  fVar3 = (float10)FUN_0045bcf4((double)local_14);
  local_1c = (float)fVar3 * local_10 + local_1c;
  local_8 = FUN_0040ef50(0x13,&local_20,1,0xff3030ff);
  fVar3 = (float10)FUN_0041e820();
  *(float *)(local_8 + 0x11c) = (float)((fVar3 * (float10)40.0 - (float10)20.0) / (float10)60.0);
  *(float *)(local_8 + 0x120) = ((float)local_c * 8.0) / 60.0 - 0.2666667;
  *(undefined4 *)(local_8 + 0x124) = 0;
  *(float *)(local_8 + 0x128) = -*(float *)(local_8 + 0x11c) * 0.008333334;
  *(float *)(local_8 + 300) = -*(float *)(local_8 + 0x120) * 0.008333334;
  *(float *)(local_8 + 0x130) = -*(float *)(local_8 + 0x124) * 0.008333334;
LAB_0040cffe:
  *(undefined4 *)(param_1 + 0xebc) = *(undefined4 *)(param_1 + 0xec4);
  FUN_00424285(param_1 + 0xec4,param_1 + 0xec0);
  return;
}

