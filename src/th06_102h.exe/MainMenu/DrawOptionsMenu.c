
int __thiscall MainMenu::DrawOptionsMenu(MainMenu *this)

{
  AnmVm *OptionsVm;
  int i;
  uint selection;
  
  MoveCursor(this,9);
  OptionsVm = this->vmList + 8;
  for (i = 0; i < 9; i = i + 1) {
    if ((i < 5) || (7 < i)) {
                    /* passing in the same parameter twice. ok */
      setSavedCursorPosition(this,OptionsVm,i,i,this->cursor);
      OptionsVm = OptionsVm + 1;
    }
    else {
      setSavedCursorPosition(this,this->vmList + i + 0x43,i,i,this->cursor);
    }
  }
  for (i = 0; i < 5; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,0,i,(uint)g_Supervisor.cfg.lifeCount);
    OptionsVm = OptionsVm + 1;
  }
  for (i = 0; i < 4; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,1,i,(uint)g_Supervisor.cfg.bombCount);
    OptionsVm = OptionsVm + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,2,i,(uint)g_Supervisor.cfg.colorMode16bit);
    OptionsVm = OptionsVm + 1;
  }
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,4,i,(uint)g_Supervisor.cfg.playSounds);
    OptionsVm = OptionsVm + 1;
  }
  OptionsVm = this->vmList + 0x4d;
  for (i = 0; i < 3; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,3,i,(uint)g_Supervisor.cfg.musicMode);
    OptionsVm = OptionsVm + 1;
  }
  OptionsVm = this->vmList + 0x4b;
  for (i = 0; i < 2; i = i + 1) {
    setSavedCursorPosition(this,OptionsVm,5,i,(uint)this->windowed);
    OptionsVm = OptionsVm + 1;
  }
  if (0x1f < this->stateTimer) {
    if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
       || (((g_CurFrameInput & 0x40) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
      selection = this->cursor;
      if (selection == 0) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        if (g_Supervisor.cfg.lifeCount == 0) {
          g_Supervisor.cfg.lifeCount = 5;
        }
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount - 1;
      }
      else if (selection == 1) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        if (g_Supervisor.cfg.bombCount == 0) {
          g_Supervisor.cfg.bombCount = 4;
        }
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount - 1;
      }
      else if (selection == 2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        if (g_Supervisor.cfg.colorMode16bit == 0) {
          g_Supervisor.cfg.colorMode16bit = 2;
        }
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit - 1;
      }
      else if (selection == 3) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        Supervisor::StopAudio(&g_Supervisor);
        if (g_Supervisor.cfg.musicMode == OFF) {
          g_Supervisor.cfg.musicMode = WAV|MIDI;
        }
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + ~OFF;
        Supervisor::SetupMidiPlayback(&g_Supervisor,"bgm/th06_01.mid");
        Supervisor::PlayAudio(&g_Supervisor,"bgm/th06_01.mid");
      }
      else if (selection == 4) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        if (g_Supervisor.cfg.playSounds == 0) {
          g_Supervisor.cfg.playSounds = 2;
        }
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds - 1;
      }
      else if (selection == 5) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        if (this->windowed == false) {
          this->windowed = true;
        }
        this->windowed = (bool)(this->windowed + -1);
      }
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      this->cursor = 8;
      SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
    }
    if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
       || (((g_CurFrameInput & 0x80) != 0 && (g_IsEigthFrameOfHeldInput != 0)))) {
      selection = this->cursor;
      if (selection == 0) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount + 1;
        if (4 < g_Supervisor.cfg.lifeCount) {
          g_Supervisor.cfg.lifeCount = 0;
        }
      }
      else if (selection == 1) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount + 1;
        if (3 < g_Supervisor.cfg.bombCount) {
          g_Supervisor.cfg.bombCount = 0;
        }
      }
      else if (selection == 2) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit + 1;
        if (1 < g_Supervisor.cfg.colorMode16bit) {
          g_Supervisor.cfg.colorMode16bit = 0;
        }
      }
      else if (selection == 3) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        Supervisor::StopAudio(&g_Supervisor);
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + WAV;
        if (MIDI < g_Supervisor.cfg.musicMode) {
          g_Supervisor.cfg.musicMode = OFF;
        }
        Supervisor::SetupMidiPlayback(&g_Supervisor,"bgm/th06_01.mid");
        Supervisor::PlayAudio(&g_Supervisor,"bgm/th06_01.mid");
      }
      else if (selection == 4) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds + 1;
        if (1 < g_Supervisor.cfg.playSounds) {
          g_Supervisor.cfg.playSounds = 0;
        }
      }
      else if (selection == 5) {
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_MOVE_MENU,0);
        this->windowed = (bool)(this->windowed + '\x01');
        if (true < this->windowed) {
          this->windowed = false;
        }
      }
    }
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      selection = this->cursor;
      if (selection == 6) {
        Supervisor::StopAudio(&g_Supervisor);
        g_Supervisor.cfg.lifeCount = 2;
        g_Supervisor.cfg.bombCount = 3;
        g_Supervisor.cfg.musicMode = WAV;
        g_Supervisor.cfg.playSounds = 1;
        g_Supervisor.cfg.defaultDifficulty = NORMAL;
        g_Supervisor.cfg.windowed = false;
        g_Supervisor.cfg.frameskipConfig = 0;
        Supervisor::SetupMidiPlayback(&g_Supervisor,"bgm/th06_01.mid");
        Supervisor::PlayAudio(&g_Supervisor,"bgm/th06_01.mid");
      }
      else if (selection == 7) {
        this->gameState = STATE_KEYCONFIG;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          this->vmList[i].pendingInterrupt = 5;
        }
        this->cursor = 0;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_SELECT,0);
        *(undefined4 *)this->controlMapping = g_ControllerMapping._0_4_;
        *(undefined4 *)(this->controlMapping + 2) = g_ControllerMapping._4_4_;
        *(undefined4 *)(this->controlMapping + 4) = g_ControllerMapping._8_4_;
        *(undefined4 *)(this->controlMapping + 6) = g_ControllerMapping._12_4_;
        this->controlMapping[8] = g_ControllerMapping.skipButton;
        g_ControllerMapping.upButton = -1;
        g_ControllerMapping.downButton = -1;
      }
      else if (selection == 8) {
        this->gameState = STATE_MAIN_MENU;
        this->stateTimer = 0;
        for (i = 0; i < 0x7a; i = i + 1) {
          this->vmList[i].pendingInterrupt = 2;
        }
        this->cursor = 6;
        SoundPlayer::PlaySoundByIdx(&g_SoundPlayer,SOUND_BACK,0);
        if (((this->colorMode16bit != g_Supervisor.cfg.colorMode16bit) ||
            (this->windowed != g_Supervisor.cfg.windowed)) ||
           (this->frameskipConfig != g_Supervisor.cfg.frameskipConfig)) {
          g_Supervisor.cfg.windowed = this->windowed;
          g_Supervisor.cfg.frameskipConfig = this->frameskipConfig;
          g_Supervisor.curState = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

