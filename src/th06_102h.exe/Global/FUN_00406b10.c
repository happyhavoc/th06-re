
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b10(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int local_c;
  void *local_8;
  
  FUN_00406020(param_1);
  local_8 = (void *)(param_1 + 0x76e4);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    puVar1 = (undefined4 *)(param_1 + 0x7624 + local_c * 0xc);
    *(undefined4 *)((int)local_8 + 0x90) = *puVar1;
    *(undefined4 *)((int)local_8 + 0x94) = puVar1[1];
    *(undefined4 *)((int)local_8 + 0x98) = puVar1[2];
    *(float *)((int)local_8 + 0x90) = _DAT_0069d6dc + *(float *)((int)local_8 + 0x90);
    *(float *)((int)local_8 + 0x94) = _DAT_0069d6e0 + *(float *)((int)local_8 + 0x94);
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    *(undefined4 *)((int)local_8 + 0x1c) = 0x404ccccd;
    *(undefined4 *)((int)local_8 + 0x18) = 0x404ccccd;
    FUN_00432cc0(local_8);
    pfVar2 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar3 = pfVar2[2];
    fVar4 = pfVar2[1];
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) - *pfVar2 * 6.0;
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) - fVar4 * 6.0;
    *(float *)((int)local_8 + 0x98) = *(float *)((int)local_8 + 0x98) - fVar3 * 6.0;
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) + -32.0;
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) + -32.0;
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    *(undefined4 *)((int)local_8 + 0x1c) = 0x400ccccd;
    *(undefined4 *)((int)local_8 + 0x18) = 0x400ccccd;
    FUN_00432cc0(local_8);
    pfVar2 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar3 = pfVar2[2];
    fVar4 = pfVar2[1];
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) - (*pfVar2 + *pfVar2);
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) - (fVar4 + fVar4);
    *(float *)((int)local_8 + 0x98) = *(float *)((int)local_8 + 0x98) - (fVar3 + fVar3);
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) + 64.0;
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) + 64.0;
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    pfVar2 = (float *)(param_1 + 0x7684 + local_c * 0xc);
    fVar3 = pfVar2[2];
    fVar4 = pfVar2[1];
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) - (*pfVar2 + *pfVar2);
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) - (fVar4 + fVar4);
    *(float *)((int)local_8 + 0x98) = *(float *)((int)local_8 + 0x98) - (fVar3 + fVar3);
    *(float *)((int)local_8 + 0x90) = *(float *)((int)local_8 + 0x90) + -32.0;
    *(float *)((int)local_8 + 0x94) = *(float *)((int)local_8 + 0x94) + -32.0;
    *(undefined4 *)((int)local_8 + 0x98) = 0;
    *(undefined4 *)((int)local_8 + 0x1c) = 0x3f800000;
    *(undefined4 *)((int)local_8 + 0x18) = 0x3f800000;
    FUN_00432cc0(local_8);
    local_8 = (void *)((int)local_8 + 0x110);
  }
  return;
}

