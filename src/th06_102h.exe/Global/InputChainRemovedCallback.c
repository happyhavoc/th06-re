
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 InputChainRemovedCallback(GameContext *param_1)

{
  void *_Memory;
  int local_8;
  
  FUN_004240f0(VERY_BIG_STRUCT);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    FUN_004242f3(param_1,local_8);
  }
  FUN_00432030(VERY_BIG_STRUCT,0);
  FUN_00401500();
  SoundPlayer::StopBGM(&g_SoundPlayer);
  if (param_1->field98_0x1b0 != (void *)0x0) {
    FUN_004224e0(param_1->field98_0x1b0);
    _Memory = param_1->field98_0x1b0;
    if (_Memory != (void *)0x0) {
      FUN_00421f50();
      _free(_Memory);
    }
    param_1->field98_0x1b0 = (void *)0x0;
  }
  FUN_0042ab30(0,0);
  FUN_0041f02b();
  if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
    (*param_1->keyboard->lpVtbl->Unacquire)(param_1->keyboard);
  }
  if (param_1->keyboard != (LPDIRECTINPUTDEVICE8A)0x0) {
    (*param_1->keyboard->lpVtbl->Release)(param_1->keyboard);
    param_1->keyboard = (LPDIRECTINPUTDEVICE8A)0x0;
  }
  if (param_1->controller != (LPDIRECTINPUTDEVICE8A)0x0) {
    (*param_1->controller->lpVtbl->Unacquire)(param_1->controller);
  }
  if (param_1->controller != (LPDIRECTINPUTDEVICE8A)0x0) {
    (*param_1->controller->lpVtbl->Release)(param_1->controller);
    param_1->controller = (LPDIRECTINPUTDEVICE8A)0x0;
  }
  if (param_1->directInput != (IDirectInput8A *)0x0) {
    (*param_1->directInput->lpVtbl->Release)(param_1->directInput);
    param_1->directInput = (IDirectInput8A *)0x0;
  }
  return 0;
}

