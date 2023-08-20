
bool FUN_0041cf60(void)

{
  MMRESULT MVar1;
  joyinfoex_tag local_38;
  
  local_38.dwSize = 0x34;
  local_38.dwFlags = 0xff;
  MVar1 = joyGetPosEx(0,&local_38);
  if (MVar1 == 0) {
    joyGetDevCapsA(0,(LPJOYCAPSA)&DAT_0069d760,0x194);
  }
  else {
    GameErrorContextLog(&g_GameErrorContext,
                        "使えるパッドが存在しないようです、残念\n");
  }
  return MVar1 != 0;
}

