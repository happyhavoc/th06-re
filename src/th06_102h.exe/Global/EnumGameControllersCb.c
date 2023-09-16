
undefined4 EnumGameControllersCb(int param_1)

{
  HRESULT HVar1;
  
  if ((DAT_006c6d2c == 0) &&
     (HVar1 = (*DAT_006c6d24->lpVtbl->CreateDevice)
                        (DAT_006c6d24,(GUID *)(param_1 + 4),(LPDIRECTINPUTDEVICE8A *)&DAT_006c6d2c,
                         (LPUNKNOWN)0x0), HVar1 < 0)) {
    return 1;
  }
  return 0;
}

