
undefined4 __thiscall MainMenu::FUN_00439137(MainMenu *this)

{
  AnmVm *vm_unk;
  int i;
  int iVar1;
  short sVar2;
  
  MoveCursor(this,9);
  vm_unk = &this->field8_0x880;
  for (i = 0; i < 9; i = i + 1) {
    if ((i < 5) || (7 < i)) {
                    /* passing in the same parameter twice. ok */
      setSavedCursorPosition(this,vm_unk,i,i,this->cursor);
      vm_unk = vm_unk + 1;
    }
    else {
      setSavedCursorPosition(this,&this->field67_0x4730 + i,i,i,this->cursor);
    }
  }
  for (i = 0; i < 5; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,0,i,(uint)g_Supervisor.cfg.lifeCount);
    vm_unk = vm_unk + 1;
  }
  for (i = 0; i < 4; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,1,i,(uint)g_Supervisor.cfg.bombCount);
    vm_unk = vm_unk + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,2,i,(uint)g_Supervisor.cfg.colorMode16bit);
    vm_unk = vm_unk + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,4,i,(uint)g_Supervisor.cfg.playSounds);
    vm_unk = vm_unk + 1;
  }
  vm_unk = &this->field77_0x51d0;
  for (i = 0; i < 3; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,3,i,(uint)g_Supervisor.cfg.musicMode);
    vm_unk = vm_unk + 1;
  }
  vm_unk = &this->field75_0x4fb0;
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,vm_unk,5,i,(uint)(byte)this->field_0x8231);
    vm_unk = vm_unk + 1;
  }
  if (0x1f < this->stateTimer) {
    if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
       || (((g_CurFrameInput & 0x40) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
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
       || (((g_CurFrameInput & 0x80) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
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
        g_Supervisor.cfg.defaultDifficulty = NORMAL;
        g_Supervisor.cfg.windowed = false;
        g_Supervisor.cfg.frameskipConfig = 0;
        isMusicMutedWtf();
        Supervisor::PlayAudio("bgm/th06_01.mid");
      }
      else if (iVar1 == 7) {
        this->gameState = STATE_KEYCONFIG;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 5;
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
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          (&this->vm1)[i].pendingInterrupt = 2;
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

