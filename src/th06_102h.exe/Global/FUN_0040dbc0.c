
void FUN_0040dbc0(int param_1,int param_2)

{
  float10 fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float local_68;
  float local_64 [4];
  float local_54;
  int local_8;
  
  pfVar3 = (float *)(param_1 + 0xd00);
  pfVar4 = local_64;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  local_68 = *(float *)(param_1 + 0x9bc);
  if (*(int *)(param_1 + 0x9b0) % 6 == 0) {
    for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
      fVar1 = (float10)fcos((float10)local_68);
      fVar5 = (float10)fsin((float10)local_68);
      local_64[1] = (float)(fVar1 * (float10)*(float *)(param_1 + 0x9c0)) + 192.0;
      local_64[2] = (float)(fVar5 * (float10)*(float *)(param_1 + 0x9c0)) + 224.0;
      local_54 = local_68 + *(float *)(param_1 + 0x9b8);
      FUN_004145c0((int)local_64);
      local_68 = 6.283185 / (float)iVar2 + local_68;
    }
  }
  *(int *)(param_1 + 0x9b0) = *(int *)(param_1 + 0x9b0) + 1;
  return;
}

