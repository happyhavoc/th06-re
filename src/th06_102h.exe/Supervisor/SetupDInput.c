
ZunResult th06::Supervisor::SetupDInput(Supervisor *param_1)

{
  HINSTANCE hInst;
  ZunResult ZVar1;
  int iVar2;
  HRESULT HVar3;
  
  hInst = (HINSTANCE)GetWindowLongA(param_1->hwndGameWindow,-6);
  if (((param_1->cfg).opts >> 0xb & 1) == 0) {
    iVar2 = DirectInput8Create(hInst,0x800,&IID_IDirectInput8A,&param_1->directInput,(LPUNKNOWN)0x0)
    ;
    if (iVar2 < 0) {
      param_1->directInput = (IDirectInput8A *)0x0;
      GameErrorContext::Log(&g_GameErrorContext,"DirectInput が使用できません\n");
      ZVar1 = ZUN_ERROR;
    }
    else {
      HVar3 = (*param_1->directInput->lpVtbl->CreateDevice)
                        (param_1->directInput,&GUID_SysKeyboard,&param_1->keyboard,(LPUNKNOWN)0x0);
      if (HVar3 < 0) {
        if (param_1->directInput != (IDirectInput8A *)0x0) {
          (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
          param_1->directInput = (IDirectInput8A *)0x0;
        }
        GameErrorContext::Log(&g_GameErrorContext,"DirectInput が使用できません\n");
        ZVar1 = ZUN_ERROR;
      }
      else {
        HVar3 = (*param_1->keyboard->lpVtbl->SetDataFormat)(param_1->keyboard,&c_dfDIKeyboard);
        if (HVar3 < 0) {
          if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
            (*param_1->keyboard->lpVtbl->Release)(param_1->keyboard);
            param_1->keyboard = (LPDIRECTINPUTDEVICE8A)0x0;
          }
          if (param_1->directInput != (IDirectInput8A *)0x0) {
            (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
            param_1->directInput = (IDirectInput8A *)0x0;
          }
          GameErrorContext::Log
                    (&g_GameErrorContext,"DirectInput SetDataFormat が使用できません\n");
          ZVar1 = ZUN_ERROR;
        }
        else {
          HVar3 = (*param_1->keyboard->lpVtbl->SetCooperativeLevel)
                            (param_1->keyboard,(HWND)param_1->hwndGameWindow,0x16);
          if (HVar3 < 0) {
            if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
              (*param_1->keyboard->lpVtbl->Release)(param_1->keyboard);
              param_1->keyboard = (LPDIRECTINPUTDEVICE8A)0x0;
            }
            if (param_1->directInput != (IDirectInput8A *)0x0) {
              (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
              param_1->directInput = (IDirectInput8A *)0x0;
            }
            GameErrorContext::Log
                      (&g_GameErrorContext,
                       "DirectInput SetCooperativeLevel が使用できません\n");
            ZVar1 = ZUN_ERROR;
          }
          else {
            (*param_1->keyboard->lpVtbl->Acquire)(param_1->keyboard);
            GameErrorContext::Log
                      (&g_GameErrorContext,"DirectInput は正常に初期化されました\n");
            (*param_1->directInput->lpVtbl->EnumDevices)
                      (param_1->directInput,DI8DEVCLASS_GAMECTRL,Controller::EnumGameControllersCb,
                       (LPVOID)0x0,1);
            if (param_1->controller != (LPDIRECTINPUTDEVICE8A)0x0) {
              (*param_1->controller->lpVtbl->SetDataFormat)(param_1->controller,&c_dfDIJoystick2);
              (*param_1->controller->lpVtbl->SetCooperativeLevel)
                        (param_1->controller,(HWND)param_1->hwndGameWindow,5);
              g_Supervisor.controllerCaps.dwSize = 0x2c;
              (*param_1->controller->lpVtbl->GetCapabilities)
                        (param_1->controller,&g_Supervisor.controllerCaps);
              (*param_1->controller->lpVtbl->EnumObjects)
                        (param_1->controller,Controller::ControllerCallback,(LPVOID)0x0,0);
              GameErrorContext::Log(&g_GameErrorContext,"有効なパッドを発見しました\n")
              ;
            }
            ZVar1 = ZUN_SUCCESS;
          }
        }
      }
    }
  }
  else {
    ZVar1 = ZUN_ERROR;
  }
  return ZVar1;
}

