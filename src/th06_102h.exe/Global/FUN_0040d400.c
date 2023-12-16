
void FUN_0040d400(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 *local_68;
  int local_64;
  int local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_44;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  
  local_60 = 0;
  local_68 = &DAT_005ab5f8;
  puVar2 = (undefined4 *)&local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (local_64 = 0; local_64 < 0x280; local_64 = local_64 + 1) {
    if ((((*(short *)((int)local_68 + 0x5be) != 0) && (*(short *)((int)local_68 + 0x5be) != 5)) &&
        (local_68[0x30] != 0)) && (30.0 <= *(float *)(local_68[0x30] + 0x2c))) {
      local_58 = local_68[0x158];
      local_54 = local_68[0x159];
      local_50 = local_68[0x15a];
      local_5c = 3;
      local_5a = 1;
      fVar3 = Rng::GetRandomF32ZeroToOne(&g_Rng);
      local_4c = fVar3 * 6.283185 - 3.141593;
      local_44 = 0;
      local_18 = 1;
      local_16 = 1;
      local_10 = 8;
      local_14 = 1;
      FUN_004145c0((int)&local_5c);
      local_60 = local_60 + 1;
    }
    local_68 = local_68 + 0x171;
  }
  *(int *)(param_1 + 0x9b0) = local_60;
  return;
}

