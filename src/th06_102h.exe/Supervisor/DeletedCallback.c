
ZunResult th06::Supervisor::DeletedCallback(Supervisor *param_1)

{
  MidiOutput *this;
  int local_8;
  
  AnmManager::ReleaseVertexBuffer(g_AnmManager);
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
      operator_delete(this);
    }
    param_1->midi_output = (MidiOutput *)0x0;
  }
  ReplayManager::SaveReplay((char *)0x0,(char *)0x0);
  TextHelper::ReleaseTextBuffer();
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
  return ZUN_SUCCESS;
}

