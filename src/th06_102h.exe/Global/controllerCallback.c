
undefined4 controllerCallback(LPCDIDEVICEOBJECTINSTANCE param_1)

{
  HRESULT HVar1;
  DIPROPHEADER prop;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((param_1->dwType & DIDFT_AXIS) != 0) {
    prop.dwSize = 0x18;
    prop.dwHeaderSize = 0x10;
    prop.dwHow = 2;
    prop.dwObj = param_1->dwType;
    local_c = 0xfffffc18;
    local_8 = 1000;
    HVar1 = (*(g_Supervisor.controller)->lpVtbl->SetProperty)
                      (g_Supervisor.controller,(GUID *)0x4,&prop);
    if (HVar1 < 0) {
      return 0;
    }
  }
  return 1;
}

