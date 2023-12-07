
undefined4 __fastcall MainMenu::FUN_00439137(MainMenu *param_1)

{
  uint uVar1;
  AnmVm *local_c;
  int local_8;
  
  FUN_0043753c(param_1,9);
  local_c = param_1->field0_0x0 + 8;
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    if ((local_8 < 5) || (7 < local_8)) {
      FUN_00438ef8(param_1,(int)local_c,local_8,local_8,param_1->cursor);
      local_c = local_c + 1;
    }
    else {
      FUN_00438ef8(param_1,(int)(param_1->field0_0x0 + local_8 + 0x43),local_8,local_8,
                   param_1->cursor);
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,0,local_8,(uint)g_Supervisor.cfg.lifeCount);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,1,local_8,(uint)g_Supervisor.cfg.bombCount);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,2,local_8,(uint)g_Supervisor.cfg.colorMode16bit);
    local_c = local_c + 1;
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,4,local_8,(uint)g_Supervisor.cfg.playSounds);
    local_c = local_c + 1;
  }
  local_c = param_1->field0_0x0 + 0x4d;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,3,local_8,(uint)g_Supervisor.cfg.musicMode);
    local_c = local_c + 1;
  }
  local_c = param_1->field0_0x0 + 0x4b;
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    FUN_00438ef8(param_1,(int)local_c,5,local_8,(uint)(byte)param_1->field_0x8231);
    local_c = local_c + 1;
  }
  if (0x1f < (int)param_1->unk_81f4) {
    if ((((g_CurFrameInput & 0x40) != 0) && ((g_CurFrameInput & 0x40) != (g_LastFrameInput & 0x40)))
       || (((g_CurFrameInput & 0x40) != 0 && (DAT_0069d90c != 0)))) {
      uVar1 = param_1->cursor;
      if (uVar1 == 0) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.lifeCount == 0) {
          g_Supervisor.cfg.lifeCount = 5;
        }
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount - 1;
      }
      else if (uVar1 == 1) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.bombCount == 0) {
          g_Supervisor.cfg.bombCount = 4;
        }
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount - 1;
      }
      else if (uVar1 == 2) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.colorMode16bit == 0) {
          g_Supervisor.cfg.colorMode16bit = 2;
        }
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit - 1;
      }
      else if (uVar1 == 3) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        Supervisor::FUN_00424d38(&g_Supervisor);
        if (g_Supervisor.cfg.musicMode == OFF) {
          g_Supervisor.cfg.musicMode = WAV|MIDI;
        }
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + ~OFF;
        isMusicMutedWtf();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (uVar1 == 4) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        if (g_Supervisor.cfg.playSounds == 0) {
          g_Supervisor.cfg.playSounds = 2;
        }
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds - 1;
      }
      else if (uVar1 == 5) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        if (param_1->field_0x8231 == '\0') {
          param_1->field_0x8231 = 2;
        }
        param_1->field_0x8231 = param_1->field_0x8231 + -1;
      }
    }
    if (((g_CurFrameInput & 10) != 0) && ((g_CurFrameInput & 10) != (g_LastFrameInput & 10))) {
      param_1->cursor = 8;
      SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
    }
    if ((((g_CurFrameInput & 0x80) != 0) && ((g_CurFrameInput & 0x80) != (g_LastFrameInput & 0x80)))
       || (((g_CurFrameInput & 0x80) != 0 && (DAT_0069d90c != 0)))) {
      uVar1 = param_1->cursor;
      if (uVar1 == 0) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.lifeCount = g_Supervisor.cfg.lifeCount + 1;
        if (4 < g_Supervisor.cfg.lifeCount) {
          g_Supervisor.cfg.lifeCount = 0;
        }
      }
      else if (uVar1 == 1) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.bombCount = g_Supervisor.cfg.bombCount + 1;
        if (3 < g_Supervisor.cfg.bombCount) {
          g_Supervisor.cfg.bombCount = 0;
        }
      }
      else if (uVar1 == 2) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.colorMode16bit = g_Supervisor.cfg.colorMode16bit + 1;
        if (1 < g_Supervisor.cfg.colorMode16bit) {
          g_Supervisor.cfg.colorMode16bit = 0;
        }
      }
      else if (uVar1 == 3) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        Supervisor::FUN_00424d38(&g_Supervisor);
        g_Supervisor.cfg.musicMode = g_Supervisor.cfg.musicMode + WAV;
        if (MIDI < g_Supervisor.cfg.musicMode) {
          g_Supervisor.cfg.musicMode = OFF;
        }
        isMusicMutedWtf();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (uVar1 == 4) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        g_Supervisor.cfg.playSounds = g_Supervisor.cfg.playSounds + 1;
        if (1 < g_Supervisor.cfg.playSounds) {
          g_Supervisor.cfg.playSounds = 0;
        }
      }
      else if (uVar1 == 5) {
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xc);
        param_1->field_0x8231 = param_1->field_0x8231 + '\x01';
        if (1 < (byte)param_1->field_0x8231) {
          param_1->field_0x8231 = 0;
        }
      }
    }
    if (((g_CurFrameInput & 0x1001) != 0) &&
       ((g_CurFrameInput & 0x1001) != (g_LastFrameInput & 0x1001))) {
      uVar1 = param_1->cursor;
      if (uVar1 == 6) {
        Supervisor::FUN_00424d38(&g_Supervisor);
        g_Supervisor.cfg.lifeCount = 2;
        g_Supervisor.cfg.bombCount = 3;
        g_Supervisor.cfg.musicMode = WAV;
        g_Supervisor.cfg.playSounds = 1;
        g_Supervisor.cfg.defaultDifficulty = 1;
        g_Supervisor.cfg.windowed = false;
        g_Supervisor.cfg.frameskipConfig = 0;
        isMusicMutedWtf();
        FUN_00424b5d("bgm/th06_01.mid");
      }
      else if (uVar1 == 7) {
        param_1->unk_81f0 = 5;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 5;
        }
        param_1->cursor = 0;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,10);
        *(undefined4 *)param_1->field92_0x821c = g_ControllerMapping._0_4_;
        *(undefined4 *)(param_1->field92_0x821c + 2) = g_ControllerMapping._4_4_;
        *(undefined4 *)(param_1->field92_0x821c + 4) = g_ControllerMapping._8_4_;
        *(undefined4 *)(param_1->field92_0x821c + 6) = g_ControllerMapping._12_4_;
        param_1->field92_0x821c[8] = g_ControllerMapping.skipButton;
        g_ControllerMapping.upButton = -1;
        g_ControllerMapping.downButton = -1;
      }
      else if (uVar1 == 8) {
        param_1->unk_81f0 = 2;
        param_1->unk_81f4 = 0;
        for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
          param_1->field0_0x0[local_8].pendingInterrupt = 2;
        }
        param_1->cursor = 6;
        SoundPlayer::FUN_004311e0(&g_SoundPlayer,0xb);
        if (((param_1->field_0x8230 != g_Supervisor.cfg.colorMode16bit) ||
            ((bool)param_1->field_0x8231 != g_Supervisor.cfg.windowed)) ||
           (param_1->field_0x8232 != g_Supervisor.cfg.frameskipConfig)) {
          g_Supervisor.cfg.windowed = (bool)param_1->field_0x8231;
          g_Supervisor.cfg.frameskipConfig = param_1->field_0x8232;
          g_Supervisor.curState = 5;
          return 1;
        }
      }
    }
  }
  return 0;
}

