
ushort GetInput(void)

{
  DWORD_PTR cookie;
  ushort buttons;
  int res;
  char keyboardState [256];
  
  cookie = __security_cookie;
  if (DAT_006c6d28 == (int *)0x0) {
    GetKeyboardState((PBYTE)keyboardState);
                    /* This sets a bitfield of which buttons are pressed.
                       
                       0x001 is shoot
                       0x002 is BOMB
                       0x004 is FOCUS
                       0x008 is MENU
                       0x010 is UP
                       0x020 is DOWN
                       0x040 is LEFT
                       0x080 is RIGHT
                       0x100/200/400/1000 is unknown */
    buttons = -(ushort)((keyboardState[38] & 0x80U) != 0) & UP |
              -(ushort)((keyboardState[40] & 0x80U) != 0) & DOWN |
              -(ushort)((keyboardState[37] & 0x80U) != 0) & LEFT |
              -(ushort)((keyboardState[39] & 0x80U) != 0) & RIGHT |
              -(ushort)((keyboardState[104] & 0x80U) != 0) & UP |
              -(ushort)((keyboardState[98] & 0x80U) != 0) & DOWN |
              -(ushort)((keyboardState[100] & 0x80U) != 0) & LEFT |
              -(ushort)((keyboardState[102] & 0x80U) != 0) & RIGHT |
              -(ushort)((keyboardState[103] & 0x80U) != 0) & 0x50 |
              -(ushort)((keyboardState[105] & 0x80U) != 0) & 0x90 |
              -(ushort)((keyboardState[97] & 0x80U) != 0) & 0x60 |
              -(ushort)((keyboardState[99] & 0x80U) != 0) & 0xa0 |
              -(ushort)((keyboardState[36] & 0x80U) != 0) & 0x800 |
              (ushort)((keyboardState._90_2_ & 0x80) != 0) |
              -(ushort)((keyboardState._88_2_ & 0x80) != 0) & BOMB |
              -(ushort)(((uint)keyboardState._13_4_ >> 0x18 & 0x80) != 0) & FOCUS |
              -(ushort)((keyboardState[27] & 0x80U) != 0) & MENU |
              -(ushort)((keyboardState._17_4_ & 0x80) != 0) & 0x100 |
              -(ushort)((keyboardState._81_2_ & 0x80) != 0) & 0x200 |
              -(ushort)((keyboardState[83] & 0x80U) != 0) & 0x400 |
              -(ushort)((keyboardState._13_4_ & 0x80) != 0) & 0x1000;
  }
  else {
    res = (**(code **)(*DAT_006c6d28 + 0x24))(DAT_006c6d28,0x100,keyboardState);
    if (res == -0x7ff8ffe2) {
      (**(code **)(*DAT_006c6d28 + 0x1c))(DAT_006c6d28);
      buttons = GetControllerInput(0);
      goto LAB_0041e0a5;
    }
    buttons = -(ushort)((keyboardState._199_4_ & 0x8000) != 0) & 0x10 |
              -(ushort)((keyboardState._208_4_ & 0x80) != 0) & 0x20 |
              -(ushort)((keyboardState[203] & 0x80U) != 0) & 0x40 |
              -(ushort)((keyboardState._205_2_ & 0x80) != 0) & 0x80 |
              -(ushort)((keyboardState[72] & 0x80U) != 0) & 0x10 |
              -(ushort)((keyboardState[80] & 0x80U) != 0) & 0x20 |
              -(ushort)((keyboardState[75] & 0x80U) != 0) & 0x40 |
              -(ushort)((keyboardState._77_2_ & 0x80) != 0) & 0x80 |
              -(ushort)((keyboardState[71] & 0x80U) != 0) & 0x50 |
              -(ushort)((keyboardState._73_2_ & 0x80) != 0) & 0x90 |
              -(ushort)((keyboardState[79] & 0x80U) != 0) & 0x60 |
              -(ushort)((keyboardState._81_2_ & 0x80) != 0) & 0xa0 |
              -(ushort)((keyboardState._199_4_ & 0x80) != 0) & 0x800 |
              (ushort)((keyboardState[44] & 0x80U) != 0) |
              -(ushort)((keyboardState[45] & 0x80U) != 0) & 2 |
              -(ushort)((keyboardState[42] & 0x80U) != 0) & 4 |
              -(ushort)((keyboardState._54_4_ & 0x80) != 0) & 4 |
              -(ushort)((keyboardState._1_4_ & 0x80) != 0) & 8 |
              -(ushort)((keyboardState._29_2_ & 0x80) != 0) & 0x100 |
              -(ushort)((keyboardState._157_4_ & 0x80) != 0) & 0x100 |
              -(ushort)(((uint)keyboardState._13_4_ >> 0x18 & 0x80) != 0) & 0x200 |
              -(ushort)((keyboardState[31] & 0x80U) != 0) & 0x400 |
              -(ushort)((keyboardState[28] & 0x80U) != 0) & 0x1000;
  }
  buttons = GetControllerInput(buttons);
LAB_0041e0a5:
  __security_check_cookie(cookie);
  return buttons;
}

