
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d040(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  int local_e0;
  float local_dc [24];
  float local_7c;
  float local_78;
  int local_74;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_14;
  undefined4 local_10;
  
  puVar2 = (undefined4 *)&local_5c;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_e0 = 8;
  do {
    local_e0 = local_e0 + -1;
  } while (-1 < local_e0);
  local_68 = *(int *)(param_2 + 0x10);
  fVar3 = (float10)FUN_0041e820();
  local_7c = (float)(fVar3 * (float10)6.283185);
  for (local_74 = 0; local_74 < 2; local_74 = local_74 + 1) {
    if (local_74 == 0) {
      local_78 = local_7c + -3.141593;
      local_70 = 0.7853982;
    }
    else {
      local_78 = local_7c + -2.748894;
      local_70 = -0.7853982;
    }
    local_64 = 32.0;
    for (local_60 = 0; iVar1 = local_60, local_60 < 8; local_60 = local_60 + 1) {
      local_dc[local_60 * 3] = *(float *)(param_1 + 0xc6c);
      local_dc[iVar1 * 3 + 1] = *(float *)(param_1 + 0xc70);
      local_dc[iVar1 * 3 + 2] = *(float *)(param_1 + 0xc74);
      iVar1 = local_60;
      fVar3 = (float10)FUN_0045bda4((double)local_78);
      local_dc[local_60 * 3] = (float)fVar3 * local_64 + local_dc[iVar1 * 3];
      iVar1 = local_60;
      fVar3 = (float10)FUN_0045bcf4((double)local_78);
      local_dc[local_60 * 3 + 1] = (float)fVar3 * local_64 + local_dc[iVar1 * 3 + 1];
      local_78 = local_78 + 0.7853982;
    }
    if (local_74 == 0) {
      local_78 = local_7c + -3.141593;
    }
    else {
      local_78 = local_7c + -2.748894;
    }
    for (local_6c = 0; local_6c < 3; local_6c = local_6c + 1) {
      if (local_6c < 2) {
        local_64 = 112.0;
      }
      else {
        local_64 = 480.0;
      }
      for (local_60 = 0; local_60 < 8; local_60 = local_60 + 1) {
        local_58 = local_dc[local_60 * 3];
        local_54 = local_dc[local_60 * 3 + 1];
        local_50 = local_dc[local_60 * 3 + 2];
        local_5c = 1;
        if (local_68 == 0) {
          if (_DAT_0069bcb0 < 2) {
            local_5a = 2;
          }
          else {
            local_5a = 8;
          }
          local_4c = local_78;
          local_44 = 0;
          local_3c = 0;
          if (_DAT_0069bcb0 < 2) {
            local_30 = 0x41e00000;
            local_38 = local_64;
          }
          else {
            local_34 = 440.0;
            local_30 = 0x41a00000;
            local_38 = local_34;
          }
          local_2c = local_6c * 0x10 + 0x3c;
          local_28 = local_6c * -0x10 + 0x5a;
          local_24 = 0x10;
          local_20 = 0x32;
          local_1c = 0x10;
          local_10 = 2;
          local_14 = 1;
          local_34 = local_38;
          FUN_00414670();
        }
        else {
          *(float *)(param_1 + 0xd04) = local_dc[local_60 * 3];
          *(float *)(param_1 + 0xd08) = local_54;
          *(float *)(param_1 + 0xd0c) = local_50;
          FUN_004145c0();
        }
        iVar1 = local_60;
        fVar3 = (float10)FUN_0045bda4((double)local_78);
        local_dc[local_60 * 3] = (float)fVar3 * local_64 + local_dc[iVar1 * 3];
        iVar1 = local_60;
        fVar3 = (float10)FUN_0045bcf4((double)local_78);
        local_dc[local_60 * 3 + 1] = (float)fVar3 * local_64 + local_dc[iVar1 * 3 + 1];
        local_78 = local_78 + 0.7853982;
      }
      local_78 = (local_70 - 6.283185) + local_78;
    }
  }
  return;
}

