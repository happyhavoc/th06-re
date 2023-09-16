
undefined4 FUN_00433150(float *param_1)

{
  undefined4 uVar1;
  AnmManager *in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  float local_c4 [5];
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  undefined local_84 [64];
  float local_44 [8];
  float local_24;
  float local_20;
  
  if (((uint)param_1[0x20] & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (((uint)param_1[0x20] >> 1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (param_1[0x1f] == 0.0) {
    uVar1 = 0xffffffff;
  }
  else {
    pfVar3 = param_1 + 0xf;
    pfVar4 = local_c4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    local_c4[0] = local_c4[0] * param_1[7];
    local_b0 = -param_1[6] * local_b0;
    if (NAN(*param_1) == (*param_1 == 0.0)) {
      _D3DXMatrixRotationX_8(local_84,*param_1);
      _D3DXMatrixMultiply_12(local_c4,local_c4,local_84);
    }
    if (NAN(param_1[1]) == (param_1[1] == 0.0)) {
      _D3DXMatrixRotationY_8(local_84,param_1[1]);
      _D3DXMatrixMultiply_12(local_c4,local_c4,local_84);
    }
    if (NAN(param_1[2]) == (param_1[2] == 0.0)) {
      _D3DXMatrixRotationZ_8(local_84,param_1[2]);
      _D3DXMatrixMultiply_12(local_c4,local_c4,local_84);
    }
    if (((uint)param_1[0x20] >> 8 & 1) == 0) {
      local_94 = param_1[0x24];
    }
    else {
      dVar5 = _fabs((double)((*(float *)((int)param_1[0x30] + 0x30) * param_1[7]) / 2.0));
      local_94 = (float)dVar5 + param_1[0x24];
    }
    if (((uint)param_1[0x20] >> 8 & 2) == 0) {
      local_90 = -param_1[0x25];
    }
    else {
      dVar5 = _fabs((double)((*(float *)((int)param_1[0x30] + 0x2c) * param_1[6]) / 2.0));
      local_90 = -param_1[0x25] - (float)dVar5;
    }
    local_8c = param_1[0x26];
    (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,0x100,local_c4);
    if (in_ECX->currentSprite != (AnmLoadedSprite *)param_1[0x30]) {
      in_ECX->currentSprite = (AnmLoadedSprite *)param_1[0x30];
      pfVar3 = param_1 + 0xf;
      pfVar4 = local_44;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      local_24 = *(float *)((int)param_1[0x30] + 0x1c) + param_1[10];
      local_20 = *(float *)((int)param_1[0x30] + 0x20) + param_1[0xb];
      (**(code **)(*DAT_006c6d20 + 0x94))(DAT_006c6d20,0x10,local_44);
      if (in_ECX->currentTexture != in_ECX->textures[*(int *)param_1[0x30]]) {
        in_ECX->currentTexture = in_ECX->textures[*(int *)param_1[0x30]];
        (**(code **)(*DAT_006c6d20 + 0xf4))(DAT_006c6d20,0,in_ECX->currentTexture);
      }
    }
    if (in_ECX->field16_0x210be != '\x03') {
      if ((DAT_006c6e60 >> 1 & 1) == 0) {
        (**(code **)(*DAT_006c6d20 + 0x130))(DAT_006c6d20,0x102);
        (**(code **)(*DAT_006c6d20 + 0x14c))(DAT_006c6d20,0,in_ECX->vertexBuffer,0x14);
      }
      else {
        (**(code **)(*DAT_006c6d20 + 0x130))(DAT_006c6d20,0x142);
      }
      in_ECX->field16_0x210be = '\x03';
    }
    FUN_004324d0(in_ECX,(int)param_1);
    if ((DAT_006c6e60 >> 1 & 1) == 0) {
      (**(code **)(*DAT_006c6d20 + 0x118))(DAT_006c6d20,5,0,2);
    }
    else {
      (**(code **)(*DAT_006c6d20 + 0x120))(DAT_006c6d20,5,2,&DAT_006d4660,0x18);
    }
    uVar1 = 0;
  }
  return uVar1;
}

