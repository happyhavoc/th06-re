
void joystickcheck_only_called_in_keyconfig(void)

{
  MMRESULT MVar1;
  int i;
  undefined4 *puVar2;
  joyinfoex_tag *joyinfo_ptr;
  undefined4 *puVar3;
  uint unaff_retaddr;
  int local_160;
  char local_15c;
  char local_12c;
  uint local_48;
  HRESULT local_44;
  uint local_40;
  uint local_3c;
  joyinfoex_tag joyinfo;
  
  local_48 = __security_cookie ^ unaff_retaddr;
  puVar2 = &DAT_0069e1b0;
  for (i = 32; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
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
          *(undefined *)((int)&DAT_0069e1b0 + local_40) = 0x80;
        }
        local_3c = local_3c >> 1;
      }
    }
  }
  else {
    local_44 = (*(g_Supervisor.controller)->lpVtbl->Poll)(g_Supervisor.controller);
    if (local_44 < 0) {
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
      if (-1 < local_44) {
        puVar2 = (undefined4 *)&local_12c;
        puVar3 = &DAT_0069e1b0;
        for (i = 0x20; i != 0; i = i + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
  }
  __security_check_cookie(local_48 ^ unaff_retaddr);
  return;
}

