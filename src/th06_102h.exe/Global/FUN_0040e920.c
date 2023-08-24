
undefined4 FUN_0040e920(int param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  vec3f local_64;
  float local_58;
  undefined local_54 [64];
  float local_14;
  vec3f local_10;
  
  _D3DXVec3Normalize_8(&local_64,param_1 + 0x140);
  fVar5 = (float10)FUN_0045bcf4((double)*(float *)(param_1 + 0x160));
  local_14 = (float)fVar5;
  fVar5 = (float10)FUN_0045bda4((double)*(float *)(param_1 + 0x160));
  local_58 = (float)fVar5;
  *(float *)(param_1 + 0x14c) = local_64.x * local_14;
  *(float *)(param_1 + 0x150) = local_64.y * local_14;
  *(float *)(param_1 + 0x154) = local_64.z * local_14;
  *(float *)(param_1 + 0x158) = local_58;
  _D3DXMatrixRotationQuaternion_8(local_54,param_1 + 0x14c);
  local_10.x = local_64.y * 1.0 - local_64.z * 0.0;
  local_10.y = local_64.z * 0.0 - local_64.x * 1.0;
  local_10.z = local_64.x * 0.0 - local_64.y * 0.0;
  fVar2 = local_10.x * local_10.x + local_10.y * local_10.y + local_10.z * local_10.z;
  if (fVar2 < 1e-05 == NAN(fVar2)) {
    _D3DXVec3Normalize_8(&local_10,&local_10);
  }
  else {
    local_64.x = 1.0;
    local_64.y = 0.0;
    local_64.z = 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x15c);
  local_10.x = local_10.x * fVar2;
  local_10.y = local_10.y * fVar2;
  local_10.z = local_10.z * fVar2;
  _D3DXVec3TransformCoord_12(&local_10,&local_10,local_54);
  local_10.z = local_10.z * 6.0;
  *(float *)(param_1 + 0x110) = local_10.x + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = local_10.y + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = local_10.z + *(float *)(param_1 + 0x13c);
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

