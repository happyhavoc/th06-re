
undefined4 FUN_00423b14(GameContext *param_1)

{
  LONG LVar1;
  undefined4 uVar2;
  int iVar3;
  HRESULT HVar4;
  
  LVar1 = GetWindowLongA(param_1->hwndGameWindow,-6);
  if (((uint)(param_1->cfg).render_opts >> 0xb & 1) == 0) {
    iVar3 = DirectInput8Create(LVar1,0x800,&IID_IDirectInput8A,&param_1->directInput,0);
    if (iVar3 < 0) {
      param_1->directInput = (IDirectInput8A *)0x0;
      GameErrorContextLog(&g_GameErrorContext,"DirectInput が使用できません\n");
      uVar2 = 0xffffffff;
    }
    else {
      HVar4 = (*param_1->directInput->lpVtbl->CreateDevice)
                        (param_1->directInput,&GUID_SysKeyboard,&param_1->keyboard,(LPUNKNOWN)0x0);
      if (HVar4 < 0) {
        if (param_1->directInput != (IDirectInput8A *)0x0) {
          (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
          param_1->directInput = (IDirectInput8A *)0x0;
        }
        GameErrorContextLog(&g_GameErrorContext,"DirectInput が使用できません\n");
        uVar2 = 0xffffffff;
      }
      else {
        HVar4 = (*param_1->keyboard->lpVtbl->SetDataFormat)(param_1->keyboard,&DATA_FORMAT);
        if (HVar4 < 0) {
          if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
            (*param_1->keyboard->lpVtbl->Release)(param_1->keyboard);
            param_1->keyboard = (LPDIRECTINPUTDEVICE8A)0x0;
          }
          if (param_1->directInput != (IDirectInput8A *)0x0) {
            (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
            param_1->directInput = (IDirectInput8A *)0x0;
          }
          GameErrorContextLog(&g_GameErrorContext,
                              "DirectInput SetDataFormat が使用できません\n");
          uVar2 = 0xffffffff;
        }
        else {
          HVar4 = (*param_1->keyboard->lpVtbl->SetCooperativeLevel)
                            (param_1->keyboard,(HWND)param_1->hwndGameWindow,0x16);
          if (HVar4 < 0) {
            if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
              (*param_1->keyboard->lpVtbl->Release)(param_1->keyboard);
              param_1->keyboard = (LPDIRECTINPUTDEVICE8A)0x0;
            }
            if (param_1->directInput != (IDirectInput8A *)0x0) {
              (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
              param_1->directInput = (IDirectInput8A *)0x0;
            }
            GameErrorContextLog(&g_GameErrorContext,
                                "DirectInput SetCooperativeLevel が使用できません\n");
            uVar2 = 0xffffffff;
          }
          else {
            (*param_1->keyboard->lpVtbl->Acquire)(param_1->keyboard);
            GameErrorContextLog(&g_GameErrorContext,
                                "DirectInput は正常に初期化されました\n");
            (*param_1->directInput->lpVtbl->EnumDevices)
                      (param_1->directInput,DI8DEVCLASS_GAMECTRL,EnumGameControllersCb,(LPVOID)0x0,1
                      );
            if (param_1->controller != (LPDIRECTINPUTDEVICE8A)0x0) {
              (*param_1->controller->lpVtbl->SetDataFormat)
                        (param_1->controller,(LPCDIDATAFORMAT)&DAT_0046cdfc);
              (*param_1->controller->lpVtbl->SetCooperativeLevel)
                        (param_1->controller,(HWND)param_1->hwndGameWindow,5);
              g_GameContext.controllerCaps.dwSize = 0x2c;
              (*param_1->controller->lpVtbl->GetCapabilities)
                        (param_1->controller,&g_GameContext.controllerCaps);
              (*param_1->controller->lpVtbl->EnumObjects)
                        (param_1->controller,FUN_00423801,(LPVOID)0x0,0);
              GameErrorContextLog(&g_GameErrorContext,"有効なパッドを発見しました\n");
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

