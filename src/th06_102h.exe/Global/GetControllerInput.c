
ushort GetControllerInput(ushort buttons)

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
  joyinfoex_tag *pjVar5;
  int *piVar6;
  uint unaff_retaddr;
  int local_160;
  int local_15c [12];
  undefined local_12c [224];
  uint local_4c;
  HRESULT local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  joyinfoex_tag joyconPos;
  
  local_4c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    pjVar5 = &joyconPos;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      pjVar5->dwSize = 0;
      pjVar5 = (joyinfoex_tag *)&pjVar5->dwFlags;
    }
    joyconPos.dwSize = 0x34;
    joyconPos.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&joyconPos);
    if (MVar1 == 0) {
      local_40 = SetButtonFromControllerInputs
                           (&buttons,g_ControllerMapping.shootButton,SHOOT,joyconPos.dwButtons);
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
        SetButtonFromControllerInputs
                  (&buttons,g_ControllerMapping.focusButton,FOCUS,joyconPos.dwButtons);
      }
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.bombButton,BOMB,joyconPos.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.menuButton,MENU,joyconPos.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.upButton,UP,joyconPos.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.downButton,DOWN,joyconPos.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.leftButton,LEFT,joyconPos.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.rightButton,RIGHT,joyconPos.dwButtons)
      ;
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.unkButton,0x100,joyconPos.dwButtons);
      uVar2 = JOYSTICK_CAPS.wXmax - JOYSTICK_CAPS.wXmin >> 2;
      local_3c = JOYSTICK_CAPS.wYmax - JOYSTICK_CAPS.wYmin >> 2;
      buttons = buttons | -(ushort)((JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) + uVar2 <
                                   joyconPos.dwXpos) & RIGHT |
                -(ushort)(joyconPos.dwXpos <
                         (JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) - uVar2) & LEFT |
                -(ushort)((JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) + local_3c <
                         joyconPos.dwYpos) & DOWN |
                -(ushort)(joyconPos.dwYpos <
                         (JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) - local_3c) & UP;
    }
  }
  else {
    local_48 = (*(g_GameContext.controller)->lpVtbl->Poll)(g_GameContext.controller);
    if (local_48 < 0) {
      local_160 = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      local_48 = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
      do {
        if (local_48 != -0x7ff8ffe2) break;
        local_48 = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
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
      local_48 = (*(g_GameContext.controller)->lpVtbl->GetDeviceState)
                           (g_GameContext.controller,0x110,local_15c);
      if (-1 < local_48) {
        local_44 = FUN_0041d580(&buttons,g_GameContext.cfg.controllerMapping.shootButton,1,local_12c
                               );
        iVar3 = (int)g_ControllerMapping.shootButton;
        if (iVar3 == g_ControllerMapping.focusButton) {
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
              iVar3 = CONCAT22(g_ControllerMapping.shootButton >> 0xf,DAT_0069d8f4);
            }
            uVar4 = (undefined2)((uint)iVar3 >> 0x10);
            if (7 < DAT_0069d8f4) {
              buttons = buttons | 4;
            }
          }
        }
        else {
          FUN_0041d580(&buttons,CONCAT22(g_ControllerMapping.shootButton >> 0xf,
                                         g_GameContext.cfg.controllerMapping.focusButton),4,
                       local_12c);
          uVar4 = extraout_var;
        }
        FUN_0041d580(&buttons,CONCAT22(uVar4,g_GameContext.cfg.controllerMapping.bombButton),2,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_00,
                                       g_GameContext.cfg.controllerMapping.menuButton),8,local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_01,g_GameContext.cfg.controllerMapping.upButton)
                     ,0x10,local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_02,
                                       g_GameContext.cfg.controllerMapping.downButton),0x20,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_03,
                                       g_GameContext.cfg.controllerMapping.leftButton),0x40,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_04,
                                       g_GameContext.cfg.controllerMapping.rightButton),0x80,
                     local_12c);
        FUN_0041d580(&buttons,CONCAT22(extraout_var_05,g_GameContext.cfg.controllerMapping.unkButton
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

