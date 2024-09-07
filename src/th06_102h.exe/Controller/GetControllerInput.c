
ushort th06::Controller::GetControllerInput(ushort buttons)

{
  DWORD_PTR cookie;
  MMRESULT joyResult;
  DWORD shootState;
  uint joystickXDistance;
  HRESULT stateHr;
  int iVar1;
  uint joystickYDistance;
  joyinfoex_tag *pjVar2;
  DIJOYSTATE2 *pDVar3;
  int retry_count;
  DIJOYSTATE2 js;
  HRESULT hr;
  joyinfoex_tag pji;
  
  cookie = __security_cookie;
  if (g_Supervisor.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
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
                             (&buttons,g_ControllerMapping.shootButton,KEY_SHOOT,pji.dwButtons);
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
        SetButtonFromControllerInputs
                  (&buttons,g_ControllerMapping.focusButton,KEY_FOCUS,pji.dwButtons);
      }
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.bombButton,KEY_BOMB,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.menuButton,KEY_MENU,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.upButton,KEY_UP,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.downButton,KEY_DOWN,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.leftButton,KEY_LEFT,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.rightButton,KEY_RIGHT,pji.dwButtons);
      SetButtonFromControllerInputs
                (&buttons,g_Supervisor.cfg.controllerMapping.skipButton,KEY_SKIP,pji.dwButtons);
      joystickXDistance = g_JoystickCaps.wXmax - g_JoystickCaps.wXmin >> 2;
      joystickYDistance = g_JoystickCaps.wYmax - g_JoystickCaps.wYmin >> 2;
      buttons = buttons | -(ushort)((g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) +
                                    joystickXDistance < pji.dwXpos) & KEY_RIGHT |
                -(ushort)(pji.dwXpos <
                         (g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) - joystickXDistance) &
                KEY_LEFT |
                -(ushort)((g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) + joystickYDistance <
                         pji.dwYpos) & KEY_DOWN |
                -(ushort)(pji.dwYpos <
                         (g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) - joystickYDistance) &
                KEY_UP;
    }
  }
  else {
    stateHr = (*(g_Supervisor.controller)->lpVtbl->Poll)(g_Supervisor.controller);
    if (stateHr < 0) {
      retry_count = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      hr = (*(g_Supervisor.controller)->lpVtbl->Acquire)(g_Supervisor.controller);
      do {
        if (hr != -0x7ff8ffe2) break;
        hr = (*(g_Supervisor.controller)->lpVtbl->Acquire)(g_Supervisor.controller);
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
      stateHr = (*(g_Supervisor.controller)->lpVtbl->GetDeviceState)
                          (g_Supervisor.controller,0x110,&js);
      if (-1 < stateHr) {
        shootState = SetButtonFromDirectInputJoystate
                               (&buttons,g_Supervisor.cfg.controllerMapping.shootButton,1,
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
                    (&buttons,g_Supervisor.cfg.controllerMapping.focusButton,4,js.rgbButtons);
        }
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.bombButton,2,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.menuButton,8,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.upButton,0x10,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.downButton,0x20,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.leftButton,0x40,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.rightButton,0x80,js.rgbButtons);
        SetButtonFromDirectInputJoystate
                  (&buttons,g_Supervisor.cfg.controllerMapping.skipButton,0x100,js.rgbButtons);
        buttons = buttons | (js.lX <= (short)g_Supervisor.cfg.padAxisX) - 1 & 0x80 |
                  (SBORROW4(js.lX,-(int)(short)g_Supervisor.cfg.padAxisX) ==
                  js.lX + (short)g_Supervisor.cfg.padAxisX < 0) - 1 & 0x40 |
                  (js.lY <= (short)g_Supervisor.cfg.padAxisY) - 1 & 0x20 |
                  (SBORROW4(js.lY,-(int)(short)g_Supervisor.cfg.padAxisY) ==
                  js.lY + (short)g_Supervisor.cfg.padAxisY < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(cookie);
  return buttons;
}

