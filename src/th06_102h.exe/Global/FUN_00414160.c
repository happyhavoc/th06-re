
void __thiscall FUN_00414160(int param_1_00,int param_2)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_28;
  int local_20;
  undefined4 *local_1c;
  int local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  local_1c = &DAT_005ab5f8;
  for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
    if ((*(short *)((int)local_1c + 0x5be) != 0) && (*(short *)((int)local_1c + 0x5be) != 5)) {
      if (param_2 == 0) {
        *(undefined2 *)((int)local_1c + 0x5be) = 5;
      }
      else {
        FUN_0041f290(local_1c + 0x158,6,1);
        puVar3 = local_1c;
        for (iVar2 = 0x171; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
    }
    local_1c = local_1c + 0x171;
  }
  local_20 = param_1_00 + 0xec000;
  for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
    if (*(int *)(local_20 + 600) != 0) {
      if (*(byte *)(local_20 + 0x26c) < 2) {
        *(undefined *)(local_20 + 0x26c) = 2;
        *(undefined4 *)(local_20 + 0x264) = 0;
        *(undefined4 *)(local_20 + 0x260) = 0;
        *(undefined4 *)(local_20 + 0x25c) = 0xfffffc19;
        if (param_2 != 0) {
          local_28 = *(float *)(local_20 + 0x230);
          fVar1 = (float10)fcos((float10)*(float *)(local_20 + 0x22c));
          fVar4 = (float10)fsin((float10)*(float *)(local_20 + 0x22c));
          for (; local_28 < *(float *)(local_20 + 0x234); local_28 = local_28 + 32.0) {
            local_10 = (float)fVar1 * local_28 + *(float *)(local_20 + 0x220);
            local_c = (float)fVar4 * local_28 + *(float *)(local_20 + 0x224);
            local_8 = 0;
            FUN_0041f290(&local_10,6,1);
          }
        }
      }
      *(undefined4 *)(local_20 + 0x254) = 0;
    }
    local_20 = local_20 + 0x270;
  }
  return;
}

