
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419c99(void)

{
  uint uVar1;
  uint *in_ECX;
  uint local_1e8;
  int local_1c0;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  if ((*(int *)(in_ECX[1] + 0x253c) < 0) &&
     ((uint)*(byte *)(in_ECX + 8) + (uint)*(byte *)(in_ECX[1] + 0x1ba0) != 0)) {
    local_14 = in_ECX[1] + 0x1430;
    FUN_00432ad0(local_14);
    uVar1 = in_ECX[1];
    local_14 = uVar1 + 0x1650;
    *(uint *)(uVar1 + 0x16d0) = *(uint *)(uVar1 + 0x16d0) | 0x300;
    *(float *)(uVar1 + 0x166c) = ((float)in_ECX[10] * 288.0) / 14.0;
    *(undefined4 *)(uVar1 + 0x16e0) = 0x42c00000;
    *(undefined4 *)(uVar1 + 0x16e4) = 0x41c00000;
    *(undefined4 *)(uVar1 + 0x16e8) = 0;
    FUN_00432ad0(local_14);
    local_28 = 0x42a00000;
    local_24 = 0x41800000;
    local_20 = 0;
    _DAT_00481b24 = in_ECX[4] << 0x18 | 0xffff80;
    FUN_00401650(&DAT_0047b900,&local_28,&DAT_0046ac68,in_ECX[5]);
    local_94 = 0x43c00000;
    local_90 = 0x41800000;
    local_8c = 0;
    local_28 = 0x43c00000;
    local_24 = 0x41800000;
    local_20 = 0;
    if ((int)in_ECX[6] < 0x14) {
      if ((int)in_ECX[6] < 10) {
        if ((int)in_ECX[6] < 5) {
          local_1c = DAT_004764ac;
        }
        else {
          local_1c = DAT_004764a8;
        }
      }
      else {
        local_1c = DAT_004764a4;
      }
    }
    else {
      local_1c = DAT_004764a0;
    }
    _DAT_00481b24 = in_ECX[4] << 0x18 | local_1c;
    if ((int)in_ECX[6] < 100) {
      local_1e8 = in_ECX[6];
    }
    else {
      local_1e8 = 99;
    }
    local_18 = local_1e8;
    if (((int)local_1e8 < 10) && (in_ECX[7] != in_ECX[6])) {
      FUN_004311e0(0x1d,0);
    }
    FUN_00401650(&DAT_0047b900,&local_28,&DAT_0046ac60,local_18);
    _DAT_00481b24 = 0xffffffff;
    in_ECX[7] = in_ECX[6];
  }
  g_GameContext._200_4_ = 0;
  g_GameContext._204_4_ = 0;
  g_GameContext._208_4_ = 0x280;
  g_GameContext._212_4_ = 0x1e0;
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
  local_14 = in_ECX[1] + 0x660;
  if ((((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) == 0) &&
     (((*(int *)(in_ECX[1] + 0x71c) != 0 || (g_GameContext._408_4_ != 0)) ||
      (((uint)g_GameContext.cfg.field34_0x34 >> 3 & 1 |
       (uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)))) {
    for (local_8 = 0.0; local_8 < 464.0 != NAN(local_8); local_8 = local_8 + 32.0) {
      local_a0 = 0;
      local_9c = local_8;
      local_98 = 0x3efae148;
      *(undefined4 *)(local_14 + 0x90) = 0;
      *(float *)(local_14 + 0x94) = local_8;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    for (local_c = 416.0; local_c < 624.0 != NAN(local_c); local_c = local_c + 32.0) {
      for (local_8 = 0.0; local_8 < 464.0 != NAN(local_8); local_8 = local_8 + 32.0) {
        local_ac = local_c;
        local_a8 = local_8;
        local_a4 = 0x3efae148;
        *(float *)(local_14 + 0x90) = local_c;
        *(float *)(local_14 + 0x94) = local_8;
        *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
        FUN_00432ad0(local_14);
      }
    }
    local_14 = in_ECX[1] + 0x770;
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_b8 = local_c;
      local_b4 = 0;
      local_b0 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    local_14 = in_ECX[1] + 0x880;
    for (local_c = 32.0; local_c < 416.0 != NAN(local_c); local_c = local_c + 32.0) {
      local_c4 = local_c;
      local_c0 = 0x43e80000;
      local_bc = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x43e80000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    FUN_00432cc0((void *)(in_ECX[1] + 0x550));
    FUN_00432cc0((void *)in_ECX[1]);
    FUN_00432cc0((void *)(in_ECX[1] + 0x110));
    FUN_00432cc0((void *)(in_ECX[1] + 0x330));
    FUN_00432cc0((void *)(in_ECX[1] + 0x440));
    FUN_00432cc0((void *)(in_ECX[1] + 0x220));
    FUN_00432ad0(in_ECX[1] + 0x990);
    FUN_00432ad0(in_ECX[1] + 0xaa0);
    FUN_00432ad0(in_ECX[1] + 0xbb0);
    FUN_00432ad0(in_ECX[1] + 0xcc0);
    FUN_00432ad0(in_ECX[1] + 0xdd0);
    FUN_00432ad0(in_ECX[1] + 0xee0);
    FUN_00432ad0(in_ECX[1] + 0xff0);
    *in_ECX = *in_ECX & 0xfffffffc | 2;
    *in_ECX = *in_ECX & 0xfffffff3 | 8;
    *in_ECX = *in_ECX & 0xffffff3f | 0x80;
    *in_ECX = *in_ECX & 0xfffffcff | 0x200;
    *in_ECX = *in_ECX & 0xffffffcf | 0x20;
  }
  if (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) == 0) {
    uVar1 = in_ECX[1];
    local_14 = uVar1 + 0x1760;
    local_c = 496.0;
    local_d0 = 0x43f80000;
    local_cc = 0x42680000;
    local_c8 = 0x3efae148;
    *(undefined4 *)(uVar1 + 0x17f0) = 0x43f80000;
    *(undefined4 *)(uVar1 + 0x17f4) = 0x42680000;
    *(undefined4 *)(uVar1 + 0x17f8) = 0x3efae148;
    FUN_00432ad0(local_14);
    local_dc = local_c;
    local_d8 = 0x42a40000;
    local_d4 = 0x3efae148;
    *(float *)(local_14 + 0x90) = local_c;
    *(undefined4 *)(local_14 + 0x94) = 0x42a40000;
    *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
    FUN_00432ad0(local_14);
    if ((*in_ECX & 3) != 0) {
      local_e8 = local_c;
      local_e4 = 0x42f40000;
      local_e0 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x42f40000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    if ((*in_ECX >> 2 & 3) != 0) {
      local_f4 = local_c;
      local_f0 = 0x43120000;
      local_ec = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x43120000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    if ((*in_ECX >> 4 & 3) != 0) {
      local_100 = local_c;
      local_fc = 0x433a0000;
      local_f8 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x433a0000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    if ((*in_ECX >> 6 & 3) != 0) {
      local_10c = local_c;
      local_108 = 0x434e0000;
      local_104 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x434e0000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    if ((*in_ECX >> 8 & 3) != 0) {
      local_118 = local_c;
      local_114 = 0x43620000;
      local_110 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x43620000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
    }
    local_124 = 0x43f40000;
    local_120 = 0x43e80000;
    local_11c = 0x3efae148;
    *(undefined4 *)(local_14 + 0x90) = 0x43f40000;
    *(undefined4 *)(local_14 + 0x94) = 0x43e80000;
    *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
    FUN_00432ad0(local_14);
    local_130 = 0;
    local_12c = 0x43e80000;
    local_128 = 0x3efae148;
    *(undefined4 *)(local_14 + 0x90) = 0;
    *(undefined4 *)(local_14 + 0x94) = 0x43e80000;
    *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
    FUN_00432ad0(local_14);
  }
  if (((*in_ECX & 3) != 0) || (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)) {
    local_14 = in_ECX[1] + 0x1100;
    local_c = 496.0;
    for (local_10 = 0; local_10 < DAT_0069d4ba; local_10 = local_10 + 1) {
      local_13c = local_c;
      local_138 = 0x42f40000;
      local_134 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x42f40000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
      local_c = local_c + 16.0;
    }
  }
  if (((*in_ECX >> 2 & 3) != 0) || (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)) {
    local_14 = in_ECX[1] + 0x1210;
    local_c = 496.0;
    for (local_10 = 0; local_10 < DAT_0069d4bb; local_10 = local_10 + 1) {
      local_148 = local_c;
      local_144 = 0x43120000;
      local_140 = 0x3efae148;
      *(float *)(local_14 + 0x90) = local_c;
      *(undefined4 *)(local_14 + 0x94) = 0x43120000;
      *(undefined4 *)(local_14 + 0x98) = 0x3efae148;
      FUN_00432ad0(local_14);
      local_c = local_c + 16.0;
    }
  }
  if (((*in_ECX >> 4 & 3) != 0) || (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)) {
    local_1c0 = 4;
    do {
      local_1c0 = local_1c0 + -1;
    } while (-1 < local_1c0);
    if (_DAT_0069d4b0 != 0) {
      local_154 = 0x43f80000;
      local_150 = 0x433a0000;
      local_14c = 0x3dcccccd;
      local_7c = 0x43f80000;
      uStack_78 = 0x433a0000;
      uStack_74 = 0x3dcccccd;
      local_160 = (float)(_DAT_0069d4b0 + 0x1f0) + 0.0;
      local_15c = 0x433a0000;
      local_158 = 0x3dcccccd;
      uStack_64 = 0x433a0000;
      uStack_60 = 0x3dcccccd;
      local_16c = 0x43f80000;
      local_168 = 0x434a0000;
      local_164 = 0x3dcccccd;
      local_54 = 0x43f80000;
      uStack_50 = 0x434a0000;
      uStack_4c = 0x3dcccccd;
      local_178 = (float)(_DAT_0069d4b0 + 0x1f0) + 0.0;
      local_174 = 0x434a0000;
      local_170 = 0x3dcccccd;
      uStack_3c = 0x434a0000;
      uStack_38 = 0x3dcccccd;
      local_44 = 0xe0e0e0ff;
      local_6c = 0xe0e0e0ff;
      local_30 = 0x80e0e0ff;
      local_58 = 0x80e0e0ff;
      local_34 = 0x3f800000;
      local_48 = 0x3f800000;
      local_5c = 0x3f800000;
      local_70 = 0x3f800000;
      local_68 = local_160;
      local_40 = local_178;
      if (((uint)g_GameContext.cfg.field34_0x34 >> 8 & 1) == 0) {
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,4,2);
        (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,1,2);
      }
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,5,0);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0xfc))(g_GameContext._8_4_,0,2,0);
      if (((uint)g_GameContext.cfg.field34_0x34 >> 6 & 1) == 0) {
        (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0x17,8);
        (**(code **)(*(int *)g_GameContext._8_4_ + 200))(g_GameContext._8_4_,0xe,0);
      }
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x130))(g_GameContext._8_4_,0x44);
      (**(code **)(*(int *)g_GameContext._8_4_ + 0x120))(g_GameContext._8_4_,5,2,&local_7c,0x14);
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
      if (0x7f < _DAT_0069d4b0) {
        uVar1 = in_ECX[1];
        local_14 = uVar1 + 0x1320;
        local_184 = 0x43f80000;
        local_180 = 0x433a0000;
        local_17c = 0;
        *(undefined4 *)(uVar1 + 0x13b0) = 0x43f80000;
        *(undefined4 *)(uVar1 + 0x13b4) = 0x433a0000;
        *(undefined4 *)(uVar1 + 0x13b8) = 0;
        FUN_00432ad0(local_14);
      }
    }
    if (_DAT_0069d4b0 < 0x80) {
      local_190 = 0x43f80000;
      local_18c = 0x433a0000;
      local_188 = 0;
      FUN_00401650(&DAT_0047b900,&local_190,&DAT_0046ac68,_DAT_0069d4b0);
    }
  }
  local_88 = 0x43f80000;
  local_84 = 0x42a40000;
  local_80 = 0;
  FUN_00401650(&DAT_0047b900,&local_88,&DAT_0046ac24,DAT_0069bca0);
  local_88 = 0x43f80000;
  local_84 = 0x42680000;
  local_80 = 0;
  FUN_00401650(&DAT_0047b900,&local_88,&DAT_0046ac24,DAT_0069bcac);
  if (((*in_ECX >> 6 & 3) != 0) || (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)) {
    local_88 = 0x43f80000;
    local_84 = 0x434e0000;
    local_80 = 0;
    FUN_00401650(&DAT_0047b900,&local_88,&DAT_0046ac68,DAT_0069bcb4);
  }
  if (((*in_ECX >> 8 & 3) != 0) || (((uint)g_GameContext.cfg.field34_0x34 >> 4 & 1) != 0)) {
    local_88 = 0x43f80000;
    local_84 = 0x43620000;
    local_80 = 0;
    FUN_00401650(&DAT_0047b900,&local_88,&DAT_0046ac68,DAT_0069d4b4);
  }
  if ((*in_ECX & 3) != 0) {
    *in_ECX = *in_ECX & 0xfffffffc | (*in_ECX & 3) - 1 & 3;
  }
  if ((*in_ECX >> 4 & 3) != 0) {
    *in_ECX = *in_ECX & 0xffffffcf | ((*in_ECX >> 4 & 3) - 1 & 3) << 4;
  }
  if ((*in_ECX >> 2 & 3) != 0) {
    *in_ECX = *in_ECX & 0xfffffff3 | ((*in_ECX >> 2 & 3) - 1 & 3) << 2;
  }
  if ((*in_ECX >> 6 & 3) != 0) {
    *in_ECX = *in_ECX & 0xffffff3f | ((*in_ECX >> 6 & 3) - 1 & 3) << 6;
  }
  if ((*in_ECX >> 8 & 3) != 0) {
    *in_ECX = *in_ECX & 0xfffffcff | ((*in_ECX >> 8 & 3) - 1 & 3) << 8;
  }
  return;
}

