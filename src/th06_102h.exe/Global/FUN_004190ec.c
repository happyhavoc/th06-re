
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004190ec(void)

{
  undefined4 uVar1;
  int in_ECX;
  int local_94;
  float local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_8;
  
  if (*(int *)(in_ECX + 0x253c) < 0) {
    uVar1 = 0xffffffff;
  }
  else if ((DAT_0069d6d4 == 6) &&
          ((*(int *)(in_ECX + 0x253c) == 1 || (*(int *)(in_ECX + 0x253c) == 0xb)))) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x2548) < 0x3c) {
      local_8 = (((float)*(int *)(in_ECX + 0x2548) + *(float *)(in_ECX + 0x2544)) * 48.0) / 60.0;
    }
    else {
      local_8 = 48.0;
    }
    local_94 = 4;
    do {
      local_94 = local_94 + -1;
    } while (-1 < local_94);
    local_5c = ((_DAT_0069d6e4 - 256.0) / 2.0 + _DAT_0069d6dc) - 16.0;
    uStack_58 = 0x43c00000;
    uStack_54 = 0;
    local_48 = (_DAT_0069d6e4 - 256.0) / 2.0 + _DAT_0069d6dc + 256.0 + 16.0;
    uStack_44 = 0x43c00000;
    uStack_40 = 0;
    local_34 = ((_DAT_0069d6e4 - 256.0) / 2.0 + _DAT_0069d6dc) - 16.0;
    fStack_30 = local_8 + 384.0;
    uStack_2c = 0;
    local_20 = (_DAT_0069d6e4 - 256.0) / 2.0 + _DAT_0069d6dc + 256.0 + 16.0;
    fStack_1c = local_8 + 384.0;
    uStack_18 = 0;
    local_38 = 0xd0000000;
    local_4c = 0xd0000000;
    local_10 = 0x90000000;
    local_24 = 0x90000000;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    FUN_00432ad0(in_ECX + 0x2550);
    FUN_00432ad0(in_ECX + 0x2660);
    if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,4,2);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,1,2);
    }
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,5,0);
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,2,0);
    if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0xe,0);
    }
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x44);
    (**(code **)(*(int *)g_GameContext._8_4_ + 0x120))(g_GameContext._8_4_,5,2,&local_5c,0x14);
    *(undefined *)(DAT_006d4588 + 0x210be) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210bd) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210bc) = 0xff;
    *(undefined *)(DAT_006d4588 + 0x210bf) = 0xff;
    if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,4,4);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,1,4);
    }
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,5,2);
    (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,2,2);
    FUN_00432ad0(in_ECX + 0x2770);
    FUN_00432ad0(in_ECX + 0x2880);
    FUN_00432ad0(in_ECX + 0x2990);
    FUN_00432ad0(in_ECX + 0x2aa0);
    uVar1 = 0;
  }
  return uVar1;
}

