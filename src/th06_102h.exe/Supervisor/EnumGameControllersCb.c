
undefined4 th06::Supervisor::EnumGameControllersCb(int param_1)

{
  HRESULT HVar1;
  
  if ((g_Supervisor.controller == (LPDIRECTINPUTDEVICE8A)0x0) &&
     (HVar1 = (*(g_Supervisor.directInput)->lpVtbl->CreateDevice)
                        (g_Supervisor.directInput,(GUID *)(param_1 + 4),&g_Supervisor.controller,
                         (LPUNKNOWN)0x0), HVar1 < 0)) {
    return 1;
  }
  return 0;
}

