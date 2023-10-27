
undefined4 FUN_0040e920(int param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  float10 fVar4;
  D3DXVECTOR3 local_64;
  float local_58;
  D3DXMATRIX local_54;
  float local_14;
  D3DXVECTOR3 local_10;
  
  D3DXVec3Normalize(&local_64,(D3DXVECTOR3 *)(param_1 + 0x140));
  fVar4 = (float10)FUN_0045bcf4((double)*(float *)(param_1 + 0x160));
  local_14 = (float)fVar4;
  fVar4 = (float10)FUN_0045bda4((double)*(float *)(param_1 + 0x160));
  local_58 = (float)fVar4;
  *(float *)(param_1 + 0x14c) = local_64.x * local_14;
  *(float *)(param_1 + 0x150) = local_64.y * local_14;
  *(float *)(param_1 + 0x154) = local_64.z * local_14;
  *(float *)(param_1 + 0x158) = local_58;
  D3DXMatrixRotationQuaternion(&local_54,(D3DXQUATERNION *)(param_1 + 0x14c));
  local_10.x = local_64.y * 1.0 - local_64.z * 0.0;
  local_10.y = local_64.z * 0.0 - local_64.x * 1.0;
  local_10.z = local_64.x * 0.0 - local_64.y * 0.0;
  fVar1 = local_10.x * local_10.x + local_10.y * local_10.y + local_10.z * local_10.z;
  if (fVar1 < 1e-05 == NAN(fVar1)) {
    D3DXVec3Normalize(&local_10,&local_10);
  }
  else {
    local_64.x = 1.0;
    local_64.y = 0.0;
    local_64.z = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x15c);
  local_10.x = local_10.x * fVar1;
  local_10.y = local_10.y * fVar1;
  local_10.z = local_10.z * fVar1;
  D3DXVec3TransformCoord(&local_10,&local_10,&local_54);
  local_10.z = local_10.z * 6.0;
  *(float *)(param_1 + 0x110) = local_10.x + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x114) = local_10.y + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x118) = local_10.z + *(float *)(param_1 + 0x13c);
  if (*(char *)(param_1 + 0x17a) != '\0') {
    *(char *)(param_1 + 0x17b) = *(char *)(param_1 + 0x17b) + '\x01';
    if ('\x0f' < *(char *)(param_1 + 0x17b)) {
      return 0;
    }
    fVar1 = 1.0 - (float)(int)*(char *)(param_1 + 0x17b) / 16.0;
    uVar2 = *(uint *)(param_1 + 0x7c);
    lVar3 = __ftol2((double)(fVar1 * 255.0));
    *(uint *)(param_1 + 0x7c) = uVar2 & 0xffffff | lVar3 << 0x18;
    *(float *)(param_1 + 0x18) = 2.0 - fVar1;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  return 1;
}

