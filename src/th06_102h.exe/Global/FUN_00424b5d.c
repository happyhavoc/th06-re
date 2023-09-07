
void FUN_00424b5d(char *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint unaff_retaddr;
  char *local_22c;
  char *local_228;
  char *local_21c;
  char *local_218;
  char local_20c [256];
  char local_10c [256];
  uint local_c;
  char *local_8;
  
  pvVar2 = g_GameContext.unknown_1b0;
  local_c = __security_cookie ^ unaff_retaddr;
  if (g_GameContext.cfg.musicMode == MIDI) {
    if (g_GameContext.unknown_1b0 != (void *)0x0) {
      FUN_004224e0(g_GameContext.unknown_1b0);
      FUN_00422380((int)pvVar2,param_1);
      FUN_00422490((int)pvVar2);
    }
  }
  else if (g_GameContext.cfg.musicMode == WAV) {
    local_218 = param_1;
    local_21c = local_20c;
    do {
      cVar1 = *local_218;
      *local_21c = cVar1;
      local_218 = local_218 + 1;
      local_21c = local_21c + 1;
    } while (cVar1 != '\0');
    local_228 = param_1;
    local_22c = local_10c;
    do {
      cVar1 = *local_228;
      *local_22c = cVar1;
      local_228 = local_228 + 1;
      local_22c = local_22c + 1;
    } while (cVar1 != '\0');
    local_8 = _strrchr(local_20c,L'.');
    local_8[1] = 'w';
    local_8[2] = 'a';
    local_8[3] = 'v';
    local_8 = _strrchr(local_10c,L'.');
    local_8[1] = 'p';
    local_8[2] = 'o';
    local_8[3] = 's';
    FUN_00430a50(local_20c);
    iVar3 = SoundPlayer::FUN_00430e10(&g_SoundPlayer,local_10c);
    if (iVar3 < 0) {
      SoundPlayer::playBGM(&g_SoundPlayer,0);
    }
    else {
      SoundPlayer::playBGM(&g_SoundPlayer,1);
    }
  }
  __security_check_cookie(local_c ^ unaff_retaddr);
  return;
}

