
void FUN_0041cfc0(uint param_1)

{
  MMRESULT MVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 uVar4;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  joyinfoex_tag *pjVar5;
  int *piVar6;
  uint unaff_retaddr;
  int local_160;
  int local_15c [12];
  undefined local_12c [224];
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  joyinfoex_tag local_38;
  
  local_4c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext._20_4_ == 0) {
    pjVar5 = &local_38;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      pjVar5->dwSize = 0;
      pjVar5 = (joyinfoex_tag *)&pjVar5->dwFlags;
    }
    local_38.dwSize = 0x34;
    local_38.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&local_38);
    if (MVar1 == 0) {
      local_40 = FUN_0041d600(&param_1,CONCAT22(extraout_var_06,(short)DAT_004765a0),1,
                              local_38.dwButtons);
      iVar3 = (int)(short)DAT_004765a0;
      if (iVar3 == (short)DAT_004765a4) {
        if (local_40 == 0) {
          uVar4 = 0;
          if (DAT_0069d8f4 < 9) {
            DAT_0069d8f4 = 0;
          }
          else {
            DAT_0069d8f4 = DAT_0069d8f4 - 8;
          }
        }
        else {
          if (DAT_0069d8f4 < 0x10) {
            DAT_0069d8f4 = DAT_0069d8f4 + 1;
            iVar3 = CONCAT22((short)DAT_004765a0 >> 0xf,DAT_0069d8f4);
          }
          uVar4 = (undefined2)((uint)iVar3 >> 0x10);
          if (7 < DAT_0069d8f4) {
            param_1 = param_1 | 4;
          }
        }
      }
      else {
        FUN_0041d600(&param_1,CONCAT22((short)DAT_004765a0 >> 0xf,(short)DAT_004765a4),4,
                     local_38.dwButtons);
        uVar4 = extraout_var;
      }
      FUN_0041d600(&param_1,CONCAT22(uVar4,g_GameContext.cfg._2_2_),2,local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_00,g_GameContext.cfg._6_2_),8,local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_01,g_GameContext.cfg._8_2_),0x10,
                   local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_02,g_GameContext.cfg._10_2_),0x20,
                   local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_03,g_GameContext.cfg._12_2_),0x40,
                   local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_04,g_GameContext.cfg._14_2_),0x80,
                   local_38.dwButtons);
      FUN_0041d600(&param_1,CONCAT22(extraout_var_05,g_GameContext.cfg._16_2_),0x100,
                   local_38.dwButtons);
      uVar2 = (uint)(DAT_0069d788 - DAT_0069d784) >> 2;
      local_3c = (uint)(DAT_0069d790 - DAT_0069d78c) >> 2;
      param_1 = CONCAT22(param_1._2_2_,
                         (ushort)param_1 |
                         -(ushort)(((uint)(DAT_0069d784 + DAT_0069d788) >> 1) + uVar2 <
                                  local_38.dwXpos) & 0x80 |
                         -(ushort)(local_38.dwXpos <
                                  ((uint)(DAT_0069d784 + DAT_0069d788) >> 1) - uVar2) & 0x40 |
                         -(ushort)(((uint)(DAT_0069d78c + DAT_0069d790) >> 1) + local_3c <
                                  local_38.dwYpos) & 0x20 |
                         -(ushort)(local_38.dwYpos <
                                  ((uint)(DAT_0069d78c + DAT_0069d790) >> 1) - local_3c) & 0x10);
    }
  }
  else {
    local_48 = (**(code **)(*(int *)g_GameContext._20_4_ + 100))(g_GameContext._20_4_);
    if (local_48 < 0) {
      local_160 = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      local_48 = (**(code **)(*(int *)g_GameContext._20_4_ + 0x1c))(g_GameContext._20_4_);
      do {
        if (local_48 != -0x7ff8ffe2) break;
        local_48 = (**(code **)(*(int *)g_GameContext._20_4_ + 0x1c))(g_GameContext._20_4_);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",local_160);
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
      piVar6 = local_15c;
      for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      local_48 = (**(code **)(*(int *)g_GameContext._20_4_ + 0x24))
                           (g_GameContext._20_4_,0x110,local_15c);
      if (-1 < local_48) {
        local_44 = FUN_0041d580(&param_1,g_GameContext.cfg._0_2_,1,local_12c);
        iVar3 = (int)(short)DAT_004765a0;
        if (iVar3 == (short)DAT_004765a4) {
          if (local_44 == 0) {
            uVar4 = 0;
            if (DAT_0069d8f4 < 9) {
              DAT_0069d8f4 = 0;
            }
            else {
              DAT_0069d8f4 = DAT_0069d8f4 - 8;
            }
          }
          else {
            if (DAT_0069d8f4 < 0x10) {
              DAT_0069d8f4 = DAT_0069d8f4 + 1;
              iVar3 = CONCAT22((short)DAT_004765a0 >> 0xf,DAT_0069d8f4);
            }
            uVar4 = (undefined2)((uint)iVar3 >> 0x10);
            if (7 < DAT_0069d8f4) {
              param_1 = param_1 | 4;
            }
          }
        }
        else {
          FUN_0041d580(&param_1,CONCAT22((short)DAT_004765a0 >> 0xf,g_GameContext.cfg._4_2_),4,
                       local_12c);
          uVar4 = extraout_var_07;
        }
        FUN_0041d580(&param_1,CONCAT22(uVar4,g_GameContext.cfg._2_2_),2,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_08,g_GameContext.cfg._6_2_),8,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_09,g_GameContext.cfg._8_2_),0x10,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_10,g_GameContext.cfg._10_2_),0x20,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_11,g_GameContext.cfg._12_2_),0x40,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_12,g_GameContext.cfg._14_2_),0x80,local_12c);
        FUN_0041d580(&param_1,CONCAT22(extraout_var_13,g_GameContext.cfg._16_2_),0x100,local_12c);
        param_1 = CONCAT22(param_1._2_2_,
                           (ushort)param_1 |
                           (local_15c[0] <= (short)g_GameContext.cfg.padAxisX) - 1 & 0x80 |
                           (SBORROW4(local_15c[0],-(int)(short)g_GameContext.cfg.padAxisX) ==
                           local_15c[0] + (short)g_GameContext.cfg.padAxisX < 0) - 1 & 0x40 |
                           (local_15c[1] <= (short)g_GameContext.cfg.padAxisY) - 1 & 0x20 |
                           (SBORROW4(local_15c[1],-(int)(short)g_GameContext.cfg.padAxisY) ==
                           local_15c[1] + (short)g_GameContext.cfg.padAxisY < 0) - 1 & 0x10);
      }
    }
  }
  __security_check_cookie(local_4c ^ unaff_retaddr);
  return;
}

