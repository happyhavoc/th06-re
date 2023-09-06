
ushort GetControllerInput(ushort buttons)

{
  MMRESULT MVar1;
  DWORD DVar2;
  uint uVar3;
  HRESULT HVar4;
  int iVar5;
  uint uVar6;
  joyinfoex_tag *pjVar7;
  DIJOYSTATE2 *pDVar8;
  uint unaff_retaddr;
  int local_160;
  DIJOYSTATE2 local_15c;
  uint local_4c;
  HRESULT local_48;
  joyinfoex_tag joyconPos;
  
  local_4c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    pjVar7 = &joyconPos;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      pjVar7->dwSize = 0;
      pjVar7 = (joyinfoex_tag *)&pjVar7->dwFlags;
    }
    joyconPos.dwSize = 0x34;
    joyconPos.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&joyconPos);
    if (MVar1 == 0) {
      DVar2 = SetButtonFromControllerInputs
                        (&buttons,g_ControllerMapping.shootButton,SHOOT,joyconPos.dwButtons);
      if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
        if (DVar2 == 0) {
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
      uVar3 = JOYSTICK_CAPS.wXmax - JOYSTICK_CAPS.wXmin >> 2;
      uVar6 = JOYSTICK_CAPS.wYmax - JOYSTICK_CAPS.wYmin >> 2;
      buttons = buttons | -(ushort)((JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) + uVar3 <
                                   joyconPos.dwXpos) & RIGHT |
                -(ushort)(joyconPos.dwXpos <
                         (JOYSTICK_CAPS.wXmin + JOYSTICK_CAPS.wXmax >> 1) - uVar3) & LEFT |
                -(ushort)((JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) + uVar6 <
                         joyconPos.dwYpos) & DOWN |
                -(ushort)(joyconPos.dwYpos <
                         (JOYSTICK_CAPS.wYmin + JOYSTICK_CAPS.wYmax >> 1) - uVar6) & UP;
    }
  }
  else {
    HVar4 = (*(g_GameContext.controller)->lpVtbl->Poll)(g_GameContext.controller);
    if (HVar4 < 0) {
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
      pDVar8 = &local_15c;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        pDVar8->lX = 0;
        pDVar8 = (DIJOYSTATE2 *)&pDVar8->lY;
      }
      HVar4 = (*(g_GameContext.controller)->lpVtbl->GetDeviceState)
                        (g_GameContext.controller,0x110,&local_15c);
      if (-1 < HVar4) {
        DVar2 = SetButtonFromDirectInputJoystate
                          (&buttons,g_GameContext.cfg.controllerMapping.shootButton,1,
                           local_15c.rgbButtons);
        if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
          if (DVar2 == 0) {
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
          SetButtonFromDirectInputJoystate
                    (&buttons,g_GameContext.cfg.controllerMapping.focusButton,4,local_15c.rgbButtons
                    );
        }
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.bombButton,2,local_15c.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.menuButton,8,local_15c.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.upButton,0x10,local_15c.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.downButton,0x20,local_15c.rgbButtons
                  );
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.leftButton,0x40,local_15c.rgbButtons
                  );
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.rightButton,0x80,
                   local_15c.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.unkButton,0x100,local_15c.rgbButtons
                  );
        buttons = buttons | (local_15c.lX <= (short)g_GameContext.cfg.padAxisX) - 1 & 0x80 |
                  (SBORROW4(local_15c.lX,-(int)(short)g_GameContext.cfg.padAxisX) ==
                  local_15c.lX + (short)g_GameContext.cfg.padAxisX < 0) - 1 & 0x40 |
                  (local_15c.lY <= (short)g_GameContext.cfg.padAxisY) - 1 & 0x20 |
                  (SBORROW4(local_15c.lY,-(int)(short)g_GameContext.cfg.padAxisY) ==
                  local_15c.lY + (short)g_GameContext.cfg.padAxisY < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(local_4c ^ unaff_retaddr);
  return buttons;
}

