
ushort GetInput(void)

{
  DWORD_PTR cookie;
  ushort buttons;
  HRESULT res;
  char keyboardState [256];
  
  cookie = __security_cookie;
  if (g_Supervisor.keyboard == (LPDIRECTINPUTDEVICE8A)0x0) {
    GetKeyboardState((PBYTE)keyboardState);
                    /* 38  = VK_UP = KEY_UP
                       40  = VK_DOWN = KEY_DOWN
                       37  = VK_LEFT = KEY_LEFT
                       39  = VK_RIGHT = KEY_RIGHT
                       104 = VK_NUMPAD8 = KEY_UP
                       98  = VK_NUMPAD2 = KEY_DOWN
                       100 = VK_NUMPAD4 = KEY_LEFT
                       102 = VK_NUMPAD6 = KEY_RIGHT
                       103 = VK_NUMPAD7 = KEY_LEFT | KEY_UP
                       105 = VK_NUMPAD9 = KEY_RIGHT | KEY_UP
                       97  = VK_NUMPAD1 = KEY_LEFT | KEY_DOWN
                       99  = VK_NUMPAD3 = KEY_RIGHT | KEY_DOWN
                       36  = VK_HOME = KEY_HOME
                       90  = Z = KEY_BOMB
                       88  = X = KEY_BOMB
                       16  = VK_SHIFT = KEY_FOCUS
                       27  = VK_ESCAPE = KEY_MENU
                       17  = VK_CONTROL = KEY_SKIP
                       81  = Q = KEY_Q
                       83  = S = KEY_S
                       13  = VK_RETURN = KEY_RETURN */
                    /* This sets a bitfield of which buttons are pressed.
                       
                       0x001 is shoot
                       0x002 is BOMB
                       0x004 is FOCUS
                       0x008 is MENU
                       0x010 is UP
                       0x020 is DOWN
                       0x040 is LEFT
                       0x080 is RIGHT
                       0x100 is SKIP
                       0x200 is KEY_Q
                       0x400 is KEY_S
                       0x1000 is KEY_RETURN */
    buttons = -(ushort)((keyboardState[0x26] & 0x80U) != 0) & KEY_UP |
              -(ushort)((keyboardState[0x28] & 0x80U) != 0) & KEY_DOWN |
              -(ushort)((keyboardState[0x25] & 0x80U) != 0) & KEY_LEFT |
              -(ushort)((keyboardState[0x27] & 0x80U) != 0) & KEY_RIGHT |
              -(ushort)((keyboardState[0x68] & 0x80U) != 0) & KEY_UP |
              -(ushort)((keyboardState[0x62] & 0x80U) != 0) & KEY_DOWN |
              -(ushort)((keyboardState[100] & 0x80U) != 0) & KEY_LEFT |
              -(ushort)((keyboardState[0x66] & 0x80U) != 0) & KEY_RIGHT |
              -(ushort)((keyboardState[0x67] & 0x80U) != 0) & 0x50 |
              -(ushort)((keyboardState[0x69] & 0x80U) != 0) & 0x90 |
              -(ushort)((keyboardState[0x61] & 0x80U) != 0) & 0x60 |
              -(ushort)((keyboardState[99] & 0x80U) != 0) & 0xa0 |
              -(ushort)((keyboardState[0x24] & 0x80U) != 0) & KEY_HOME |
              (ushort)((keyboardState._90_2_ & 0x80) != 0) |
              -(ushort)((keyboardState._88_2_ & 0x80) != 0) & KEY_BOMB |
              -(ushort)(((uint)keyboardState._13_4_ >> 0x18 & 0x80) != 0) & KEY_FOCUS |
              -(ushort)((keyboardState[0x1b] & 0x80U) != 0) & KEY_MENU |
              -(ushort)((keyboardState._17_4_ & 0x80) != 0) & KEY_SKIP |
              -(ushort)((keyboardState._81_2_ & 0x80) != 0) & KEY_Q |
              -(ushort)((keyboardState[0x53] & 0x80U) != 0) & KEY_S |
              -(ushort)((keyboardState._13_4_ & 0x80) != 0) & KEY_RETURN;
  }
  else {
    res = (*(g_Supervisor.keyboard)->lpVtbl->GetDeviceState)
                    (g_Supervisor.keyboard,0x100,keyboardState);
    if (res == -0x7ff8ffe2) {
      (*(g_Supervisor.keyboard)->lpVtbl->Acquire)(g_Supervisor.keyboard);
      buttons = Controller::GetControllerInput(0);
      goto LAB_0041e0a5;
    }
    buttons = -(ushort)((keyboardState._199_4_ & 0x8000) != 0) & 0x10 |
              -(ushort)((keyboardState._208_4_ & 0x80) != 0) & 0x20 |
              -(ushort)((keyboardState[0xcb] & 0x80U) != 0) & 0x40 |
              -(ushort)((keyboardState._205_2_ & 0x80) != 0) & 0x80 |
              -(ushort)((keyboardState[0x48] & 0x80U) != 0) & 0x10 |
              -(ushort)((keyboardState[0x50] & 0x80U) != 0) & 0x20 |
              -(ushort)((keyboardState[0x4b] & 0x80U) != 0) & 0x40 |
              -(ushort)((keyboardState._77_2_ & 0x80) != 0) & 0x80 |
              -(ushort)((keyboardState[0x47] & 0x80U) != 0) & 0x50 |
              -(ushort)((keyboardState._73_2_ & 0x80) != 0) & 0x90 |
              -(ushort)((keyboardState[0x4f] & 0x80U) != 0) & 0x60 |
              -(ushort)((keyboardState._81_2_ & 0x80) != 0) & 0xa0 |
              -(ushort)((keyboardState._199_4_ & 0x80) != 0) & 0x800 |
              (ushort)((keyboardState[0x2c] & 0x80U) != 0) |
              -(ushort)((keyboardState[0x2d] & 0x80U) != 0) & 2 |
              -(ushort)((keyboardState[0x2a] & 0x80U) != 0) & 4 |
              -(ushort)((keyboardState._54_4_ & 0x80) != 0) & 4 |
              -(ushort)((keyboardState._1_4_ & 0x80) != 0) & 8 |
              -(ushort)((keyboardState._29_2_ & 0x80) != 0) & 0x100 |
              -(ushort)((keyboardState._157_4_ & 0x80) != 0) & 0x100 |
              -(ushort)(((uint)keyboardState._13_4_ >> 0x18 & 0x80) != 0) & 0x200 |
              -(ushort)((keyboardState[0x1f] & 0x80U) != 0) & 0x400 |
              -(ushort)((keyboardState[0x1c] & 0x80U) != 0) & 0x1000;
  }
  buttons = Controller::GetControllerInput(buttons);
LAB_0041e0a5:
  __security_check_cookie(cookie);
  return buttons;
}

