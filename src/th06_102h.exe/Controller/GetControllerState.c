
int * Controller::GetControllerState(void)

{
  DWORD_PTR cookie;
  MMRESULT MVar1;
  HRESULT HVar2;
  int *piVar3;
  int i;
  int puVar3;
  joyinfoex_tag *joyinfo_ptr;
  int *puVar4;
  int local_160;
  DIJOYSTATE2 local_15c;
  HRESULT local_44;
  uint local_40;
  uint local_3c;
  joyinfoex_tag joyinfo;
  
  cookie = __security_cookie;
  piVar3 = g_ControllerData;
  for (i = 32; i != 0; i = i + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  if (g_Supervisor.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    joyinfo_ptr = &joyinfo;
    for (i = 13; i != 0; i = i + -1) {
      joyinfo_ptr->dwSize = 0;
      joyinfo_ptr = (joyinfoex_tag *)&joyinfo_ptr->dwFlags;
    }
    joyinfo.dwSize = 0x34;
    joyinfo.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&joyinfo);
    if (MVar1 == 0) {
      local_3c = joyinfo.dwButtons;
      for (local_40 = 0; local_40 < 0x20; local_40 = local_40 + 1) {
        if ((local_3c & 1) != 0) {
          *(undefined *)((int)g_ControllerData + local_40) = 0x80;
        }
        local_3c = local_3c >> 1;
      }
    }
  }
  else {
    HVar2 = (*(g_Supervisor.controller)->lpVtbl->Poll)(g_Supervisor.controller);
    if (HVar2 < 0) {
      local_160 = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      local_44 = (*(g_Supervisor.controller)->lpVtbl->Acquire)(g_Supervisor.controller);
      do {
        if (local_44 != -0x7ff8ffe2) break;
        local_44 = (*(g_Supervisor.controller)->lpVtbl->Acquire)(g_Supervisor.controller);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",local_160);
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
      (*(g_Supervisor.controller)->lpVtbl->GetDeviceState)(g_Supervisor.controller,0x110,&local_15c)
      ;
      if (-1 < HVar2) {
        puVar3 = (int)local_15c.rgbButtons;
        puVar4 = g_ControllerData;
        for (i = 0x20; i != 0; i = i + -1) {
          *puVar4 = *(int *)puVar3;
          puVar3 = puVar3 + 4;
          puVar4 = puVar4 + 1;
        }
      }
    }
  }
  piVar3 = g_ControllerData;
  __security_check_cookie(cookie);
  return piVar3;
}

