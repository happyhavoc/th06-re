
ushort GetControllerInput(ushort buttons)

{
  MMRESULT joyResult;
  DWORD shootState;
  uint joystickXDistance;
  int stateHr;
  uint joystickYDistance;
  joyinfoex_tag *pjVar1;
  DIJOYSTATE2 *pDVar2;
  uint unaff_retaddr;
  int retry_count;
  DIJOYSTATE2 js;
  uint stack_cookie;
  int hr;
  joyinfoex_tag pji;
  
  stack_cookie = __security_cookie ^ unaff_retaddr;
  if (DAT_006c6d2c == (int *)0x0) {
    pjVar1 = &pji;
    for (stateHr = 0xd; stateHr != 0; stateHr = stateHr + -1) {
      pjVar1->dwSize = 0;
      pjVar1 = (joyinfoex_tag *)&pjVar1->dwFlags;
    }
    pji.dwSize = 0x34;
    pji.dwFlags = 0xff;
    joyResult = joyGetPosEx(0,&pji);
    if (joyResult == 0) {
      shootState = SetButtonFromControllerInputs
                             (&buttons,g_ControllerMapping.shootButton,SHOOT,pji.dwButtons);
      if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
        if (shootState == 0) {
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
        SetButtonFromControllerInputs(&buttons,g_ControllerMapping.focusButton,FOCUS,pji.dwButtons);
      }
      SetButtonFromControllerInputs(&buttons,DAT_006c6e2c._2_2_,BOMB,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,DAT_006c6e30._2_2_,MENU,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,(short)DAT_006c6e34,UP,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,DAT_006c6e34._2_2_,DOWN,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,(short)DAT_006c6e38,LEFT,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,DAT_006c6e38._2_2_,RIGHT,pji.dwButtons);
      SetButtonFromControllerInputs(&buttons,DAT_006c6e3c,0x100,pji.dwButtons);
      joystickXDistance = (uint)(DAT_0069d788 - DAT_0069d784) >> 2;
      joystickYDistance = (uint)(DAT_0069d790 - DAT_0069d78c) >> 2;
      buttons = buttons | -(ushort)(((uint)(DAT_0069d784 + DAT_0069d788) >> 1) + joystickXDistance <
                                   pji.dwXpos) & RIGHT |
                -(ushort)(pji.dwXpos <
                         ((uint)(DAT_0069d784 + DAT_0069d788) >> 1) - joystickXDistance) & LEFT |
                -(ushort)(((uint)(DAT_0069d78c + DAT_0069d790) >> 1) + joystickYDistance <
                         pji.dwYpos) & DOWN |
                -(ushort)(pji.dwYpos <
                         ((uint)(DAT_0069d78c + DAT_0069d790) >> 1) - joystickYDistance) & UP;
    }
  }
  else {
    stateHr = (**(code **)(*DAT_006c6d2c + 100))(DAT_006c6d2c);
    if (stateHr < 0) {
      retry_count = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      hr = (**(code **)(*DAT_006c6d2c + 0x1c))(DAT_006c6d2c);
      do {
        if (hr != -0x7ff8ffe2) break;
        hr = (**(code **)(*DAT_006c6d2c + 0x1c))(DAT_006c6d2c);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",retry_count);
        retry_count = retry_count + 1;
      } while (retry_count < 400);
    }
    else {
      pDVar2 = &js;
      for (stateHr = 0x44; stateHr != 0; stateHr = stateHr + -1) {
        pDVar2->lX = 0;
        pDVar2 = (DIJOYSTATE2 *)&pDVar2->lY;
      }
      stateHr = (**(code **)(*DAT_006c6d2c + 0x24))(DAT_006c6d2c,0x110,&js);
      if (-1 < stateHr) {
        shootState = SetButtonFromDirectInputJoystate(&buttons,(short)DAT_006c6e2c,1,js.rgbButtons);
        if (g_ControllerMapping.shootButton == g_ControllerMapping.focusButton) {
          if (shootState == 0) {
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
          SetButtonFromDirectInputJoystate(&buttons,(short)DAT_006c6e30,4,js.rgbButtons);
        }
        SetButtonFromDirectInputJoystate(&buttons,DAT_006c6e2c._2_2_,2,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,DAT_006c6e30._2_2_,8,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,(short)DAT_006c6e34,0x10,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,DAT_006c6e34._2_2_,0x20,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,(short)DAT_006c6e38,0x40,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,DAT_006c6e38._2_2_,0x80,js.rgbButtons);
        SetButtonFromDirectInputJoystate(&buttons,DAT_006c6e3c,0x100,js.rgbButtons);
        buttons = buttons | (js.lX <= DAT_006c6e4c) - 1 & 0x80 |
                  (SBORROW4(js.lX,-(int)DAT_006c6e4c) == js.lX + DAT_006c6e4c < 0) - 1 & 0x40 |
                  (js.lY <= DAT_006c6e4e) - 1 & 0x20 |
                  (SBORROW4(js.lY,-(int)DAT_006c6e4e) == js.lY + DAT_006c6e4e < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(stack_cookie ^ unaff_retaddr);
  return buttons;
}

