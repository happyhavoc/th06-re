
void FUN_0041d680(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  joyinfoex_tag *pjVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  int local_160;
  undefined local_15c [48];
  undefined4 local_12c [57];
  uint local_48;
  HRESULT local_44;
  uint local_40;
  uint local_3c;
  joyinfoex_tag local_38;
  
  local_48 = __security_cookie ^ unaff_retaddr;
  puVar3 = &DAT_0069e1b0;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) {
    pjVar4 = &local_38;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      pjVar4->dwSize = 0;
      pjVar4 = (joyinfoex_tag *)&pjVar4->dwFlags;
    }
    local_38.dwSize = 0x34;
    local_38.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&local_38);
    if (MVar1 == 0) {
      local_3c = local_38.dwButtons;
      for (local_40 = 0; local_40 < 0x20; local_40 = local_40 + 1) {
        if ((local_3c & 1) != 0) {
          *(undefined *)((int)&DAT_0069e1b0 + local_40) = 0x80;
        }
        local_3c = local_3c >> 1;
      }
    }
  }
  else {
    local_44 = (*(g_GameContext.controller)->lpVtbl->Poll)(g_GameContext.controller);
    if (local_44 < 0) {
      local_160 = 0;
      DebugPrint2("error : DIERR_INPUTLOST\n");
      local_44 = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
      do {
        if (local_44 != -0x7ff8ffe2) break;
        local_44 = (*(g_GameContext.controller)->lpVtbl->Acquire)(g_GameContext.controller);
        DebugPrint2("error : DIERR_INPUTLOST %d\n",local_160);
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
      (*(g_GameContext.controller)->lpVtbl->GetDeviceState)
                (g_GameContext.controller,0x110,local_15c);
      if (-1 < local_44) {
        puVar3 = local_12c;
        puVar5 = &DAT_0069e1b0;
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
  __security_check_cookie(local_48 ^ unaff_retaddr);
  return;
}

