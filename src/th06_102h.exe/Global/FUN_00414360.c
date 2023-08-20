
int FUN_00414360(int param_1,int param_2)

{
  float10 fVar1;
  int in_ECX;
  float10 fVar2;
  float local_34;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 2000;
  local_10 = 0;
  local_1c = &DAT_005ab5f8;
  for (local_14 = 0; local_14 < 0x280; local_14 = local_14 + 1) {
    if (*(short *)((int)local_1c + 0x5be) != 0) {
      if (param_2 != 0) {
        FUN_0041f290(local_1c + 0x158,6,1);
      }
      FUN_00401940(local_1c + 0x158,local_8,((local_8 < param_1) - 1 & 0xffffff01) - 1);
      local_c = local_c + local_8;
      local_10 = local_10 + 1;
      local_8 = local_8 + 10;
      if (param_1 < local_8) {
        local_8 = param_1;
      }
      *(undefined2 *)((int)local_1c + 0x5be) = 5;
    }
    local_1c = local_1c + 0x171;
  }
  local_2c = in_ECX + 0xec000;
  for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
    if (*(int *)(local_2c + 600) != 0) {
      if (*(byte *)(local_2c + 0x26c) < 2) {
        *(undefined *)(local_2c + 0x26c) = 2;
        *(undefined4 *)(local_2c + 0x264) = 0;
        *(undefined4 *)(local_2c + 0x260) = 0;
        *(undefined4 *)(local_2c + 0x25c) = 0xfffffc19;
        if (param_2 != 0) {
          FUN_0041f290(local_2c + 0x220,6,1);
          local_34 = *(float *)(local_2c + 0x230);
          fVar1 = (float10)fcos((float10)*(float *)(local_2c + 0x22c));
          fVar2 = (float10)fsin((float10)*(float *)(local_2c + 0x22c));
          local_18 = (float)fVar2;
          for (; local_34 < *(float *)(local_2c + 0x234); local_34 = local_34 + 32.0) {
            local_28 = (float)fVar1 * local_34 + *(float *)(local_2c + 0x220);
            local_24 = local_18 * local_34 + *(float *)(local_2c + 0x224);
            local_20 = 0;
            FUN_0041f290(&local_28,6,1);
          }
        }
      }
      *(undefined4 *)(local_2c + 0x254) = 0;
    }
    local_2c = local_2c + 0x270;
  }
  DAT_0069bca4 = DAT_0069bca4 + local_c;
  if (local_c != 0) {
    FUN_0041735a(local_c);
  }
  return local_c;
}

