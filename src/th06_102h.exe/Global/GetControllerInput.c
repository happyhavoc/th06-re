
ushort GetControllerInput(ushort buttons)

{
  ushort uVar1;
  MMRESULT MVar2;
  undefined2 extraout_var;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  joyinfoex_tag *pjVar6;
  int *piVar7;
  uint unaff_retaddr;
  int local_160;
  int local_15c [12];
  undefined local_12c [224];
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  joyinfoex_tag joyconPos;
  
  local_4c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext._20_4_ == 0) {
    pjVar6 = &joyconPos;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      pjVar6->dwSize = 0;
      pjVar6 = (joyinfoex_tag *)&pjVar6->dwFlags;
    }
    joyconPos.dwSize = 0x34;
    joyconPos.dwFlags = 0xff;
    MVar2 = joyGetPosEx(0,&joyconPos);
    if (MVar2 == 0) {
      uVar1 = setButtonFromControllerInputs
                        (&buttons,g_ControllerMapping.shootButton,SHOOT,joyconPos.dwButtons);
      local_40 = CONCAT22(extraout_var,uVar1);
      if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
        if (local_40 == 0) {
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
          }
          if (7 < DAT_0069d8f4) {
            buttons = buttons | 4;
          }
        }
      }
      else {
        setButtonFromControllerInputs
                  (&buttons,g_ControllerMapping.focusButton,FOCUS,joyconPos.dwButtons);
      }
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.bombButton,BOMB,joyconPos.dwButtons);
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.menuButton,MENU,joyconPos.dwButtons);
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.upButton,UP,joyconPos.dwButtons);
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.downButton,DOWN,joyconPos.dwButtons);
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.leftButton,LEFT,joyconPos.dwButtons);
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.rightButton,RIGHT,joyconPos.dwButtons)
      ;
      setButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.unkButton,0x100,joyconPos.dwButtons);
      uVar3 = JOYSTICK_CAPS.wXmax - JOYSTICK_CAPS.wXmin >> 2;
      local_3c = JOYSTICK_CAPS.wYmax - JOYSTICK_CAPS.wYmin >> 2;
      buttons = buttons | -(ushort)((JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) + uVar3 <
                                   joyconPos.dwXpos) & RIGHT |
                -(ushort)(joyconPos.dwXpos <
                         (JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) - uVar3) & LEFT |
                -(ushort)((JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) + local_3c <
                         joyconPos.dwYpos) & DOWN |
                -(ushort)(joyconPos.dwYpos <
                         (JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) - local_3c) & UP;
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
      piVar7 = local_15c;
      for (iVar4 = 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      local_48 = (**(code **)(*(int *)g_GameContext._20_4_ + 0x24))
                           (g_GameContext._20_4_,0x110,local_15c);
      if (-1 < local_48) {
        local_44 = FUN_0041d580(&buttons,g_GameContext.cfg.controllerMapping.shootButton,1,local_12c
                               );
        iVar4 = (int)g_ControllerMapping.shootButton;
        if (iVar4 == g_ControllerMapping.focusButton) {
          if (local_44 == 0) {
            uVar5 = 0;
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
              iVar4 = CONCAT22(g_ControllerMapping.shootButton >> 0xf,DAT_0069d8f4);
            }
            uVar5 = (undefined2)((uint)iVar4 >> 0x10);
            if (7 < DAT_0069d8f4) {
              buttons = buttons | 4;
            }
          }
        }
        else {
          FUN_0041d580(&buttons,CONCAT22(g_ControllerMapping.shootButton >> 0xf,
                                         g_GameContext.cfg.controllerMapping.focusButton),4,
                       local_12c);
          uVar5 = extraout_var_00;
        }
        FUN_0041d580(&buttons,CONCAT22(uVar5,g_GameContext.cfg.controllerMapping.bombButton),2,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_01,
                                       g_GameContext.cfg.controllerMapping.menuButton),8,local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_02,g_GameContext.cfg.controllerMapping.upButton)
                     ,0x10,local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_03,
                                       g_GameContext.cfg.controllerMapping.downButton),0x20,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_04,
                                       g_GameContext.cfg.controllerMapping.leftButton),0x40,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_05,
                                       g_GameContext.cfg.controllerMapping.rightButton),0x80,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_06,g_GameContext.cfg.controllerMapping.unkButton
                                      ),0x100,local_12c);
        buttons = buttons | (local_15c[0] <= (short)g_GameContext.cfg.padAxisX) - 1 & 0x80 |
                  (SBORROW4(local_15c[0],-(int)(short)g_GameContext.cfg.padAxisX) ==
                  local_15c[0] + (short)g_GameContext.cfg.padAxisX < 0) - 1 & 0x40 |
                  (local_15c[1] <= (short)g_GameContext.cfg.padAxisY) - 1 & 0x20 |
                  (SBORROW4(local_15c[1],-(int)(short)g_GameContext.cfg.padAxisY) ==
                  local_15c[1] + (short)g_GameContext.cfg.padAxisY < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(local_4c ^ unaff_retaddr);
  return buttons;
}

