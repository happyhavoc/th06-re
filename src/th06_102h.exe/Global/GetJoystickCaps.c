
bool GetJoystickCaps(void)

{
  MMRESULT MVar1;
  joyinfoex_tag joyinfo;
  
  joyinfo.dwSize = 0x34;
  joyinfo.dwFlags = 0xff;
  MVar1 = joyGetPosEx(0,&joyinfo);
  if (MVar1 == 0) {
    joyGetDevCapsA(0,&JOYSTICK_CAPS,0x194);
  }
  else {
    GameErrorContextLog(&g_GameErrorContext,
                        "使えるパッドが存在しないようです、残念\n");
  }
  return MVar1 != 0;
}
