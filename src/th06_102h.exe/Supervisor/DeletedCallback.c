
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

undefined4 Supervisor::DeletedCallback(Supervisor *param_1)

{
  MidiOutput *this;
  int local_8;
  
  AnmManager::FUN_004240f0(g_AnmManager);
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    ReleasePbg3(param_1,local_8);
  }
  AnmManager::ReleaseAnm(g_AnmManager,0);
  AsciiManager::CutChain();
  SoundPlayer::StopBGM(&g_SoundPlayer);
  if (param_1->midi_output != (MidiOutput *)0x0) {
    MidiOutput::StopPlayback(param_1->midi_output);
    this = param_1->midi_output;
    if (this != (MidiOutput *)0x0) {
      MidiOutput::~MidiOutput(this);
      _free(this);
    }
    param_1->midi_output = (MidiOutput *)0x0;
  }
  FUN_0042ab30(0,0);
  ReleaseBackBuffer();
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

