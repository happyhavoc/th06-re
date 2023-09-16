
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004065e0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int local_c;
  void *local_8;
  
  FUN_00406020(param_1);
  local_8 = (void *)(param_1 + 0x76e4);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    pfVar1 = (float *)(param_1 + 0x7624 + local_c * 0xc);
    fVar2 = pfVar1[2];
    fVar3 = pfVar1[1];
    *(float *)((int)local_8 + 0x90) = *pfVar1 + *(float *)((int)local_8 + 0xe4);
    *(float *)((int)local_8 + 0x94) = fVar3 + *(float *)((int)local_8 + 0xe8);
    *(float *)((int)local_8 + 0x98) = fVar2 + *(float *)((int)local_8 + 0xec);
    *(float *)((int)local_8 + 0x90) = _DAT_0069d6dc + *(float *)((int)local_8 + 0x90);
    *(float *)((int)local_8 + 0x94) = _DAT_0069d6e0 + *(float *)((int)local_8 + 0x94);
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    FUN_00432cc0(local_8);
    local_8 = (void *)((int)local_8 + 0x110);
  }
  return;
}

