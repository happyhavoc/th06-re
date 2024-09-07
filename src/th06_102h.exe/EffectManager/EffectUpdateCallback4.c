
int th06::EffectManager::EffectUpdateCallback4(Effect *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  D3DXVECTOR3 local_64;
  float local_58;
  D3DXMATRIX local_54;
  float local_14;
  D3DXVECTOR3 local_10;
  
  D3DXVec3Normalize(&local_64,&param_1->pos2);
  dVar5 = sin((double)param_1->__angle_related);
  local_14 = (float)dVar5;
  dVar5 = cos((double)param_1->__angle_related);
  local_58 = (float)dVar5;
  (param_1->field10_0x14c).x = local_64.x * local_14;
  (param_1->field10_0x14c).y = local_64.y * local_14;
  (param_1->field10_0x14c).z = local_64.z * local_14;
  (param_1->field10_0x14c).w = local_58;
  D3DXMatrixRotationQuaternion(&local_54,&param_1->field10_0x14c);
  local_10.x = local_64.y * 1.0 - local_64.z * 0.0;
  local_10.y = local_64.z * 0.0 - local_64.x * 1.0;
  local_10.z = local_64.x * 0.0 - local_64.y * 0.0;
  fVar2 = local_10.x * local_10.x + local_10.y * local_10.y + local_10.z * local_10.z;
  if (fVar2 < 1e-05 == NAN(fVar2)) {
    D3DXVec3Normalize(&local_10,&local_10);
  }
  else {
    local_64.x = 1.0;
    local_64.y = 0.0;
    local_64.z = 0.0;
  }
  fVar2 = param_1->field11_0x15c;
  local_10.x = local_10.x * fVar2;
  local_10.y = local_10.y * fVar2;
  local_10.z = local_10.z * fVar2;
  D3DXVec3TransformCoord(&local_10,&local_10,&local_54);
  local_10.z = local_10.z * 6.0;
  fVar2 = (param_1->position).z;
  fVar1 = (param_1->position).y;
  (param_1->pos1).x = local_10.x + (param_1->position).x;
  (param_1->pos1).y = local_10.y + fVar1;
  (param_1->pos1).z = local_10.z + fVar2;
  if (param_1->field18_0x17a != 0) {
    param_1->field_0x17b = param_1->field_0x17b + '\x01';
    if ('\x0f' < (char)param_1->field_0x17b) {
      return 0;
    }
    fVar2 = 1.0 - (float)(int)(char)param_1->field_0x17b / 16.0;
    uVar3 = (param_1->vm).color.color;
    lVar4 = __ftol2(fVar2 * 255.0);
    (param_1->vm).color.color = uVar3 & 0xffffff | lVar4 << 0x18;
    (param_1->vm).scaleY = 2.0 - fVar2;
    (param_1->vm).scaleX = (param_1->vm).scaleY;
  }
  return 1;
}

