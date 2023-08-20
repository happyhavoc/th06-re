
undefined4 FUN_00412f10(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_1 + 0xed0;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if ((*(char *)(local_14 + 0xe50) < '\0') && ((*(byte *)(local_14 + 0xe52) >> 3 & 1) == 0)) {
      iVar3 = local_14;
      for (local_10 = 0; local_c = iVar3 + 0x110, local_10 < 4; local_10 = local_10 + 1) {
        if (-1 < *(short *)(iVar3 + 0x1c4)) {
          if (*(short *)(iVar3 + 0x198) != 0) {
            *(undefined4 *)(iVar3 + 0x118) = *(undefined4 *)(local_14 + 0xc90);
          }
          fVar1 = *(float *)(local_14 + 0xc74);
          fVar2 = *(float *)(local_14 + 0xc70);
          *(float *)(iVar3 + 0x1a0) = *(float *)(local_14 + 0xc6c) + *(float *)(iVar3 + 500);
          *(float *)(iVar3 + 0x1a4) = fVar2 + *(float *)(iVar3 + 0x1f8);
          *(float *)(iVar3 + 0x1a8) = fVar1 + *(float *)(iVar3 + 0x1fc);
          *(undefined4 *)(iVar3 + 0x1a8) = 0x3efd70a4;
          FUN_00433590(local_c);
        }
        iVar3 = local_c;
      }
      if ((*(byte *)(local_14 + 0xe52) >> 1 & 1) != 0) {
        *(undefined4 *)(local_14 + 8) = *(undefined4 *)(local_14 + 0xc90);
      }
      *(float *)(local_14 + 0x90) = *(float *)(local_14 + 0xc6c) + *(float *)(local_14 + 0xe4);
      *(float *)(local_14 + 0x94) = *(float *)(local_14 + 0xc70) + *(float *)(local_14 + 0xe8);
      *(float *)(local_14 + 0x98) = *(float *)(local_14 + 0xc74) + *(float *)(local_14 + 0xec);
      *(undefined4 *)(local_14 + 0x98) = 0x3efced91;
      FUN_00433590(local_14);
      for (local_10 = 4; local_10 < 8; local_10 = local_10 + 1) {
        if (-1 < *(short *)(local_c + 0xb4)) {
          if (*(short *)(local_c + 0x88) != 0) {
            *(undefined4 *)(local_c + 8) = *(undefined4 *)(local_14 + 0xc90);
          }
          fVar1 = *(float *)(local_14 + 0xc74);
          fVar2 = *(float *)(local_14 + 0xc70);
          *(float *)(local_c + 0x90) = *(float *)(local_14 + 0xc6c) + *(float *)(local_c + 0xe4);
          *(float *)(local_c + 0x94) = fVar2 + *(float *)(local_c + 0xe8);
          *(float *)(local_c + 0x98) = fVar1 + *(float *)(local_c + 0xec);
          *(undefined4 *)(local_c + 0x98) = 0x3efd70a4;
          FUN_00433590(local_c);
        }
        local_c = local_c + 0x110;
      }
    }
    local_14 = local_14 + 0xec8;
  }
  return 1;
}

