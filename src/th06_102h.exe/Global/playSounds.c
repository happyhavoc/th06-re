
void __fastcall playSounds(SoundPlayer *param_1)

{
  int iVar1;
  int idx;
  
  if ((param_1->directsound8_uninit != (DirectSound8Player *)0x0) &&
     (g_GameContext.cfg.playSounds != 0)) {
    for (idx = 0; (idx < 3 && (-1 < param_1->soundBuffersToPlay[idx])); idx = idx + 1) {
      iVar1 = param_1->soundBuffersToPlay[idx];
      param_1->soundBuffersToPlay[idx] = -1;
      if (param_1->duplicateSoundBuffers[iVar1] != (LPDIRECTSOUNDBUFFER)0x0) {
        (*param_1->duplicateSoundBuffers[iVar1]->lpVtbl->Stop)
                  (param_1->duplicateSoundBuffers[iVar1]);
        (*param_1->duplicateSoundBuffers[iVar1]->lpVtbl->SetCurrentPosition)
                  (param_1->duplicateSoundBuffers[iVar1],0);
        (*param_1->duplicateSoundBuffers[iVar1]->lpVtbl->Play)
                  (param_1->duplicateSoundBuffers[iVar1],0,0,0);
      }
    }
  }
  return;
}

