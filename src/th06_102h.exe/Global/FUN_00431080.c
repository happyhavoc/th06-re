
undefined4 __fastcall FUN_00431080(SoundPlayer *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint idx;
  
  if (param_1->directsound8_uninit == (DirectSound8Player *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1->directsound).directsound8 == (LPDIRECTSOUND8)0x0) {
    uVar1 = 0;
  }
  else {
    for (idx = 0; (int)idx < 3; idx = idx + 1) {
      param_1->soundBuffersToPlay[idx] = -1;
    }
    for (idx = 0; (int)idx < 0x1a; idx = idx + 1) {
      iVar2 = idx;
      FUN_004306e0(param_1,idx,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
      if (iVar2 != 0) {
        GameErrorContextLog(&g_GameErrorContext,
                            "error : Sound ファイルが読み込めない データを確認 %s\n"
                            ,(&PTR_s_data_wav_plst00_wav_00478628)[idx]);
        return 0xffffffff;
      }
    }
    for (idx = 0; idx < 0x20; idx = idx + 1) {
      (*((param_1->directsound).directsound8)->lpVtbl->DuplicateSoundBuffer)
                ((param_1->directsound).directsound8,
                 param_1->sound_buffers[SOUND_BUFFER_IDX_VOL[idx].buffer_idx],
                 param_1->duplicateSoundBuffers + idx);
      (*param_1->duplicateSoundBuffers[idx]->lpVtbl->SetCurrentPosition)
                (param_1->duplicateSoundBuffers[idx],0);
      (*param_1->duplicateSoundBuffers[idx]->lpVtbl->SetVolume)
                (param_1->duplicateSoundBuffers[idx],(int)SOUND_BUFFER_IDX_VOL[idx].volume);
    }
    uVar1 = 0;
  }
  return uVar1;
}

