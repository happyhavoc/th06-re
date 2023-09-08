
ushort GetControllerInput(ushort buttons)

{
  MMRESULT joyResult;
  DWORD shootState;
  uint joystickXDistance;
  HRESULT stateHr;
  int iVar1;
  uint joystickYDistance;
  joyinfoex_tag *pjVar2;
  DIJOYSTATE2 *pDVar3;
  uint unaff_retaddr;
  int retry_count;
  DIJOYSTATE2 js;
  uint stack_cookie;
  HRESULT hr;
  joyinfoex_tag pji;
  
  stack_cookie = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    pjVar2 = &pji;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      pjVar2->dwSize = 0;
      pjVar2 = (joyinfoex_tag *)&pjVar2->dwFlags;
    }
    pji.dwSize = 0x34;
    pji.dwFlags = 0xff;
    joyResult = joyGetPosEx(0,&pji);
    if (joyResult == 0) {
      shootState = SetButtonFromControllerInputs
                             (&buttons,g_ControllerMapping.shootButton,SHOOT,pji.dwButtons);
      if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
        if (shootState == 0) {
          if (g_FocusButtonConflictState < 9) {
            g_FocusButtonConflictState = 0;
          }
          else {
            g_FocusButtonConflictState = g_FocusButtonConflictState - 8;
          }
        }
        else {
          if (g_FocusButtonConflictState < 0x10) {
            g_FocusButtonConflictState = g_FocusButtonConflictState + 1;
          }
          if (7 < g_FocusButtonConflictState) {
            buttons = buttons | 4;
          }
        }
      }
      else {
        SetButtonFromControllerInputs(&buttons,g_ControllerMapping.focusButton,FOCUS,pji.dwButtons);
      }
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.bombButton,BOMB,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.menuButton,MENU,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.upButton,UP,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.downButton,DOWN,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.leftButton,LEFT,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.rightButton,RIGHT,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_GameContext.cfg.controllerMapping.skipButton,0x100,pji.dwButtons);
      joystickXDistance = g_JoystickCaps.wXmax - g_JoystickCaps.wXmin >> 2;
      joystickYDistance = g_JoystickCaps.wYmax - g_JoystickCaps.wYmin >> 2;
      buttons = buttons | -(ushort)((g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) +
                                    joystickXDistance < pji.dwXpos) & RIGHT |
                -(ushort)(pji.dwXpos <
                         (g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) - joystickXDistance) &
                LEFT | -(ushort)((g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) +
                                 joystickYDistance < pji.dwYpos) & DOWN |
                -(ushort)(pji.dwYpos <
                         (g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) - joystickYDistance) &
                UP;
    }
  }
  else {
    stateHr = (*(g_GameContext.controller)->lpVtbl->Poll)(g_GameContext.controller);
    if (stateHr < 0) {
      retry_count = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      hr = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
      do {
        if (hr != -0x7ff8ffe2) break;
        hr = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",retry_count);
        retry_count = retry_count + 1;
      } while (retry_count < 400);
    }
    else {
      pDVar3 = &js;
      for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
        pDVar3->lX = 0;
        pDVar3 = (DIJOYSTATE2 *)&pDVar3->lY;
      }
      stateHr = (*(g_GameContext.controller)->lpVtbl->GetDeviceState)
                          (g_GameContext.controller,0x110,&js);
      if (-1 < stateHr) {
        shootState = SetButtonFromDirectInputJoystate
                               (&buttons,g_GameContext.cfg.controllerMapping.shootButton,1,
                                js.rgbButtons);
        if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
          if (shootState == 0) {
            if (g_FocusButtonConflictState < 9) {
              g_FocusButtonConflictState = 0;
            }
            else {
              g_FocusButtonConflictState = g_FocusButtonConflictState - 8;
            }
          }
          else {
            if (g_FocusButtonConflictState < 0x10) {
              g_FocusButtonConflictState = g_FocusButtonConflictState + 1;
            }
            if (7 < g_FocusButtonConflictState) {
              buttons = buttons | 4;
            }
          }
        }
        else {
          SetButtonFromDirectInputJoystate
                    (&buttons,g_GameContext.cfg.controllerMapping.focusButton,4,js.rgbButtons);
        }
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.bombButton,2,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.menuButton,8,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.upButton,0x10,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.downButton,0x20,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.leftButton,0x40,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.rightButton,0x80,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_GameContext.cfg.controllerMapping.skipButton,0x100,js.rgbButtons);
        buttons = buttons | (js.lX <= (short)g_GameContext.cfg.padAxisX) - 1 & 0x80 |
                  (SBORROW4(js.lX,-(int)(short)g_GameContext.cfg.padAxisX) ==
                  js.lX + (short)g_GameContext.cfg.padAxisX < 0) - 1 & 0x40 |
                  (js.lY <= (short)g_GameContext.cfg.padAxisY) - 1 & 0x20 |
                  (SBORROW4(js.lY,-(int)(short)g_GameContext.cfg.padAxisY) ==
                  js.lY + (short)g_GameContext.cfg.padAxisY < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(stack_cookie ^ unaff_retaddr);
  return buttons;
}

