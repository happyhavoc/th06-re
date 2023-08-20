
void FUN_0040de00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int local_7c;
  undefined4 *local_74;
  undefined4 *local_68;
  int local_64;
  int local_60;
  undefined4 local_5c [22];
  
  local_60 = 0;
  local_74 = &DAT_005ab5f8;
  puVar2 = local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((*(short *)((int)local_74 + 0x5be) != 0) && (*(short *)((int)local_74 + 0x5be) != 5)) &&
        (local_74[0x30] != 0)) && (30.0 <= *(float *)(local_74[0x30] + 0x2c))) {
      local_60 = local_60 + 1;
      fVar3 = (float10)FUN_0045be40((double)((float)local_74[0x159] - *(float *)(param_1 + 0xc70)));
      local_68 = &DAT_005ab5f8;
      for (local_7c = 0; local_7c < 0x280; local_7c = local_7c + 1) {
        if ((((*(short *)((int)local_68 + 0x5be) != 0) && (*(short *)((int)local_68 + 0x5be) != 5))
            && ((local_68[0x30] != 0 &&
                ((*(float *)(local_68[0x30] + 0x2c) < 30.0 != NAN(*(float *)(local_68[0x30] + 0x2c))
                 && (NAN((float)local_68[0x161]) != ((float)local_68[0x161] == 0.0))))))) &&
           (fVar4 = (float10)FUN_0045bc34(), (float)fVar4 < 64.0 != NAN((float)fVar4))) {
          *(ushort *)(local_68 + 0x16e) = *(ushort *)(local_68 + 0x16e) | 0x10;
          local_68[0x161] = 0x3c23d70a;
          local_68[0x169] = 0;
          local_68[0x168] = 0;
          local_68[0x167] = 0xfffffc19;
          local_68[0x16a] = 0x78;
          fVar4 = (float10)FUN_0045be40((double)((float)local_68[0x159] -
                                                *(float *)(param_1 + 0xc70)),
                                        (double)((float)local_68[0x158] -
                                                *(float *)(param_1 + 0xc6c)));
          local_68[0x164] = ((float)fVar4 - (float)fVar3) * 2.2 + (float)fVar3;
          fVar4 = (float10)fcos((float10)(float)local_68[0x164]);
          fVar5 = (float10)fsin((float10)(float)local_68[0x164]);
          local_68[0x15e] = (float)(fVar4 * (float10)0.01);
          local_68[0x15f] = (float)(fVar5 * (float10)0.01);
          *(short *)((int)local_68 + 0x5ba) = *(short *)((int)local_68 + 0x5ba) + 1;
          FUN_004323a0(local_68,(int)*(short *)((int)local_68 + 0xb2) +
                                (int)*(short *)((int)local_68 + 0x5ba));
        }
        local_68 = local_68 + 0x171;
      }
    }
    local_74 = local_74 + 0x171;
  }
  FUN_0040d930(param_1,param_2);
  *(int *)(param_1 + 0x9b0) = local_60;
  return;
}

