
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042e446(int param_1)

{
  float *pfVar1;
  uint unaff_retaddr;
  int local_d0;
  int local_8c;
  int local_84;
  undefined local_5c;
  undefined local_5b;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined local_1c;
  uint local_18;
  int local_14;
  float local_10;
  float local_c;
  float fStack_8;
  
  local_18 = __security_cookie ^ unaff_retaddr;
  local_28 = param_1 + 0x40;
  g_GameContext._200_4_ = 0;
  g_GameContext._204_4_ = 0;
  g_GameContext._208_4_ = 0x280;
  g_GameContext._212_4_ = 0x1e0;
  (**(code **)(*(int *)g_GameContext._8_4_ + 0xa0))(g_GameContext._8_4_,0x6c6de0);
  FUN_00435300(0,0,0,0,0);
  for (local_14 = 0; local_14 < 0x26; local_14 = local_14 + 1) {
    local_40 = *(float *)(local_28 + 0x90);
    local_3c = *(float *)(local_28 + 0x94);
    fStack_38 = *(float *)(local_28 + 0x98);
    *(float *)(local_28 + 0x90) = *(float *)(local_28 + 0x90) + *(float *)(local_28 + 0xe4);
    *(float *)(local_28 + 0x94) = *(float *)(local_28 + 0x94) + *(float *)(local_28 + 0xe8);
    *(float *)(local_28 + 0x98) = *(float *)(local_28 + 0x98) + *(float *)(local_28 + 0xec);
    FUN_00432ad0(local_28);
    *(float *)(local_28 + 0x90) = local_40;
    *(float *)(local_28 + 0x94) = local_3c;
    *(float *)(local_28 + 0x98) = fStack_38;
    local_28 = local_28 + 0x110;
  }
  local_28 = param_1 + 0xf20;
  if (*(float *)(param_1 + 0xfb0) < 640.0 != NAN(*(float *)(param_1 + 0xfb0))) {
    if (*(int *)(param_1 + 0xc) == 8) {
      local_40 = *(float *)(param_1 + 0xfb0);
      fStack_38 = *(float *)(param_1 + 0xfb8);
      local_3c = *(float *)(param_1 + 0xfb4) + 16.0;
      for (local_14 = 0;
          (local_14 < 10 && (local_44 = *(int *)(param_1 + 0x28) * 10 + local_14, local_44 < 0x40));
          local_14 = local_14 + 1) {
        pfVar1 = (float *)(param_1 + 0x2930 + local_14 * 0x110);
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = fStack_38;
        if (*(short *)(&DAT_0069bd0c + local_44 * 0x40) == 0) {
          _DAT_00481b24 = -0x7f3f3f01;
        }
        else if (*(short *)(&DAT_0069bd0e + local_44 * 0x40) == 0) {
          _DAT_00481b24 = -0x3f5f60;
        }
        else {
          _DAT_00481b24 = local_14 * -0x80800 + -0xf0f01;
        }
        FUN_00401650(&DAT_0047b900,&local_40,"No.%.2d",local_44 + 1);
        pfVar1 = (float *)(param_1 + 0x2930 + local_14 * 0x110);
        *pfVar1 = *pfVar1 + 96.0;
        FUN_00432ad0(param_1 + 0x28a0 + local_14 * 0x110);
        local_40 = local_40 + 368.0;
        FUN_00401650(&DAT_0047b900,&local_40,"%3d/%3d",
                     *(undefined2 *)(&DAT_0069bd0e + local_44 * 0x40),
                     *(undefined2 *)(&DAT_0069bd0c + local_44 * 0x40));
        local_40 = local_40 - 368.0;
        local_3c = local_3c + 30.0;
      }
    }
    else {
      local_40 = *(float *)(param_1 + 0xfb0);
      local_3c = *(float *)(param_1 + 0xfb4);
      fStack_38 = *(float *)(param_1 + 0xfb8);
      *(float *)(param_1 + 0x2930) = local_40;
      *(float *)(param_1 + 0x2934) = local_3c;
      *(float *)(param_1 + 0x2938) = fStack_38;
      FUN_00432ad0(param_1 + 0x28a0);
      local_40 = local_40 + 320.0;
      *(float *)(param_1 + 0x2a40) = local_40;
      *(float *)(param_1 + 0x2a44) = local_3c;
      *(float *)(param_1 + 0x2a48) = fStack_38;
      FUN_00432ad0(param_1 + 0x29b0);
      local_40 = local_40 - 320.0;
      local_3c = local_3c + 18.0;
      local_2c = *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 0x30 + 0x3ab4 +
                         *(int *)(param_1 + 0x24) * 0x18);
      local_34 = *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 0x30 + 0x3ab4 +
                         (*(int *)(param_1 + 0x24) * 2 + 1) * 0xc);
      for (local_14 = 0; local_3c = local_3c + 18.0, local_14 < 10; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 8) == 9) {
          if (DAT_0069d4be == 0) {
            if (*(char *)(*(int *)(local_2c + 8) + 9) == '\0') {
              _DAT_00481b24 = 0x80ffffc0;
            }
            else {
              _DAT_00481b24 = 0xfff0f0ff;
              local_24 = 0x20202020;
              local_20 = 0x20202020;
              local_1c = 0;
              if (*(int *)(param_1 + 0x10) < 8) {
                local_84 = *(int *)(param_1 + 0x10);
              }
              else {
                local_84 = 7;
              }
              *(undefined *)((int)&local_24 + local_84) = 0x5f;
              FUN_00401650(&DAT_0047b900,&local_40,"   %8s",&local_24);
            }
          }
          else {
            _DAT_00481b24 = 0x80ffc0c0;
          }
        }
        else {
          _DAT_00481b24 = 0xffffc0c0;
        }
        FUN_00401650(&DAT_0047b900,&local_40,&PTR_DAT_0046bdd0,local_14 + 1);
        local_40 = local_40 + 36.0;
        if (*(byte *)(*(int *)(local_2c + 8) + 0x12) < 7) {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(%d)",*(int *)(local_2c + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_2c + 8) + 0xc),
                       *(undefined *)(*(int *)(local_2c + 8) + 0x12));
        }
        else if (*(char *)(*(int *)(local_2c + 8) + 0x12) == '\a') {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(1)",*(int *)(local_2c + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_2c + 8) + 0xc));
        }
        else {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(C)",*(int *)(local_2c + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_2c + 8) + 0xc));
        }
        local_40 = local_40 + 300.0;
        if (*(int *)(param_1 + 8) == 9) {
          if (DAT_0069d4be == 1) {
            if (*(char *)(*(int *)(local_34 + 8) + 9) == '\0') {
              _DAT_00481b24 = -0x3f3f3f01;
            }
            else {
              _DAT_00481b24 = -0xf10;
              local_24 = 0x20202020;
              local_20 = 0x20202020;
              local_1c = 0;
              if (*(int *)(param_1 + 0x10) < 8) {
                local_8c = *(int *)(param_1 + 0x10);
              }
              else {
                local_8c = 7;
              }
              *(undefined *)((int)&local_24 + local_8c) = 0x5f;
              FUN_00401650(&DAT_0047b900,&local_40,&DAT_0046bda0,&local_24);
            }
          }
          else {
            _DAT_00481b24 = -0x7f3f3f01;
          }
        }
        else {
          _DAT_00481b24 = -0x3f3f01;
        }
        if (*(byte *)(*(int *)(local_34 + 8) + 0x12) < 7) {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(%d)",*(int *)(local_34 + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_34 + 8) + 0xc),
                       *(undefined *)(*(int *)(local_34 + 8) + 0x12));
        }
        else if (*(char *)(*(int *)(local_34 + 8) + 0x12) == '\a') {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(1)",*(int *)(local_34 + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_34 + 8) + 0xc));
        }
        else {
          FUN_00401650(&DAT_0047b900,&local_40,"%8s %9d(C)",*(int *)(local_34 + 8) + 0x13,
                       *(undefined4 *)(*(int *)(local_34 + 8) + 0xc));
        }
        local_40 = local_40 - 336.0;
        local_2c = *(int *)(local_2c + 4);
        local_34 = *(int *)(local_34 + 4);
      }
    }
  }
  if ((*(int *)(param_1 + 8) == 9) || (*(int *)(param_1 + 8) == 0xd)) {
    local_40 = 160.0;
    local_3c = 356.0;
    fStack_38 = 0.0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
        local_48 = 0.0;
        if (*(int *)(param_1 + 0x20) == local_14 * 0x10 + local_30) {
          _DAT_00481b24 = -0x40;
          if (*(int *)(param_1 + 4) % 0x40 < 0x20) {
            local_48 = ((float)(*(int *)(param_1 + 4) % 0x20) * 0.8) / 32.0 + 1.2;
          }
          else {
            local_48 = 2.0 - ((float)(*(int *)(param_1 + 4) % 0x20) * 0.8) / 32.0;
          }
          _DAT_00481b2c = local_48;
          local_48 = -(local_48 - 1.0) * 8.0;
        }
        else {
          _DAT_00481b24 = 0x60c0c0c0;
          _DAT_00481b2c = 1.0;
        }
        fStack_8 = fStack_38;
        local_10 = local_40 + local_48;
        local_c = local_3c + local_48;
        local_5c = PTR_DAT_004784d4[local_14 * 0x10 + local_30];
        local_5b = 0;
        if (local_14 == 5) {
          if (local_30 == 0xe) {
            local_5c = 0x80;
          }
          else if (local_30 == 0xf) {
            local_5c = 0x81;
          }
        }
        _DAT_00481b28 = _DAT_00481b2c;
        local_4c = local_48;
        FUN_00401530(&local_10,&local_5c);
        local_40 = local_40 + 20.0;
      }
      local_40 = local_40 - (float)(local_30 * 0x14);
      local_3c = local_3c + 18.0;
    }
  }
  _DAT_00481b28 = 1.0;
  _DAT_00481b2c = 1.0;
  if ((9 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0xf)) {
    local_28 = param_1 + 0x1030;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      FUN_00432ad0(local_28);
      local_28 = local_28 + 0x110;
    }
    local_40 = *(float *)(param_1 + 0x1720);
    local_3c = *(float *)(param_1 + 0x1724);
    fStack_38 = *(float *)(param_1 + 0x1728);
    local_28 = param_1 + 0x17a0;
    FUN_00401650(&DAT_0047b900,&local_40,"No.   Name     Date     Player Score");
    for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
      local_40 = *(float *)(local_28 + 0x90);
      local_3c = *(float *)(local_28 + 0x94);
      fStack_38 = *(float *)(local_28 + 0x98);
      local_28 = local_28 + 0x110;
      if (local_14 == *(int *)(param_1 + 0x1c)) {
        _DAT_00481b24 = 0xffff8080;
      }
      else {
        _DAT_00481b24 = 0xff808080;
      }
      if (*(int *)(param_1 + 8) == 0xd) {
        FUN_00401650(&DAT_0047b900,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,param_1 + 0x34,
                     param_1 + 0x5670,
                     (&PTR_s_ReimuA_00478518)[(uint)DAT_0069d4be + (uint)DAT_0069d4bd * 2],
                     *(undefined4 *)(param_1 + 0x5684));
        _DAT_00481b24 = 0xfff0f0ff;
        local_24 = 0x20202020;
        local_20 = 0x20202020;
        local_1c = 0;
        if (*(int *)(param_1 + 0x10) < 8) {
          local_d0 = *(int *)(param_1 + 0x10);
        }
        else {
          local_d0 = 7;
        }
        *(undefined *)((int)&local_24 + local_d0) = 0x5f;
        FUN_00401650(&DAT_0047b900,&local_40,"      %8s",&local_24);
      }
      else if ((*(int *)(param_1 + 0x51b0 + local_14 * 0x50) == 0x50523654) &&
              (*(short *)(param_1 + 0x51b4 + local_14 * 0x50) == 0x102)) {
        FUN_00401650(&DAT_0047b900,&local_40,"No.%.2d %8s %8s %7s %9d",local_14 + 1,
                     param_1 + 0x51c9 + local_14 * 0x50,param_1 + 0x51c0 + local_14 * 0x50,
                     (&PTR_s_ReimuA_00478518)[*(byte *)(param_1 + 0x51b6 + local_14 * 0x50)],
                     *(undefined4 *)(param_1 + 0x51d4 + local_14 * 0x50));
      }
      else {
        FUN_00401650(&DAT_0047b900,&local_40,"No.%.2d -------- --/--/-- -------         0",
                     local_14 + 1);
      }
    }
  }
  _DAT_00481b24 = 0xffffffff;
  FUN_0042d35a();
  __security_check_cookie(local_18 ^ unaff_retaddr);
  return;
}

