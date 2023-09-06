
ushort GetControllerInput(ushort buttons)

{
  MMRESULT MVar1;
  DWORD shootState;
  uint uVar2;
  HRESULT stateHr;
  int iVar3;
  uint uVar4;
  joyinfoex_tag *pjVar5;
  DIJOYSTATE2 *pDVar6;
  uint unaff_retaddr;
  int local_160;
  DIJOYSTATE2 js;
  uint local_4c;
  HRESULT hr;
  joyinfoex_tag pji;
  
  local_4c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    pjVar5 = &pji;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      pjVar5->dwSize = 0;
      pjVar5 = (joyinfoex_tag *)&pjVar5->dwFlags;
    }
    pji.dwSize = 0x34;
    pji.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&pji);
    if (MVar1 == 0) {
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
                (&buttons,g_GameContext.cfg.controllerMapping.unkButton,0x100,pji.dwButtons);
      uVar2 = g_JoystickCaps.wXmax - g_JoystickCaps.wXmin >> 2;
      uVar4 = g_JoystickCaps.wYmax - g_JoystickCaps.wYmin >> 2;
      buttons = buttons | -(ushort)((g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) + uVar2 <
                                   pji.dwXpos) & RIGHT |
                -(ushort)(pji.dwXpos < (g_JoystickCaps.wXmin + g_JoystickCaps.wXmax >> 1) - uVar2) &
                LEFT | -(ushort)((g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) + uVar4 <
                                pji.dwYpos) & DOWN |
                -(ushort)(pji.dwYpos < (g_JoystickCaps.wYmin + g_JoystickCaps.wYmax >> 1) - uVar4) &
                UP;
    }
  }
  else {
    stateHr = (*(g_GameContext.controller)->lpVtbl->Poll)(g_GameContext.controller);
    if (stateHr < 0) {
      local_160 = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      hr = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
      do {
        if (hr != -0x7ff8ffe2) break;
        hr = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",local_160);
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
      pDVar6 = &js;
      for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
        pDVar6->lX = 0;
        pDVar6 = (DIJOYSTATE2 *)&pDVar6->lY;
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
                  (&buttons,g_GameContext.cfg.controllerMapping.unkButton,0x100,js.rgbButtons);
        buttons = buttons | (js.lX <= (short)g_GameContext.cfg.padAxisX) - 1 & 0x80 |
                  (SBORROW4(js.lX,-(int)(short)g_GameContext.cfg.padAxisX) ==
                  js.lX + (short)g_GameContext.cfg.padAxisX < 0) - 1 & 0x40 |
                  (js.lY <= (short)g_GameContext.cfg.padAxisY) - 1 & 0x20 |
                  (SBORROW4(js.lY,-(int)(short)g_GameContext.cfg.padAxisY) ==
                  js.lY + (short)g_GameContext.cfg.padAxisY < 0) - 1 & 0x10;
      }
    }
  }
  __security_check_cookie(local_4c ^ unaff_retaddr);
  return buttons;
}

