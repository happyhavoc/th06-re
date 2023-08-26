
void __fastcall FUN_00431270(SoundPlayer *param_1)

{
  int iVar1;
  int local_8;
  
  if ((param_1->directsound8_uninit != (DirectSound8Player *)0x0) &&
     (g_GameContext.cfg.playSound != 0)) {
    for (local_8 = 0; (local_8 < 3 && (-1 < *(int *)(&param_1->field_0x620 + local_8 * 4)));
        local_8 = local_8 + 1) {
      iVar1 = *(int *)(&param_1->field_0x620 + local_8 * 4);
      *(undefined4 *)(&param_1->field_0x620 + local_8 * 4) = 0xffffffff;
      if (param_1->duplicate_sound_buffer[iVar1] != (LPDIRECTSOUNDBUFFER)0x0) {
        (*param_1->duplicate_sound_buffer[iVar1]->lpVtbl->Stop)
                  (param_1->duplicate_sound_buffer[iVar1]);
        (*param_1->duplicate_sound_buffer[iVar1]->lpVtbl->SetCurrentPosition)
                  (param_1->duplicate_sound_buffer[iVar1],0);
        (*param_1->duplicate_sound_buffer[iVar1]->lpVtbl->Play)
                  (param_1->duplicate_sound_buffer[iVar1],0,0,0);
      }
    }
  }
  return;
}

