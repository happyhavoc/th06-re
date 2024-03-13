
undefined4 __thiscall MainMenu::FUN_00439137(MainMenu *this)

{
  AnmVm *local_c;
  int local_8;
  int iVar1;
  short sVar2;
  
  MoveCursor(this,9);
  local_c = this->AnmVMArray + 8;
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    if ((local_8 < 5) || (7 < local_8)) {
      FUN_00438ef8(this,(int)local_c,local_8,local_8,this->cursor);
      local_c = local_c + 1;
    }
    else {
      FUN_00438ef8(this,(int)(this->AnmVMArray + local_8 + 0x43),local_8,local_8,this->cursor);
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,0,local_8,(uint)g_Supervisor.cfg.lifeCount);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,1,local_8,(uint)g_Supervisor.cfg.bombCount);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,2,local_8,(uint)g_Supervisor.cfg.colorMode16bit);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,4,local_8,(uint)g_Supervisor.cfg.playSounds);
    local_c = local_c + 1;
  }
  local_c = this->AnmVMArray + 0x4d;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,3,local_8,(uint)g_Supervisor.cfg.musicMode);
    local_c = local_c + 1;
  }
  local_c = this->AnmVMArray + 0x4b;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(this,(int)local_c,5,local_8,(uint)(byte)this->field_0x8231);
    local_c = local_c + 1;
  }
  if (0x1f < this->stateTimerMaybe) {
    if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
       || (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = this->cursor;
      if (iVar1 == 0) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.lifeCount == 0) {
          g_Supervisor.cfg.lifeCount = 5;
        }
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount - 1;
      }
      else if (iVar1 == 1) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.bombCount == 0) {
          g_Supervisor.cfg.bombCount = 4;
        }
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount - 1;
      }
      else if (iVar1 == 2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.colorMode16bit == 0) {
          g_Supervisor.cfg.colorMode16bit = 2;
        }
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit - 1;
      }
      else if (iVar1 == 3) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        Supervisor::FUN_00424d38(&g_Supervisor);
        if (g_Supervisor.cfg.musicMode == OFF) {
          g_Supervisor.cfg.musicMode = WAV|MIDI;
        }
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + ~OFF;
        isMusicMutedWtf();
        Supervisor::PlayAudio("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.playSounds == 0) {
          g_Supervisor.cfg.playSounds = 2;
        }
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds - 1;
      }
      else if (iVar1 == 5) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        if (this->field_0x8231 == '\0') {
          this->field_0x8231 = 2;
        }
        this->field_0x8231 = this->field_0x8231 + -1;
      }
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      this->cursor = 8;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
    }
    if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
       || (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
      iVar1 = this->cursor;
      if (iVar1 == 0) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount + 1;
        if (4 < g_Supervisor.cfg.lifeCount) {
          g_Supervisor.cfg.lifeCount = 0;
        }
      }
      else if (iVar1 == 1) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount + 1;
        if (3 < g_Supervisor.cfg.bombCount) {
          g_Supervisor.cfg.bombCount = 0;
        }
      }
      else if (iVar1 == 2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit + 1;
        if (1 < g_Supervisor.cfg.colorMode16bit) {
          g_Supervisor.cfg.colorMode16bit = 0;
        }
      }
      else if (iVar1 == 3) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        Supervisor::FUN_00424d38(&g_Supervisor);
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + WAV;
        if (MIDI < g_Supervisor.cfg.musicMode) {
          g_Supervisor.cfg.musicMode = OFF;
        }
        isMusicMutedWtf();
        Supervisor::PlayAudio("bgm/th06_01.mid");
      }
      else if (iVar1 == 4) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds + 1;
        if (1 < g_Supervisor.cfg.playSounds) {
          g_Supervisor.cfg.playSounds = 0;
        }
      }
      else if (iVar1 == 5) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xc);
        this->field_0x8231 = this->field_0x8231 + '\x01';
        if (1 < (byte)this->field_0x8231) {
          this->field_0x8231 = 0;
        }
      }
    }
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      iVar1 = this->cursor;
      if (iVar1 == 6) {
        Supervisor::FUN_00424d38(&g_Supervisor);
        g_Supervisor.cfg.lifeCount = 2;
        g_Supervisor.cfg.bombCount = 3;
        g_Supervisor.cfg.musicMode = WAV;
        g_Supervisor.cfg.playSounds = 1;
        g_Supervisor.cfg.defaultDifficulty = 1;
        g_Supervisor.cfg.windowed = false;
        g_Supervisor.cfg.frameskipConfig = 0;
        isMusicMutedWtf();
        Supervisor::PlayAudio("bgm/th06_01.mid");
      }
      else if (iVar1 == 7) {
        this->gameState = STATE_KEYCONFIG;
        this->stateTimerMaybe = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 5;
        }
        this->cursor = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,10);
        sVar2 = g_ControllerMapping.bombButton;
        (this->controlMapping).shootButton = g_ControllerMapping.shootButton;
        (this->controlMapping).bombButton = sVar2;
        sVar2 = g_ControllerMapping.menuButton;
        (this->controlMapping).focusButton = g_ControllerMapping.focusButton;
        (this->controlMapping).menuButton = sVar2;
        (this->controlMapping).upButton = g_ControllerMapping.upButton;
        (this->controlMapping).downButton = g_ControllerMapping.downButton;
        sVar2 = g_ControllerMapping.rightButton;
        (this->controlMapping).leftButton = g_ControllerMapping.leftButton;
        (this->controlMapping).rightButton = sVar2;
        (this->controlMapping).skipButton = g_ControllerMapping.skipButton;
        g_ControllerMapping.upButton = -1;
        g_ControllerMapping.downButton = -1;
      }
      else if (iVar1 == 8) {
        this->gameState = STATE_MAIN_MENU;
        this->stateTimerMaybe = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          this->AnmVMArray[local_8].pendingInterrupt = 2;
        }
        this->cursor = 6;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,0xb);
        if (((this->field_0x8230 != g_Supervisor.cfg.colorMode16bit) ||
            ((bool)this->field_0x8231 != g_Supervisor.cfg.windowed)) ||
           (this->field_0x8232 != g_Supervisor.cfg.frameskipConfig)) {
          g_Supervisor.cfg.windowed = (bool)this->field_0x8231;
          g_Supervisor.cfg.frameskipConfig = this->field_0x8232;
          g_Supervisor.curState = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

