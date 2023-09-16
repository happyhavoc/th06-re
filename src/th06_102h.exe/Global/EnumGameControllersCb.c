
undefined4 EnumGameControllersCb(int param_1)

{
  HRESULT HVar1;
  
  if ((g_GameContext.controller == (LPDIRECTINPUTDEVICE8A)0x0) &&
     (HVar1 = (*(g_GameContext.directInput)->lpVtbl->CreateDevice)
                        (g_GameContext.directInput,(GUID *)(param_1 + 4),&g_GameContext.controller,
                         (LPUNKNOWN)0x0), HVar1 < 0)) {
    return 1;
  }
  return 0;
}

