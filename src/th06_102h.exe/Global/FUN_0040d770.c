
void FUN_0040d770(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 *local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_64 = &DAT_005ab5f8;
  puVar2 = local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0041e820();
  FUN_0040ef50(0xc,param_1 + 0xc6c,1,0xffffffff);
  for (local_60 = 0; local_60 < 0x280; local_60 = local_60 + 1) {
    if ((((*(short *)((int)local_64 + 0x5be) != 0) && (*(short *)((int)local_64 + 0x5be) != 5)) &&
        (local_64[0x30] != 0)) &&
       ((*(float *)(local_64[0x30] + 0x2c) < 30.0 != NAN(*(float *)(local_64[0x30] + 0x2c)) &&
        (NAN((float)local_64[0x161]) != ((float)local_64[0x161] == 0.0))))) {
      *(ushort *)(local_64 + 0x16e) = *(ushort *)(local_64 + 0x16e) | 0x10;
      *(undefined2 *)((int)local_64 + 0x5ba) = 2;
      FUN_004323a0(local_64,(int)*(short *)((int)local_64 + 0xb2) +
                            (int)*(short *)((int)local_64 + 0x5ba));
      local_64[0x161] = 0x3c23d70a;
      local_64[0x169] = 0;
      local_64[0x168] = 0;
      local_64[0x167] = 0xfffffc19;
      local_64[0x16a] = 0x78;
      fVar3 = (float10)FUN_0041e820();
      fVar4 = (float10)(float)(fVar3 * (float10)6.283185 - (float10)3.141593);
      fVar3 = (float10)fcos(fVar4);
      fVar4 = (float10)fsin(fVar4);
      local_64[0x15e] = (float)(fVar3 * (float10)0.01);
      local_64[0x15f] = (float)(fVar4 * (float10)0.01);
    }
    local_64 = local_64 + 0x171;
  }
  return;
}

