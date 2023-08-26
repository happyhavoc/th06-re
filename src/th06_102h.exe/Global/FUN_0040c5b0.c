
void FUN_0040c5b0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  vec3f local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined2 local_64;
  undefined2 local_62;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  int local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x9ac) % 9 == 0) {
    puVar3 = (undefined4 *)&local_64;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_8 = *(int *)(param_1 + 0x9ac) / 9;
    local_64 = 8;
    local_1c = 0;
    if (CUR_RANK < 2) {
      local_20 = 1;
    }
    else {
      local_20 = 3;
    }
    local_1e = 1;
    local_50 = 0x3f060a92;
    local_1a = 0;
    local_18 = 0;
    local_78 = 0.5 - ((float)local_8 * 0.5) / 9.0;
    local_94 = DAT_006caa70 - *(float *)(param_1 + 0xc74);
    local_98 = DAT_006caa6c - *(float *)(param_1 + 0xc70);
    local_9c = DAT_006caa68 - *(float *)(param_1 + 0xc6c);
    _D3DXVec3Normalize_8(&local_84,&local_9c);
    if ((local_8 & 1) == 0) {
      local_90 = 256.0;
    }
    else {
      local_90 = -256.0;
    }
    local_9c = local_9c * local_78;
    local_98 = local_98 * local_78;
    local_94 = local_94 * local_78;
    local_6c = local_94 + local_84.z * local_90;
    local_70 = local_98 + local_84.y * local_90;
    local_74 = local_9c + local_84.x * local_90;
    local_84.z = -(local_84.z * local_90);
    local_84.y = -(local_84.y * local_90);
    local_84.x = -(local_84.x * local_90);
    local_78 = 0.7853982;
    fVar4 = (float10)FUN_0045bda4(0x3fe921fb60000000);
    local_8c = (float)fVar4;
    fVar4 = (float10)FUN_0045bcf4((double)local_78);
    local_68 = (float)fVar4;
    local_9c = local_84.x;
    local_98 = local_84.y;
    local_94 = local_84.z;
    fVar1 = local_84.y * local_68;
    local_84.y = local_84.y * local_8c + -local_84.x * local_68;
    local_78 = -0.1745329;
    local_84.x = fVar1 + local_84.x * local_8c;
    fVar4 = (float10)FUN_0045bda4(0xbfc6571860000000);
    local_8c = (float)fVar4;
    fVar4 = (float10)FUN_0045bcf4((double)local_78);
    local_68 = (float)fVar4;
    local_54 = 0.0;
    local_88 = -0.7853982;
    for (local_c = 0; local_c < 9; local_c = local_c + 1) {
      local_9c = local_84.x;
      local_98 = local_84.y;
      local_94 = local_84.z;
      fVar1 = local_84.y * local_68 + local_84.x * local_8c;
      local_84.y = local_84.y * local_8c + -local_84.x * local_68;
      local_58 = local_84.z + *(float *)(param_1 + 0xc74) + local_6c;
      local_5c = local_84.y + *(float *)(param_1 + 0xc70) + local_70;
      local_60 = fVar1 + *(float *)(param_1 + 0xc6c) + local_74;
      local_4c = 0x40000000;
      if (((local_8 & 1) != 0) && (CUR_RANK < 2)) {
        local_54 = local_88;
      }
      local_62 = 3;
      local_84.x = fVar1;
      FUN_004145c0();
      local_88 = local_88 + 0.1745329;
    }
    FUN_004311e0(7,0);
  }
  *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
  return;
}

