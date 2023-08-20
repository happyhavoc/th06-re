
undefined4 FUN_0040e920(int param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54 [64];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_0043f0ce(&local_64,param_1 + 0x140);
  fVar5 = (float10)FUN_0045bcf4((double)*(float *)(param_1 + 0x160));
  local_14 = (float)fVar5;
  fVar5 = (float10)FUN_0045bda4((double)*(float *)(param_1 + 0x160));
  local_58 = (float)fVar5;
  *(float *)(param_1 + 0x14c) = local_64 * local_14;
  *(float *)(param_1 + 0x150) = local_60 * local_14;
  *(float *)(param_1 + 0x154) = local_5c * local_14;
  *(float *)(param_1 + 0x158) = local_58;
  FUN_0043ef0c(local_54,param_1 + 0x14c);
  local_10 = local_60 * 1.0 - local_5c * 0.0;
  local_c = local_5c * 0.0 - local_64 * 1.0;
  local_8 = local_64 * 0.0 - local_60 * 0.0;
  fVar2 = local_10 * local_10 + local_c * local_c + local_8 * local_8;
  if (fVar2 < 1e-05 == NAN(fVar2)) {
    FUN_0043f0ce(&local_10,&local_10);
  }
  else {
    local_64 = 1.0;
    local_60 = 0.0;
    local_5c = 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x15c);
  local_10 = local_10 * fVar2;
  local_c = local_c * fVar2;
  local_8 = local_8 * fVar2;
  FUN_0043f175(&local_10,&local_10,local_54);
  local_8 = local_8 * 6.0;
  *(float *)(param_1 + 0x110) = local_10 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = local_c + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = local_8 + *(float *)(param_1 + 0x13c);
  if (*(char *)(param_1 + 0x17a) != '\0') {
    *(char *)(param_1 + 0x17b) = *(char *)(param_1 + 0x17b) + '\x01';
    if ('\x0f' < *(char *)(param_1 + 0x17b)) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + 0x17b);
    uVar3 = *(uint *)(param_1 + 0x7c);
    iVar4 = __ftol2();
    *(uint *)(param_1 + 0x7c) = uVar3 & 0xffffff | iVar4 << 0x18;
    *(float *)(param_1 + 0x18) = 2.0 - (1.0 - (float)(int)cVar1 / 16.0);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  return 1;
}

